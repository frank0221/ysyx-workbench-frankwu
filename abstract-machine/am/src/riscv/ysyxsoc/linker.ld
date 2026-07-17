ENTRY(_start)
PHDRS { fsbl PT_LOAD;bootloader PT_LOAD FLAGS(5); text PT_LOAD FLAGS(5); data PT_LOAD FLAGS(6); }

MEMORY {
  mrom(rx) : ORIGIN = 0x20000000, LENGTH = 4K
  flash(rx): ORIGIN = 0x30000000, LENGTH = 256M
  psram(rwx): ORIGIN = 0x80000000, LENGTH = 4M
  sram(rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  sdram(rwx): ORIGIN = 0xa0000000, LENGTH = 512M
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = ORIGIN(flash);
  /*. = _mrom_start + _entry_offset;*/
  .FSBL : { 
    *(entry) 
    *(.FSBL) 
  } > flash : fsbl
  
  .bootloader : {
    bootloader_vma_start = .;
    *(.bootloader_text)
    bootloader_vma_end = .;
  } > sdram AT > flash : bootloader
  bootloader_lma_start = LOADADDR(.bootloader);

  . = ORIGIN(sdram);
  .text : {
    text_vma_start = .;
    *(.text*)
    . = ALIGN(8);
    text_vma_end = .;
  } > sdram AT > flash : text
  text_lma_start = LOADADDR(.text);
  text_lma_end = LOADADDR(.text) + SIZEOF(.text);

  etext = .;
  _etext = .;

  .rodata : {
    rodata_vma_start = .;
    *(.rodata*)
    rodata_vma_end = .;
  }  > sdram AT > flash :text
  rodata_lma_start = LOADADDR(.rodata);
  rodata_lma_end   = LOADADDR(.rodata) + SIZEOF(.rodata);

  
  .data : {
    data_vma_start = .;
    *(.data*)
    *(.sdata*)
     __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* section information for initial. */
    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(8);
    data_vma_end = .;
  } > sdram AT> flash :data
  data_lma_start = LOADADDR(.data);
  data_lma_end   = LOADADDR(.data) + SIZEOF(.data);
  
  
  edata = .;
  _data = .;

  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
     . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
  _bss_end = .;
  }> sdram : data

  . = ALIGN(4);
  _stack_size = 0x800;
  _stack_pointer = ORIGIN(sram) + LENGTH(sram) - 0x10;

  _heap_start =  .;
  _heap_end = ORIGIN(sdram) + LENGTH(sdram);

}

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void cache_sim(unsigned int pc);
unsigned int hit =0;
unsigned int total =0;
unsigned int pc=0;

int block_size = 3;
int block_num =4;
int way_num =1;

int main(int argc, char *argv[]){
    srand(time(NULL));
    FILE *fp = fopen(argv[1],"r");
    if (fp == NULL) {
        perror("打开文件失败");
        return 1;
    }

    block_size = atoi(argv[2]);
    block_num = atoi(argv[3]);
    way_num = atoi(argv[4]);

    char str[50];
    while (fgets(str, 100, fp) != NULL) {
        
        sscanf(str, "PC = %x", &pc);
        cache_sim(pc);
       //printf("%x\n",pc);
    }
    //printf("cache hit = %d, %f%%",hit,100*(double)hit/(double)total);
    double hit_rate = total == 0
                ? 0.0
                : 100.0 * (double)hit / (double)total;

    printf("%d,%d,%d,%u,%u,%.6f\n",
       block_size,
       block_num,
       way_num,
       hit,
       total,
       hit_rate);
    return 0;
}

#define index pc>>block_size & ((0x01<<block_num)-1)
#define tag pc>>(block_size + block_num)
// #define block_size 2
// #define block_num 4
// #define way_num 4
// #define FIFO 1
#define LRU 1
// #define RANDOM 1

#define MAX_WAY_NUM 16
#define MAX_BLOCK_NUM 16
unsigned int cache[1<<MAX_BLOCK_NUM][MAX_WAY_NUM]={};
unsigned int cache_flag[1<<MAX_BLOCK_NUM]={};
unsigned int cache_valid[1<<MAX_BLOCK_NUM][MAX_WAY_NUM]={};
unsigned int cache_time[1<<MAX_BLOCK_NUM][MAX_WAY_NUM]={};

void cache_sim(unsigned int pc){
    total++;
    for(int i=0; i<way_num; i++)
    {
        if(cache[index][i] == tag && cache_valid[index][i]){
            hit++;
            cache_time[index][i] = total;
            return;
        }
    }
#ifdef FIFO
    cache[index][cache_flag[index]] = tag;
    cache_valid[index][cache_flag[index]] = 1;
    cache_flag[index] = (cache_flag[index] + 1 ) % way_num;
#endif
#ifdef RANDOM 
    int position = -1;

    for (int i = 0; i < way_num; i++) {
        if (!cache_valid[index][i]) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        position = rand() % way_num;
    }

    cache[index][position] = tag;
    cache_valid[index][position] = 1;
#endif
    
#ifdef LRU
    int num=-1,value =cache_time[index][0];

    for (int i = 0; i < way_num; i++) {
        if (!cache_valid[index][i]) {
            num = i;
            break;
        }
    }
    if (num == -1) {
        num=0;
        for(int i=0; i<way_num; i++){
            if(value > cache_time[index][i]){
                num = i;
                value = cache_time[index][i];
            }
           
        }
        
    }
    cache[index][num] = tag;
    cache_valid[index][num] = 1;
    cache_time[index][num] = total;
    
#endif
}
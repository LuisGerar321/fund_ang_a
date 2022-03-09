#include <stdio.h>
#include "/mnt/d/Profecional/UPY/fund_alg_a/libraries/utils.h"


int main(){

    int i = 1, j = 10;
    for(;; i++ , j = j+1){
        printf("i: %d, j: %d\n", i,j);
        sleep(1000);
    };
}
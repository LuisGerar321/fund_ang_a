#include <stdio.h>
#include <stdlib.h>

int* alternatingSums(int arr[], int size) {
    int* result = (int*)malloc(sizeof(int)*2);
    result[1] = 0;
    result[0] = 0;

    for (int i = 0; i < size; i = i + 2) {
        result[0] = result[0] +  arr[i];
        
        if ( i != 0) result[1] = result[1] +  arr[i-1];
        
    }
    return result;
}

int main(int argc, char** argv){

    int arr[5] = {50, 60, 60, 45, 70};
    int* value = alternatingSums(arr, 5);
    printf("%d, %d", value[0], value[1]);    

    return 0;
}
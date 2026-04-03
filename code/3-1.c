#include<stdio.h>

void read_only(const int *arr, int size){
    //arr[0] = 999;

    for(int i = 0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    char str[] = "2026hello";
    char *end;

    long val = my_strtol(str, &end);
    printf("%ld %s\n",val, end);

    return 0;
}

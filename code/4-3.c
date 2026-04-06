#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index;
    scanf("%d",&index);

    if(size-1 < index){
        printf("Error!\n");
    }else{
        printf("%d\n",arr[index]);
    }
    
    return 0;
}

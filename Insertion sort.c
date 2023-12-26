//Insertion sort 
#include<stdio.h>
#include<stdlib.h>

void insertionsort(int array[], int end){
    for(int i = 1;i<end;i++){
        int temp = array[i];
        int j = i - 1;
        while(j>=0 && array[j]>temp){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}


int main(){
    int array[] = {45, 8, 9, 55, 12, 7};
    int size = sizeof(array) / sizeof(array[0]);
    insertionsort(array,size);
    for(int i=0;i<size;i++){
        printf("%d\t", array[i]);
    }
    return 0;
}
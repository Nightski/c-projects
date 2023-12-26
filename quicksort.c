//quicksort by kevin vinsent
#include<stdio.h>
#include<stdlib.h>

int partition(int array[], int start, int end){
    int pivot = array[end];
    int i = start - 1;
    for(int j=start;j<=end;j++){
        if(pivot>array[j]){
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    i++;
    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;
    return i;
}

void quicksort(int array[], int start, int end){
    if(end<=start){
        return;
    }
    int pivot = partition(array, start, end);
    quicksort(array, start, pivot - 1);
    quicksort(array, pivot + 1,end);
}

int main(){
    int array[] = {4, 7, 8, 1, 12, 93, 44};
    int size = sizeof(array) / sizeof(array[0]);
    quicksort(array, 0, size - 1);
    for(int i=0;i<size;i++){
        printf("%d\t", array[i]);
    }
    return 0;
} 
#include<stdio.h>
#include<stdlib.h>

void selectionsort(int ar[], int size){
    for(int i=0; i<size - 1;i++){
        int min=i;
        for(int j=i + 1;j<size;j++){
           if(ar[min] > ar[j]){
            min = j;
           }
        }

        int temp = ar[i];
        ar[i] = ar[min];
        ar[min] = temp;
    }
}


int main()
{
    int ar[] = {6, 4, 5, 9, 1, 2, 8, 3, 7};
    int size = sizeof(ar) / sizeof(ar[0]);
    selectionsort(ar, size);
    for(int i=0;i<size - 1;i++){
        printf("%d\t",ar[i]);
    }
    return 0;
}
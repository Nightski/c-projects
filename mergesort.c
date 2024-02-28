#include<stdio.h>

void merge(int ar[], int low, int mid, int high){
    int i, j, k, b[high + 1];
    i = low;
    j = mid + 1;
    k = low;
    while(i<=mid && j<=high){
        if(ar[i]<ar[j]){
            b[k] = ar[i];
            i++;
            k++;
        }
        else{
            b[k] = ar[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
            b[k] = ar[i];
            i++;
            k++;
    }
    while(j<=high){
            b[k] = ar[j];
            j++;
            k++;
    }
    for(int i =low;i<=high;i++){
        ar[i] = b[i];
    }
} 

void mergesort(int ar[], int low, int high){
    if(low<high){
        int mid = (low + high) / 2;
        mergesort(ar, low, mid);
        mergesort(ar, mid + 1, high);
        merge(ar, low, mid, high);
    }
}



void printing(int ar[], int size){
    for(int i =0;i<size;i++){
        printf("%d\t", ar[i]);
    }
}
int main(){
    int ar[] = {7,5,3,1,5,9,8,4,2,6};
    int size = sizeof(ar) / sizeof(ar[0]);
    mergesort(ar, 0, size - 1);
    printing(ar, size);
    return 0;
}

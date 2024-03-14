#include<stdio.h>
#include<stdlib.h>
#define N 7
int stack[N];
int top = -1;

void push(){
    int x;
    printf("enter element: ");
    scanf("%d", &x);
    if(top == N - 1){
        printf("overflow, pop to insert new");
    }
    else if(top == -1){
        top++;
        stack[top] = x;
    }
}
void pop(){
    if(top == -1){
        printf("underflow");
    }
    else{
        top = top - 1;
    }
}

void display(){
    int p = top;
    while(p){
        printf("%d\t", stack[p]);
        p++;
    }
}

int main(){
    int cho;
    printf("1. Push\n");
    printf("2. pop\n");
    printf("3. Display\n");
    printf("enter choice: ");
    scanf("%d", &cho);
    do{
        switch (cho){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);
        }
    }while(cho!=0);

}
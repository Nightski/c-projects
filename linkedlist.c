#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
};

void print(struct node *p){
    while(p!=NULL){
        printf("%d-->", p->value);
        p=p->next;
    }
}

int main()
{
    struct node *head;
    struct node *one=NULL;
    one=malloc(sizeof(struct node));
    one->value=1;

    struct node *two=NULL;
    two = malloc(sizeof(struct node));
    two->value=2;

    struct node *three=NULL;
    three = malloc(sizeof(struct node));
    three->value=3;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    print(head);
}
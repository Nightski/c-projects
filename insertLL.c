#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

//to get count for position
int getCount(struct node* head)
{
    int count = 0; // Initialize count
    struct node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

//insert newnode at the beginning
struct node *insert(struct node *head){
struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter extra: ");
scanf("%d", &newnode->data);
if(head == NULL){
    head = newnode;
}
else{
    newnode->next = head;
    head = newnode;
}
}


//insert newnode At the End
struct node *insertAtEnd(struct node *head){
struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter extra: ");
scanf("%d", &newnode->data);
struct node *temp;
temp = head;
while(temp->next!=NULL){
    temp = temp->next;
}
temp->next = newnode;

}

//insert after a given position
struct node *insertAtPos(struct node *head){
struct node *newnode, *temp;
newnode = (struct node*)malloc(sizeof(struct node));
int pos;
printf("Enter position after: ");
scanf("%d", &pos);
int gc = getCount(head);

if(pos > gc){
    printf("!!! Invalid position !!!");
}
else{
    temp = head;
    int i = 0;
    while(i < pos){
        temp = temp->next;
        i++;
    }
    printf("Enter extra: ");
    scanf("%d", &newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;
}

}

//to display
void display(struct node *p){
    while(p){
        printf("%d--", p->data);
        p = p->next;
    }
}

int main(){
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    
    one = (struct node*)malloc(sizeof(struct node));
    two = (struct node*)malloc(sizeof(struct node));
    three = (struct node*)malloc(sizeof(struct node));
    
    one->data = 1;
    two->data = 2;
    three->data = 3;
    
    one->next = two;
    two->next = three;
    three->next = NULL;
    
    head = one;
    display(head);
    head = insert (head);
    display(head);
    insertAtEnd(head);
    display(head);
    insertAtPos(head);
    display(head);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void add(int data, struct node* current){
    struct node* head = current;
    while(current -> next != head){
        current = current -> next;
    }
    struct node* new_next = malloc(sizeof(struct node));
    new_next -> next = head;
    new_next -> data = data;
    current -> next = new_next;
}

void print_all(struct node* current){
    struct node* head = current;
    printf("%d\n", current -> data);
    while(current -> next != head){
        current = current -> next;
        printf("%d\n", current -> data);
    }
}

int main() {
    struct node head;
    head.data = 1;
    head.next = &head;
    
    add(2, &head); 
    add(3, &head);
    add(4, &head);
    add(5, &head);
    
    print_all(&head);

    return 0;
}

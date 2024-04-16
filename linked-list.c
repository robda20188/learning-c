#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* ptr;
};

void add(int dt, struct node* pointer){
    while((*pointer).ptr != NULL){
        pointer = (*pointer).ptr;
    }
    struct node newNode;
    newNode.data = dt;
    newNode.ptr = NULL;
    (*pointer).ptr = malloc(sizeof(struct node));
    *((*pointer).ptr) = newNode;
}

void printAll(struct node actualNode){
    while(actualNode.ptr != NULL){
        actualNode = *(actualNode.ptr);
        printf("%d \n", actualNode.data);
    }
}

int main() {
    struct node myList;
    myList.ptr = NULL;
    myList.data = 0;
    
    add(1, &myList);
    add(2, &myList);
    add(3, &myList);
    add(4, &myList);
    add(3, &myList);
    add(2, &myList);
    add(1, &myList);
    
    printAll(myList);
    
    return 0;
}

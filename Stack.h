#ifndef STACK_H
#define STACK_H

struct node {
    int data;
    node* next;
};

class Stack {
private:
   node* top;

public:
   Stack();
   ~Stack();
   void push(int value);
   int take();
   bool empty();
};

#endif



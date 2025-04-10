#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    while (top != nullptr) {
        node* temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::push(int value) {
    node* newnode = new node;
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

int Stack::take() {
    if (top == nullptr)
        return -1;
    node* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

bool Stack::empty() {
    return top == nullptr;
}

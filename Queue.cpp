#include "Queue.h"

Queue::Queue() {
    forward = backward = nullptr;
}

Queue::~Queue() {
    while (forward != nullptr) {
        qnode* temp = forward;
        forward = forward->next;
        delete temp;
    }
}

void Queue::add(int value) {
    qnode* newnode = new qnode;
    newnode->data = value;
    newnode->next = nullptr;

    if (backward == nullptr) {
        forward = backward = newnode;
    }
    else {
        backward->next = newnode;
        backward = newnode;
    }
}

int Queue::remove() {
    if (forward == nullptr) 
        return -1;
    qnode* temp = forward;
    int value = temp->data;
    forward = forward->next;
    if (forward == nullptr) backward = nullptr;
    delete temp;
    return value;
}

bool Queue::empty() {
    return forward == nullptr;
}

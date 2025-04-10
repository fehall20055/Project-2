#ifndef QUEUE_H
#define QUEUE_H

struct qnode {
    int data;
    qnode* next;
};

class Queue {
private:
    qnode* forward;
    qnode* backward;

public:
    Queue();
    ~Queue();
    void add(int value);
    int remove();
    bool empty();
};

#endif


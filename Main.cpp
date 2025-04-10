#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
    double input;
    cout << "Please Enter a decimal number: ";
    cin >> input;

    int partA = (int)input;
    double partB = input - partA;

    Stack stack;
    if (partA == 0) stack.push(0);
    while (partA > 0) {
        stack.push(partA % 2);
        partA = partA / 2;
    }

    Queue queue;
    int count = 0;
    while (partB > 0 && count < 8) {
        partB = partB * 2;
        int bit = (int)partB;
        queue.add(bit);
        partB = partB - bit;
        count++;
    }

    cout << "Your Binary Conversion: ";
    while (!stack.empty()) {
        cout << stack.take();
    }

    if (!queue.empty()) {
        cout << ".";
        while (!queue.empty()) {
            cout << queue.remove();
        }
    }

    cout << endl;
    return 0;
}

// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose a C-style array as the backing storage.

#include "Stack.h"

#include <iostream>

Stack::Stack()
    // Set to default values (empty and -1)
    : data {}
    , topIndex {-1}
{
}

void Stack::push(int value) {
    // Print error message and return from method if the stack is full to avoid stack overflow. If the stack is not
    // full, increment the top index, then assign the value at the top index to the value passed by @param value.
    if (this->isFull()) {
       std::cerr << "Error: Cannot push; stack is full" << std::endl;
        return;
    }
    ++topIndex;
    data[topIndex] = value;

}

void Stack::pop() {
    // Check to see if the stack is empty; if so, print an error message and return; if not, remove the last element by
    // decrementing the top index.
    if (this->isEmpty()) {
        std::cerr << "Error: Cannot pop; stack is empty" << std::endl;
         return;
    }

    --topIndex;
}

int Stack::peek() const {
    //Return -1 if the stack is empty; otherwise, return the element on top of the stack.
    if (topIndex < 0 || topIndex >= CAPACITY) {
        std::cerr << "Error: Cannot peek; out of bounds index " << topIndex << std::endl;
        return -1;
    }
    return data[topIndex];
}

bool Stack::isEmpty() const {
    // Evaluate if the size is 0 (empty) based on the value returned by the size helper method
    return this->size() == 0;
}

bool Stack::isFull() const {
    // Evaluate if size is equal to CAPACITY based on the value returned by the size helper method
    return this->size() == CAPACITY;
}

int Stack::size() const {
    // Size is acquired by reading the value of the top index of the array (-1 if empty, and 99 if full)
    // and adding one
    return topIndex + 1;
}

// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"

Stack::Stack()
    // Set to default values (empty and -1)
    : data {}
    , topIndex {-1}
{
}

void Stack::push(int value) {
    //Used the vector push_back method to add @param to the last element of the stack.
    //data_.push_back(value);
}

void Stack::pop() {
    //Check to see if the stack is empty; if so, return; if not, remove the last element.
    //if (this->isEmpty()) return;
    //data_.pop_back();
}

int Stack::peek() const {
    //Return -1 if the stack is empty; otherwise, return the element on top of the stack.
    //if (this->isEmpty()) return -1;
    //return data_.back();
}

bool Stack::isEmpty() const {
    // Evaluate if the size is 0 (empty) based on the value returned by the size helper method
    return this->size() == 0;
}

bool Stack::isFull() const {
    // Evaluate if size is equal to 100 (full) based on the value returned by the size helper method
    return this->size() == 100;
}

int Stack::size() const {
    // Size is acquired by reading the value of the top index of the array (-1 if empty, and 99 if full)
    // and adding one
    return topIndex + 1;
}

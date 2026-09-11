// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"

void Stack::push(int value) {
    // Used the vector push_back method to add @param to the last element of the stack.
    data_.push_back(value);
}

void Stack::pop() {
    // Check to see if the stack is empty; if so, return; if not, remove the last element.
    if (this->isEmpty()) return;
    data_.pop_back();
}

int Stack::top() const {
    // TODO: return the top element of data_
    // undefined if empty -- callers should check isEmpty() first. We'll
    // harden this kind of thing later in the course.
}

bool Stack::isEmpty() const {
    // Evaluate if empty based on the size helper method
    if (this->size() == 0) return true;
    return false;
}

int Stack::size() const {
    // Size must be static cast into a signed int from an unsigned int.
    return static_cast<int>(data_.size());
}

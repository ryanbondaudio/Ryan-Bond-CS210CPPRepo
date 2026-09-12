// TASK 03 -- An Abstract Data Type (ADT)
//
// An ADT is defined by WHAT operations it supports, not by HOW those
// operations are implemented. A stack is: push, pop, top, isEmpty, size.
// That's the whole contract. Whether it's backed by an array, a
// std::vector, or a linked list is an implementation detail the user of
// this class should never have to think about.
//
// This header is the ADT's public face: the operations, and nothing
// about how they're carried out.

#pragma once

#include <vector>

class Stack {
public:

    Stack();                // Sets default values for empty array and top index of -1.
    void push(int value);   // Add to the top.
    void pop();             // Remove the top (does nothing if empty).
    int peek() const;       // Look at the top without removing it.
    bool isEmpty() const;   // Checks if the array is empty or not.
    bool isFull() const;    // Checks if the array has hit the limit (100).
    int size() const;       // Gives the size of the array as an int.


private:

    int data[100];
    int topIndex;
};

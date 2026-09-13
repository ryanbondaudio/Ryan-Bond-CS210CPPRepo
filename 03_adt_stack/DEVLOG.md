-- Before implementing correct non STL, non vector arrays and methods --

1. Implemented the size method and the isEmpty method. I successfully tested both cases for the isEmpty boolean and
successfully tested the size method.

2. Implemented and verified (through the debugger) that the push and pop methods correctly place and remove items in
a LIFO stack order.

3. Implemented and verified top method is functioning, correctly returning the last element of the stack.

-- After reworking correct methods without STL or vector methods --

1. Implemented the Size(), isFull(), and isEmpty() methods and verified that they function correctly.

2. Implemented the peek() method, which returns prints an error or sentinel value if the index being accessed is 
out of bounds.

3. Implemented push() and pop() to correctly increment the index and add value at element, and decrement index
respectively. Also fixed peek() to return value held at index.
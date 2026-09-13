
-- Before reworking correct non STL, non vector arrays and methods --

1. Logic error in isEmpty method. I implemented isEmpty using this->size and tested it before implementing the size method,
causing isEmpty to return false and the size method to return 1 even when th stack is empty. When I ran the code with an empty
stack, the output was as follows:

Stack size: 1
Is empty? no

2. Fixed a misleading size printout in main during push/pop testing. The console originally printed a size of 3 when
the size should have been 2 (3 push calls and 1 pop call) because the print statement occurred before the pop method was
called. I verified this through debugging and verified that the stack logic is working properly.

-- After reworking correct methods without STL or vector methods --

1. Incorrectly calling the peek method with no body in main, leading to undefined behavior in the program.

2. Fixed push() which included an extra broken condition (returning if stack was empty or full). Fixed to only 
return when full so items can be added when the stack is empty.

3. Fixed peek to return value held at index instead of the index.
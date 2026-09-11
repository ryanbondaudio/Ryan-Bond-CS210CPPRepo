1. Logic error in isEmpty method. I implemented isEmpty using this->size and tested it before implementing the size method,
causing isEmpty to return false and the size method to return 1 even when th stack is empty. When I ran the code with an empty
stack, the output was as follows:

Stack size: 1
Is empty? no

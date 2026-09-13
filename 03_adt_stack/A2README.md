1. The value held by topIndex is -1. Under 0-based indexing, the  top index is evaluated as equal to -1; the boolean
   isEmpty can be set to true based on the formula topIndex + 1 (when empty, this means the size is 0).


2. Step by step through the push function: first, we check if the list is full; if so, return. If the list is not full,
   then increment the top index of the stack by 1, then pass the parameter of the int value to the element held at the
   new top index of the stack. If we reverse this order, then the value is assigned at top index - 1 because we increment
   top index after assignment, which will break the stack by making the top index (our way of tracking where we're at in
   the stack) "point to" a wrong element. This also causes an index-out-of-bounds error.

3. Time complexities for methods
   Push: O(1). We push a single item to the stack.
   Pop: O(1). We remove the last element of the stack.
   Peek: O(1). We return the last element of the stack.
   isEmpty: O(1). Evaluates if the size is 0 or not
   isFull: O(1). Evaluates if the size is equal to the capacity (100), but it does not iterate to find the value.
   Size: O(1). Returns the topIndex + 1.

4. When push is called when the stack is full, the program prints an error message to the console and returns without
changing topIndex. Typically, asserts or a try-catch might be used, but in my desperation to avoid STL or try-catches, I decided to let
the program continue without crashing by returning from the push method, having accomplished nothing if the stack is
full, so that the user can still see the information they've requested without breaking the stack.

5. When calling peek, if the stack is empty or over capacity, I printed an index out of bounds error message telling
the user what index they are trying to access and returned a sentinel value of -1 instead of changing topIndex. 
I chose this because the message will let the user know why an error message is occurring, and -1 is the "industry 
standard" to return to indicate a failure. Similarly, pop is called when the stack is empty, an error message occurs, 
and the method returns without altering topIndex.


6. Resizing an array can be done two ways. First, one would need to manually copy a fixed array
 to another fixed array with a different capacity in a resize() method, which will return a pointer to the new
copied array. Alternatively and more commonly, we could change our original array to be dynamically allocated and 
resizable using the new keyword. The time complexity of resize would be O(n) in either case because 
both methods require manual array copying, which differs from O(1) complexities seen in question 3.

7. An advantage of a linked list is that one could actually change what memory address a pointer in a linked list is
   pointing to instead of merely an index. The disadvantage of pointers and linked lists is that we would need to manage
   dangling pointers, which, if left unmanaged, lead to undefined behavior.





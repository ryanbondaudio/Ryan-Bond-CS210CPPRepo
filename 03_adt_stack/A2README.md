1. The value held by top index is -1 which represents an empty list. When top index is evaluated as equal to -1, the 
boolean isEmpty can be set to true based on this index alone.

2. When an item is pushed onto a stack,  the data array is resized
to increment by one and the top pointer is incremented by one, reversing the order would break the stack due 
to a out of bounds index error
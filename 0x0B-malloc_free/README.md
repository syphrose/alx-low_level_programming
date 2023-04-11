MEMORY ALLOCATION

a) Automatic and Dynamic allocation:
    *automatic is fixed at compile time and is where there can be allocation or deallocation of the needed memory for execution.
   *dynamic on the other hand is flexible and can change during runtime. It
 does not experience memory leaks or fragmentation.

b) Malloc:
  * a function used to dynamically allocate a block of memory on the heap during runtime.
  - it takes a single argument which is the num of bytes of memory to allocate.
  - it returns a pointer to the first byte of the allocated memory block.

c) Free:
  * a function that is used to free the allocated memory back to the heap to be used by other parts of the program. Thus deallocation.

During this task we can use *valgrind to check for memory leak of fragmentation.

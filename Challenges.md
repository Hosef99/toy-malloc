# Challenges

## 1. Disecting Blocks
As of now, when we found a free block and allocate memory in it, it returns a full block, which could be a waste of space, especially when the free block is way bigger than what the user need.

Improve `my_malloc` by cutting the blocks down into smaller pieces when necessary. Take account of the size of the header when doing so.

## 2. Coalescing Blocks
Consider the scenario: our heap is already full, we freed a variable `a` and another variable `b`, which both have a size of 16 bytes. We now want to allocate 32 bytes, but since the `a` block and the `b` block are both blocks with sizes of 16, both are not big enough to contain 32 bytes.

### Part A: Simple Coalescing
Improve `my_free` so we loop through the blocks from the start and coalesce blocks together if they are free consecutively.

### Part B: Efficient Coalescing
Rewrite our system so that when we `my_free(ptr)` a pointer `ptr`, it checks the block before and after it to see if we could glue them together to make a big block (we call this coalescing).

Note: To achieve this, we would need to use a [linked_list](https://en.wikipedia.org/wiki/Linked_list) to store all the free blocks, let's call it `free_list`. Since we will be using a linked list to keep track of all the free blocks, we would need to rewrite practically all our code, including the code for the challenges.

A suggested structure of `free_list` and `header_t` looks like so (technically, you can literally just store a `size_t` variable before the returned pointer):

```c
typedef struct
{
    size_t size;
    void *prev;
    void *next;
} free_t;

typedef struct
{
    size_t size;
} header_t;
```

---

Good luck trying out these challenges! Completing these challenges would unfortunately not win you any prize, but will make you a better developer in many different ways.

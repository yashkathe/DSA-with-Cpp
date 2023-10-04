# Introduction -DS

## What is data structure ?  
During the execution of a program how the program will manage data inside the main memory and perform the operations.  

Data structures are formed in the main memory, during the execution time of a program.  

A data structure is a part of running program.  

## Stack vs Heap memory

### What is memory ?  
Memory is divided into smaller addressable units that are called as bytes. So, memory is divided into bytes.  
  
Every byte will have its own address.  

If you have larger size of RAM, that is 4 GB, or 8 GB, that entire memory is not used as a single unit, but it is divided.  

It is divided into manageable pieces, that are called as **segment**. And, usually the size of a segment will be **64 kilobytes**.

### Breaking down main memory

|HEAP         |  
|STACK        |  
|CODE SECTION |     

The machine code of the program, first it should be brought inside the main memory. So it is brought inside the code section.  

Now, once it is loaded, the CPU will start executing the program, and this program will utilize the remaining memory as divided into stack and heap.  

```cpp
void main()
{
    int a; //2 bytes
    float b; // 4bytes
}
```

### Static Memory Allocation

Now this total 6 bytes of memory is allocated inside the stack.  
So this is called stack frame / activation record of main function.  

Whatever the variables you declare inside your program, or inside a function, the memory for those variables will be created inside the stack.

So this is **static memory allocation**

How many bytes of memory is required by this function was decided at compile time. So it is static. 

The size of the memory is static. 

So, when everything is done at compile time, or before run time, it is called static.

### Stack

In stack the memory is automatically created, and automatically destroyed, the programmer doesn't have to do anything for its allocation and destruction, just programmer has to declare the variable.  


### Heap

Term Heap can be used for organised things, as well as unorganized things.  

Heap memory should be treated like a resource.  
You take the memory... when you don't require, you release the memory.  

_Code section cannot directly access heap memory_
Then how do they access memory? Using pointer.  

## Dynamic memory allocation

```cpp

void main()
{
    int *p;
    p = new int[5]

    delete []p;
}

```

So whenever we see **new** it means memory is allocated in heap.  

Program cannot directly access the memory in heap, it has to access pointer, pointer will give the address of that memory, then the program can reach that location and access these integers.  

Whenever you allocate the memory, heap memory, and if you don't need it, release(delete) the memory.  

## Types of data structure

1. Physical DS
2. Logical DS

**1. Physical DS**  
EG: Array, Linked List  
These data structure decides or defines how the memory is organized, how the memory is allocated.  

An array can be created inside stack and heap.  

Linked list is always created inside a heap. Its head maybe in stack.

**2. Logical DS**  

Now the question is, How you want to utilize those values? How you will be performing insertion and deletion?

What is the discipline that you are going to follow? That discipline is defined by these data structures,
that is, EG stack, queues, trees, graphs and hash table

## Primitive vs Abstract Datatype

**Primitive Data Type** in C++: These are fundamental data types provided by the language, such as int, float, and char, used to store simple values without any complex behaviors.  

**Abstract Data Type** in C++: Abstract data types are user-defined data structures that encapsulate both data and functions, allowing users to define custom complex data structures like lists or stacks with specific behaviors and operations.  
# Array

## Declaration of array

```cpp

int A[5]

int A[5] = {2,4,6,8,10}

int A[5] = {2,4}

int A[] = {2,4,6,8,10,12}

```

## Traversig an array 

```cpp

// using i to access values in an array

for(int i = 0 ;i < 5 ; i++){
    cout << A[i] << endl ;
}

// using pointer to access values in an array

for(int i = 0 ;i < 5 ; i++){
    cout << *(A+2) << endl ;
}
```

## Static vs Dyamic Arrays

Once an array is created, it's size cannot be modified

#### 1. Static

```cpp

void main(){
    int A[5];
}

```
This array is static  
Because the size of this array was decided at the compile time  
This array is created in a stack  

#### 2. Dynamic

```cpp

int *p;

//in c++
p= new int[5];

//in c we use malloc
p=(int *)malloc(5 *sizeof(int))

//accessing array elements

for(i = 0; i < 5; i++>){
    cout << p[i];
}

delete []p

```
This array is dynamic  
with dynamic allocation Arrays are typically stored on the heap, which is a larger, more flexible region of memory 

## How to increase array size

You can't increase array size  
But you can use an indirect method to do so

```cpp

int *p = new int[5];

// you create another array
int *q = new int[10];

// and copy the elements of p to q
for(i=0;i<5;i++){
    q[i] = p[i];
}

// now delete p and, point p towards q and point q towards null
delete []p;
p=q;
q=null;

```

# 2-D Arrays

## Decleration of Arrays

```cpp
int A[3][4]; // 3 - rows ad 4 - columns

int A[3][4] ={{1,2,3,4},{5,6,7,8},{,1,2,3,4}};

```
#### Declaring 2d array using pointer

Here you have to manually insert nested arrays

```cpp

int *A[3];

A[0] = new int[4] 
A[1] = new int[4] 
A[2] = new int[4] 

```
This is a array of pointers inside the stack  
but actually arrays in the heap.

#### Declaring 2d array using double pointer 

```cpp
// A is like a variable, double pointer, so this is created inside stack
int **A;

// This is an array of pointers of type integer.
// This is created in heap
A = new int[3]

// Creating nested arrays
// Even this is created inside heap
A[0] = new int[4]
A[1] = new int[4]
A[2] = new int[4]

// Only **A is created in stack

```

## Accessing Array Element

```cpp
A[1][2] // Elemnent in 1st row and 2nd column
```

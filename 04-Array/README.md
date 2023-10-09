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
## Array representation in compilers 

consider variable x

```cpp
int x = 10
```
This variable is stored in an **address** say **100/101**  


So now machine code should refer the location with the addresses, not by name.  
Then **compiler** has to **convert name into an address**.  

When the memories are allocated?  
During execution.

So it means the memory for the variable is allocated at execution.  
Then only the address can be known.  

Then the how compiler will write on the address at compile time?  

So compiler will write on a formula for obtaining the address.  

Any location in an array, index in an array, can be accessed with the help of **base address**.

So lets say our base address is 200

```cpp
int a[5] ={3,5,8,4,2}
A[3] = 10
```

So the formula is as follows 

#### A[3] = 200 + 3 * 4  = 212

- what is 200?  => Base address of array

- what is 3 ?
=> Index I want to obtain

- what is 4 ?
=> It is the bytes occupied by integer

So final address of 3rd index will be 212

##### So the formula for calculating relative address of element by compiler is:  

**Addr(A[I]) = Lo + i * w**  
Where Lo = base address  
i = index  
w = size of data type

## Row major Formula for 2-D Array

How the elements of two dimensional array are stored in single dimension array? How the mapping is done?  

```sql
Array (2D)
+---+---+---+
| A | B | C |
+---+---+---+
| D | E | F |
+---+---+---+
| G | H | I |
+---+---+---+
```

1. First one is row-major mapping
2. Second one is column-major mapping.

#### Row-major mapping:   
In a row-major mapping, data elements are stored consecutively in memory row by row, meaning elements in the same row are stored together.  

```text
Row-Major Mapping (assuming element_size = 1 byte):
Base Address = 1000

For element at row = 1, column = 2:
Memory Address = 1000 + (1 * 3 + 2) * 1 = 1005
```

```text
Memory Address = Base Address + (row_index * number_of_columns + column_index) * element_size
```

#### Column-major mapping:   
In a column-major mapping, data elements are stored consecutively in memory column by column, meaning elements in the same column are stored together.

```text
Column-Major Mapping (assuming element_size = 1 byte):
Base Address = 1000

For element at row = 1, column = 2:
Memory Address = 1000 + (2 * 3 + 1) * 1 = 1007

```

```text
Memory Address = Base Address + (column_index * number_of_rows + row_index) * element_size
```

## Formula for nD Arrays

#### Row-major mapping:   

```text
Memory Address = Base Address + [(index_1 * stride_1) + (index_2 * stride_2) + ... + (index_n * stride_n)] * element_size
```

#### Column-major mapping:   

```text
Memory Address = Base Address + [(index_n * stride_n) + (index_{n-1} * stride_{n-1}) + ... + (index_1 * stride_1)] * element_size
```

1. **Base Address**: The starting memory address of the array.  
2. **index_1, index_2, ... index_n**: The indices of the element you want to access along each dimension.    
3. **stride_1, stride_2, ..., stride_n**: The stride values represent the number of elements you need to skip to move from one element to the next along each dimension. These depend on the memory layout (row-major or column-major).  
4. **element_size**: The size (in bytes) of each element in the array

## Formula for 3-D Arrays

#### Row-major mapping:   

```text
Memory Address = Base Address + (index_1 * (size_2 * size_3) + index_2 * size_3 + index_3) * element_size
```

#### Column-major mapping:   

```text
Memory Address = Base Address + (index_3 * (size_1 * size_2) + index_2 * size_1 + index_1) * element_size
```

1. **Base Address**: The starting memory address of the array.  
2. **index_1, index_2, ... index_n**: The indices of the element you want to access along each dimension.    
3. **size_1, size_2, and size_3**: The sizes of the dimensions in the 3D array (X, Y, and Z).  
4. **element_size**: The size (in bytes) of each element in the array

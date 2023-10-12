# Array - ADT

That is array as **_abstract data type_**.  
Abstract data type means representation of data and the set of operations on the data.  

## Appending - Add(x) / Append(x)

#### Adding array to end of an array

```cpp

A[Length] = x;

Length++;

```

## Insert - insert(4,15)

```cpp

for (int i = Length; i > index; i++)
{
    A[i] = A[i - 1];
}

A[index] = x;
Length++;

```

## Delete - delete(x)

```cpp

x = A[index] // take out element we want to delete

// since we have taken out this element we leave a blank space in between  

// fill the empty spaces
for (int i = index; i < Length - 1> ; i++)
{
    A[i] = A[i + 1];
}

```

# Search Methods

1. Linear Search
2. Binary Search

## 1. Linear Search

So if the key element is found in an array, we say search is successful.  
If it is not found, then we say it is unsuccessful.  

using **for loop** 

```cpp

for(let i = 0; i < Length; i++>)
{
    if(key==A[i])
        return i;
}

// if element is not found
return -1

```

We can **improve this linear search**

#### 1. Transposition

So you can move a key element closer to index 0 everytime whrn it is repeatedly searched,
you can move it one step forward.  
This is called **transposition**  


```cpp

for(let i = 0; i < Length; i++>)
{
    if(key==A[i])
    {
        swap(A[i] , A[i-1]);
        return i - 1;
    }
}

// if element is not found
return -1

```

#### 2. Move to head

If you are searching for a key element which is found here after performing eight comparisons.  
Then once it is found, you bring it in the beginning.  
Swap it with the first element.  

```cpp

for(let i = 0; i < Length; i++>)
{
    if(key==A[i])
    {
        swap(A[i] , A[0]);
        return 0;
    }
}

// if element is not found
return -1
```

## 2. Binary Search

So why this call as binary search?  

Because it'll always check for a key element in the middle of a sorted list and it will split the list into two.

So for performing binary search we need three index variables.  
1. lower   
2. higher   
3. middle  

```cpp
int A[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}
```

> Eg: Consider and array with 15 elements and the key is 4. So  
L=0  
H=14  
M=7  

---------------------------------------------------  

So is our key element (4) higher or lower than M (7)  
It is lower  
So move H to left (mid - 1)  

Recalculate mid
L=0  
H=6
M=3

---------------------------------------------------

So is our key element (4) higher or lower than M (3) 
It is higher  
So move L to right (mid + 1)

Recalculate mid
L=4  
H=6
M=5

---------------------------------------------------

So is our key element (4) higher or lower than M (5) 
It is lower  
So move H to left (mid -1)

Recalculate mid
L=4  
H=4
M=4

So now our mid is same as key element  

---------------------------------------------------

#### Iterative version

```cpp
Algorithm BinSearch(l,h,key)
{

while(l<=h)
{
    mid = [(l+h)/2];
    
    if(key==A[mid])
    {
        return mid;
    }
    else if (key<A[mid])
    {
        h=mid-1;
    }
    else
    {
        l=mid+1;
    }
}

return-1;
}
```

#### Recursive version

So if low is less than equal to high at least there is one element.  
If low is greater than high, there are zero elements.  

```cpp
Algorithm RecBinSearch(l,h,key)
{
    if(l<=h)
    {
        mid(l+h) / 2;
        if(key == A[mid])
            return mid;;
        else if(key < A[mid])
            //So this procedure can call itself recursively for searching on the left hand side
            return RecBinSearch(l,mid-1,key);
        else
            //So this procedure can call itself recursively for searching on the right hand side
            return RecBinSearch(mid+1,h,key);
    }
    
    return -1;
}
```

## Get - get(index)

To know a element at a particular index.  

```cpp

if(index >= 0 && index < Length)
{
    return A[index];
}

```

## Set - set(index,x)

This method is to replace a value at a particular index.  

```cpp

if(index >= 0 && index < Length)
{   
    
    A[index] = x;
}

```

## Max - max()

For finding a maximum element in an unsorted list, I have to check the entire list.  

If the list is already sorted, then last element is a maximum element.  

```cpp
max = A[0];

for(int i = 0; i < Length; i++)
{
    if(A[i] > max)
        max = A[i];
}

return max;

```
Vice Versa for **Min**

## Sum - sum()

#### Iterative Version

```cpp

int total = 0;

for(int i = 0; i < Length; i++)
{
    Total = Total + A[i];
}

return Total;

```

#### Recursive Version

```cpp
int Sum(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
        s += arr.A[i];
    return s;
}
```

## Reversing an Array

#### Method 1

1. Create a seconnd array
2. Copy elemets in reverse order from array 1 to array 2  
3. The copy back elements from array 2 to array 1  

#### Methoda 2 

1. Swap First and Last elemnt 
2. Keep coming inwards from left hand side and right hand side  


## Left Shift 

Keep in swapping arrays to the left hand side

```text

// initial array

|0|1|2|3|4|

// after left shift

|1|2|3|4|0|

```

In this process we lose one element on left hand side whci h is added back to rihgt hand side  

**Right shift** is vice versa of this  

## Inseting in a sorted Array

1. Start comparing elements from the last 
2. And start shifting elemnts to the right 
3. Eg: SO if x = 18
4. Start shifting A[i+1] = A[i] ahead  

```cpp
while(A[i] > x)
{
    A[i+1] = A[i];
    i--;
}

A[i+1] = x;
```

## Checking if array is sorted - isSorted(A,n)

Where n = number of elements  

```cpp
for(i=0; i<n-1; i++)
{
    if(A[i] > A[i+1])
        return false
}
return true
```

## Sorting -ve numbers and +ve numbers on left and right side respectively  

1. We take two pointers 
   1. i = left hand side - which counts positive numbers  - 0
   2. j = right hand side - which counts negative numbers  - Length - 1
2. When the number is -ve let i move ahead 
3. When the number is +ve j should decrement

```cpp
while(i < j)
{
    while(A[i] < 0) 
        i++
    while (A[i] >= 0 )
        j++
    
    if(i<j)
    {
        swap(A[i] , A[j])
    }
}

```

## Merging Arrays
 
Merging can only be done in **sorted array**  

We have to combine two arrays to get a sorted array  

1. Suppose we have two arrays A and B
2. Compare A[i] to B[i]
3. Whichever one is smaller move to Array C and increment its pointer
4. Keep on doing this till both pointers are exhausted  

```cpp

while(i < m && j < n)
{
    if(A[i] < b[j])
    {
        C[k++] = A[i++];
    }
    else
    {
        C[k++] = B[j++];
    }
}

```
# Set Operations  

1. Union
2. Intersection
3. Difference
4. Set Membership
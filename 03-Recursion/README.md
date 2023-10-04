# Recursion

There are two examples of recursion:

## 1

```cpp

void func(int n)
{
    if(n > 0)
    {
        cout << n ;
        func(n - 1);
    }
}

void main()
{
    int x = 3;
    fun1(x);
}

```

So here the output will be 3, 2, 1
Because we are printing and then calling the function

## 2

```cpp

void func(int n)
{
    if(n > 0)
    {
        func(n - 1);
        cout << n ;
    }
}

void main()
{
    int x = 3;
    fun1(x);
}

```

So here the output will be 1, 2, 3
Because we are calling the function and then printing later 


### Light bulb and room analogy

## 1

Go to next room and switch on bulb

So until I hit the wall or end of room I will keep going **_(call phase)_**  
Once I hit the end I will turn on lights from end room to start room  **_(return phase)_**
So my output is **3 2 1**

## 2

Go to next room and switch on bulb

Here I will turn on lights as I pass the next rooms **_(call phase)_**  
Once I hit the end I will just return back **_(return phase)_**
So my output is **1 2 3**

## Generalising Recursion  

If there is something before a function call it is executed at calling time  and vice versa for other  
so #1 is descending #2 is ascending  

### Loops vs Recursion

Both of these have repetetion but the main differece is 
**loop** can only be **ascending** but,  
**recursion** can be both **ascending** as well as **descending**  

## Recurrence Relation to find Time Complexity

In recurrence relation we assume that the time taken by this function is T(n)  

```cpp
void func(int n)        //-------------- T(n)
{
    if(n > 0)           //-------------- T=1
    {
        cout << n ;     //-------------- T=1
        func(n - 1);    //-------------- T(n-1)
    }
}
```
T(n) = T(n-1) + 2   =>   when => n > 0  
t(n) = 1            =>   when => n = 0  

T(n) = T(n-1) + 2
We can replace 2 by 1 because it is a constant
T(n) = T(n-1) + 1

We can write it as

T(n) = T(n-2) + 1 + 1 = T(n-2) + 2
.....  
T(n) = T(n-k) + k

Assume (n - k) = 0  
hence n = k   

T(n) = T(0) + 

T(n) = 1 + n  => o(n)

## Types of recursion

1. Tail Recursion
2. Head Recursion
3. Tree Recursion
4. Indirect Recursion
5. Nested Recursion  


### 1. Tail Recursion

If a recursive function is calling itself and that **recursive call**, is the **last statement** in a function.  
Then it is called as tail recursion.  

```cpp
void func(int n)        
{
    if(n > 0)           
    {
        cout << n ;     
        func(n - 1);    
    }
}
```

### 2. Head Recursion

A function doesn't have to process or perform any operation at the time of calling. It has to **do everything** only at the **time of returning**.
Then it is called as Head recursion.  

```cpp
void func(int n)        
{
    if(n > 0)           
    {
        func(n - 1);    
        cout << n ;     
    }
}
```

### 3. Tree Recursion

If a recursive function is calling itself more than one time.
Then it is Tree recursion.  

```cpp
void func(int n)        
{
    if(n > 0)           
    {
        cout << n ;     
        func(n - 1);    
        func(n - 1);    
    }
}
```
func(3)  
3 func(2) func(2)  
2 func(1) func(1)    
1 func(0) func(0)  
v        v      ^  

Time Complexity  : O(2^n)  
Space Complexity : O(n)

### 4. Indirect Recursion

```cpp
void funcA(int A)
{
    if(n > 0)
    {
        cout << n << endl;
        funcB(n-1)
    }
}

void funcB(int A)
{
    if(n > 1)
    {
        cout << n << endl;
        funcA(n/2)
    }
}
```

### 5. Nested Recursion
In nested recursion, a recursive function will pass parameter as a recursive call.  

```cpp
int func(int n)
{
    if(n > 100)
        return n - 10;
    else
        return func(func(n+1))
}
```
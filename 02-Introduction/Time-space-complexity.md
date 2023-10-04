# Time and Space Complexity

**Time Complexity** basically depends on the procedure that you are adopting.  

So the time is n. So, it means in a list, if you have some n elements and you are going through all of them just once then the time is n.  

### -> O(n) where n is the number of elements.  

We can measure the time based on the work that you are doing, means according to your procedure, if we're clear with our procedure, we can know the time, or else from the code, program code also you can find the time complexity. 

```cpp

for(){
    for(){

    }
}
```

### -> O(n^2) where n is the number of elements.  
When you have two nested for loops, it's n^2, simple


```cpp
for(i = n; i < 1 , i = 1/ 2>){

}
```

### -> O(log2n) where n is the number of elements.  
If the value of counter i is getting divided by 2 every time, then it is log n, divided by 2, log n

### -> O(m+n)
Consider a array of linked lists, like total how many elements are there?  

So, here let us say n elements are there, these elements. So, you can see that, these are of different sizes, and here, array of size n.  

So total how much processing is required?
We have to process all these n elements, as well as using this array, so we can say m+n processing

### -> O(log(n))  
In a tree elements are divided by 2, and divided by 2....  
So, if you're spending time upon a tree, along the height of a tree, then it is log n.  
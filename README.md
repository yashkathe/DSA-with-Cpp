# DSA with C++

- [Basics of c++](./01-Basics-C++/)  
  - [Arrays](./01-Basics-C++/01-Arrays.cpp)
  - [Structure](./01-Basics-C++/02-Structure.cpp)
  - [Pointers](./01-Basics-C++/03-Pointers.cpp) 
  - [Refrences](./01-Basics-C++/04-Refrence.cpp)
  - [Pointer to Structure](./01-Basics-C++/05-Pointer-to-structure.cpp)
  - [Functions](./01-Basics-C++/06-Functions.cpp)
  - [Parameter passig methods](./01-Basics-C++/07-Paramter-passing-methods.cpp)
  - [Passing Array as parameter](./01-Basics-C++/08-Array-as-parameter.cpp)
  - [Passing Structure as parameter](./01-Basics-C++/09-Structure-as-parameter.cpp)
- [Introduction](./02-Introduction/Readme.md) 
  - [Static vs Dynamic memory](./02-Introduction/Readme.md) 
  - [Time and Space Complexity](./02-Introduction/Time-space-complexity.md)
- [Recursion](./03-Recursion/)
  - [THEORY](./03-Recursion/README.md)
  - [Basic Recursion](./03-Recursion/01-basic-recursion.cpp)
  - [Static and global Variable](./03-Recursion/02-static-and-global-var.cpp)
  - [Tree Recursion](./03-Recursion/03-tree-recursion.cpp)  
  - [Indirect Recursion](./03-Recursion/04-Indirect-recursion.cpp)  
  - [Nested Recursion](./03-Recursion/05-Nested-Recursion.cpp)    


## Problems

| Problem                                                                     | Link | Type      | Solution                                                                                                                                                                                                                        |
| --------------------------------------------------------------------------- | ---- | --------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Sum of natural numbers](./03-Recursion/Problems/sum-of-n-natural-nums.cpp) | -    | Recursion | Create a recursion formula. </br>  1 + 2 + 3 ... (n - 1) + n. </br> If n = 0 return 0 and if n > 0 : sum(n-1) * n                                                                                                               |
| [Factorial](./03-Recursion/Problems/factorial.cpp)                          | -    | Recursion | Create a recursion formula. </br>  1 * 2 * 3 ... (n - 1) * n. </br> If n = 0 return 1 and if n > 0 : factorial(n-1) * n                                                                                                         |
| [Power of a number](./03-Recursion/Problems/power.cpp)                      | -    | Recursion | pow(m,n) </br> if n = 0 return 1 </br> if n > 0 return pow(m, n-1) </br> bcause m* m * m *m * (n-1) times </br> **Version 2 - Smaller version** </br>      2 ^ 8 = ( 2 ^ 2 ) ^ 4 = ( 2 * 2)^4 </br> for odd: 2^9 = 2 * (2^2)^ 4 |
| [Taylor Series](./03-Recursion/Problems/taylor-series.cpp)                  | -    | Recursion | In Taylor series you have to calculate multiple values of factorial as well as power so for this remember **When we have to involve multiple values in the recursion, then we can use static variables.** </br>                 |
| [Fibonacci Series](./03-Recursion/Problems/fibonacci-series.cpp)            | -    | Recursion | if n = 0 : return 0 </br> if n = 1 : return 1 </br> if(n > 1): return fib(n-2) + fib(n-1)                                                                                                                                       |
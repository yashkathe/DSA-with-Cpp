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
- [Introduction](./02-Introduction) 
  - [Static vs Dynamic memory](./02-Introduction) 
  - [Time and Space Complexity](./02-Introduction/Time-space-complexity.md)
- [Recursion](./03-Recursion/)
  - [THEORY](./03-Recursion/README.md)
  - [Basic Recursion](./03-Recursion/01-basic-recursion.cpp)
  - [Static and global Variable](./03-Recursion/02-static-and-global-var.cpp)
  - [Tree Recursion](./03-Recursion/03-tree-recursion.cpp)  
  - [Indirect Recursion](./03-Recursion/04-Indirect-recursion.cpp)  
  - [Nested Recursion](./03-Recursion/05-Nested-Recursion.cpp)    
- [Array Theory](./04-Array/)
- [Array DST](./05-Array-ADT/)
  - [Introductio](./05-Array-ADT/01-Array-ADT.cpp)
  - [Append Insert](./05-Array-ADT/02-Append-and-Inserting.cpp)
  - [Deleting](./05-Array-ADT/03-Deleting.cpp)
  - [Linear Search](./05-Array-ADT/04-Linear-search.cpp)
  - [Biary Search](./05-Array-ADT/05-Binary-Search.cpp)
  - [Get, Set and Max](./05-Array-ADT/06-Get-Set-Max.cpp)
  - [Reversing](./05-Array-ADT/07-Reversing-an-array.cpp)

## Problems

| Problem                                                                     | Link                                                                | Type      | Solution                                                                                                                                                                                                                                                                                                         | New Function learned|
| --------------------------------------------------------------------------- | ------------------------------------------------------------------- | --------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----|
| [Sum of natural numbers](./03-Recursion/Problems/sum-of-n-natural-nums.cpp) | -                                                                   | Recursion | Create a recursion formula. </br>  1 + 2 + 3 ... (n - 1) + n. </br> If n = 0 return 0 and if n > 0 : sum(n-1) * n                                                                                                                                                                                                |
| [Factorial](./03-Recursion/Problems/factorial.cpp)                          | -                                                                   | Recursion | Create a recursion formula. </br>  1 * 2 * 3 ... (n - 1) * n. </br> If n = 0 return 1 and if n > 0 : factorial(n-1) * n                                                                                                                                                                                          |
| [Power of a number](./03-Recursion/Problems/power.cpp)                      | -                                                                   | Recursion | pow(m,n) </br> if n = 0 return 1 </br> if n > 0 return pow(m, n-1) </br> bcause m* m * m *m * (n-1) times </br> **Version 2 - Smaller version** </br>      2 ^ 8 = ( 2 ^ 2 ) ^ 4 = ( 2 * 2)^4 </br> for odd: 2^9 = 2 * (2^2)^ 4                                                                                  |
| [Taylor Series](./03-Recursion/Problems/taylor-series.cpp)                  | -                                                                   | Recursion | In Taylor series you have to calculate multiple values of factorial as well as power so for this remember **When we have to involve multiple values in the recursion, then we can use static variables.** </br>                                                                                                  |
| [Fibonacci Series](./03-Recursion/Problems/fibonacci-series.cpp)            | -                                                                   | Recursion | if n = 0 : return 0 </br> if n = 1 : return 1 </br> if(n > 1): return fib(n-2) + fib(n-1)                                                                                                                                                                                                                        |
|                             [Find the winnner of the circular game](./Problems/1823-Find-the-Winner-of-the-Circular-Game%20.cpp)                                                | https://leetcode.com/problems/find-the-winner-of-the-circular-game/ | Array     | The % (modulo) operator is like a clock that helps us count in a circle.</br> When we reach the end of the circle, it wraps us back to the beginning.</br> In the Josephus problem, it's used to find the next person to remove in a circle of people, so we keep counting from the start when we reach the end. | vector.**erase**(queue.begin() + index)|
|[Triangular Sum of an Array](./Problems/2221-find-triangular-sum-of-an-array.cpp)|https://leetcode.com/problems/find-triangular-sum-of-an-array/description/|Recursion|use **num % 10** to get only units place |vector.push_back()|
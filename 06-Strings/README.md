# Strings

## Table of Contents

- [Strings](#strings)
  - [Table of Contents](#table-of-contents)
  - [ASCII codes (American Standard Code for Information Interchange)](#ascii-codes-american-standard-code-for-information-interchange)
      - [For Upper Case letters](#for-upper-case-letters)
      - [For Lower Case letters](#for-lower-case-letters)
  - [For digits](#for-digits)
  - [Unicodes](#unicodes)
  - [Character Representation](#character-representation)
  - [Arrays of characters](#arrays-of-characters)
  - [Length of String](#length-of-string)
  - [Changing case in a string](#changing-case-in-a-string)
  - [Checking if a string is Valid](#checking-if-a-string-is-valid)
  - [Reversing a string](#reversing-a-string)
  - [Comparing strings](#comparing-strings)
  - [Checking palindrome string](#checking-palindrome-string)
  - [Finding duplicates in a string](#finding-duplicates-in-a-string)
      - [1. Compare with other letters](#1-compare-with-other-letters)
      - [2. Using hashtable for counting](#2-using-hashtable-for-counting)
      - [3. Using bits](#3-using-bits)
  - [Bitwise Opeartions](#bitwise-opeartions)
      - [1. Left Shift \<\<](#1-left-shift-)
      - [2. Bits ANDing (Masking)](#2-bits-anding-masking)
      - [2. Bits ORing (Merging)](#2-bits-oring-merging)
  - [Masking](#masking)
      - [Merging(OR) + Masking](#mergingor--masking)
      - [Using bitwise to find duplicate](#using-bitwise-to-find-duplicate)
  - [Check for anagrams](#check-for-anagrams)
      - [Without Duplicates](#without-duplicates)
      - [With duplicates](#with-duplicates)
  - [Permutation of a string](#permutation-of-a-string)
    - [METHOD 1](#method-1)
      - [Implementation](#implementation)
    - [METHOD 2](#method-2)

## ASCII codes (American Standard Code for Information Interchange)

Character set is the set of characters that are supported by a programming language

We know well that computer system works on binary number system, so everything in computer is numbers  

For every character / alphabets there are some codes defined

#### For Upper Case letters

```txt

A - 65
B - 66
C - 67
.
.
.
Z - 96
```

#### For Lower Case letters

```txt

A - 97
B - 98
C - 99
.
.
.
Z - 122
```

## For digits

```txt
0 - 48
1 - 49
2 - 50
.
.
.
9 - 57 
```

And for every symbol on the keyboard there is some ASCII code available  

## Unicodes

So ASCII codes become the subset of unicodes  

## Character Representation  

```cpp
char temp;

temp = 'A'

printf("%c" , temp) //  c-character A
printf("%d" , temp) // d-decimal - 65

cout << temp ; //  A
cout << static_cast<int>(temp); // 65

```

How much memory it consumes ? => 1 Byte  

It should be in **single quotes** only
And should only contain one alphabet  

What is stored in actual memory ? 65 (ASCII code)

## Arrays of characters

```cpp

char x[5];

char x[5] = {'A' , 'B' , 'C' , 'D' , 'E'}

```

Sometimes an array will only be filled partially  
EG:

```txt
|J|O|H|N|\0 | | | | |
```

SO **\0** is used to indicate end of string
It is called as **string delimiter** / **String terminator**

So in C/C++ strings are delimited with null character that is \0.

So how to change array of characters to string

```cpp
// Array of chars
char x[5] = {'A' , 'B' , 'C' , 'D' , 'E'}

// String
char x[6] = {'A' , 'B' , 'C' , 'D' , 'E' , '\0'}

// String
char name[] = "JOHN"
```

\0 also consumes space  

## Length of String

**Inbuit Function**

```cpp

int len1 = myString.length();

int len1 = myString.size();

```

**Manual**

```cpp
int main()
{
    char S[] = "welcome"
    int i;

    for(int i = 0; S[i] != '\0'; i++)
    {
        
    }

    cout << i ;
}
```

## Changing case in a string

```txt
A - 65   a - 97   diff=> 97 - 65 = 32 
B - 66   b - 98   diff=> 98 - 66 = 32
. . .
Z - 90   z - 122
```

So the difference between capital and small letters is 32  

```cpp

int main()
{
    char A[] = "WELCOME";

    for(int i = 0; A[i] != '\0'; i++ )
    {
        A[i] = A[i] + 32;
    }

    cout << A ;
}

```

## Checking if a string is Valid

A strig should only contain alphabets and numbers  
and not any special characters  

```cpp

int main()
{
    char A[] = "WEL!@OME";

    for(int i = 0; A[i] != '\0'; i++ )
    {
        if(!(name[i] >= 65 && name[i] <= 90) &&
            !(name[i] >= 97 && name[i] <= 122) &&
            !(name[i] >= 48 && name[i] <= 57) 
        )
        {
            return 0;
        }
    }
    return 1;

}

```

## Reversing a string

**In Built Function**

```cpp

string myString = "Hello, World!";

reverse(myString.begin(), myString.end())

```

## Comparing strings

```txt

A 
|P|A|I|N|T|E|R|
 i++
B
|P|A|I|N|T|I|N|G|
 j++
```

```cpp

int main()
{
    char A[] = "Painter";
    char B[] = "Painting";
    
    int i, j;

    for(i=0,j=0;A[i]!='\0' && B[j] !='\0'; i++,j++)
    {
        if(A[i] != b[j])
            break;
    }

    if (A[i] == B[j]) 
        cout << "equal" ;
    else if (A[i] < B[j]) 
        cout << "A is smaller";
    else
        cout << "A is greater";

}

```

## Checking palindrome string

```txt

|A|B|B|A|
 i     j
```

1. Keep comparing i and j
2. increment i and decrement j

## Finding duplicates in a string  

1. Compare with other letters O(n^2)
2. Using hashtable for counting
3. Using bits

#### 1. Compare with other letters

Using nested for loops to check a letter with every other letters in a string  

#### 2. Using hashtable for counting

Create a hash table for all alphabets filled with 0  

```txt
f i n d i g s
```

f = 102 - 97 = 5  
So store 1 at 5  
increment it if it appears another time  
repeat the same procedure  

```cpp

char A[] = "finding"

int H[26], i;

for(int i = 0; A[i] != '\0'; i++)
{
    H[A[i] - 97] += 1;
}

for(int i = 0; i < 26; i++)
{
    cout << i + 97; // character ..
    cout << static_cast<int>H[i]; // .. appears for this many times
    
}

```

#### 3. Using bits

To know this method we should be familiar with bitwise operations  

## Bitwise Opeartions

1. Left Shift <<
2. Bits ORing (Merging)
3. Bits ANDing (Masking)

For understanding Bitwise Operation we should know how the data is stored in a memory in the form of a bits.  

So **One Byte** is **Eight Bits**  

<img src="https://www.researchgate.net/publication/365659382/figure/fig3/AS:11431281099121854@1669209517904/Explanation-of-the-LSB-right-and-the-MSB-left-concepts.ppm" width="400"/>

So now how digits are stored in memory in form of bits

```txt

Initial storage  
|0|0|0|0|0|0|0|0|

1 = 01 (in binary)
|0|0|0|0|0|0|0|1|

2 = 10 
|0|0|0|0|0|0|1|0|

4=100
|0|0|0|0|0|1|0|0|

5=101
|0|0|0|0|0|1|0|1|

8 = 10000
|0|0|0|0|1|0|0|0|
```

So how does binary value of each digit looks like

```txt
|  0  |  0 | 0  | 0  | 0 | 0 | 0 | 0 |
| 218 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
```

EG: Suppose we want to store **20**

```txt
|  0  |  0 | 0  | 0  | 0 | 0 | 0 | 0 |
| 218 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |

So which digit is closer to 20
> 16

and remaining is?
> 4

16 + 4 = 20

So this is how 20 looks like in binary

|  0  |  0 | 0  | 1  | 0 | 1 | 0 | 0 |
| 218 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |

```

#### 1. Left Shift <<

So now what is leftshift

```txt
H = |0|0|0|0|0|0|0|1|

NUMERIC VALUE = 1
```

If I perform leftshift on the following binary value  
The 1 will be **shifted** to the **left**:

```txt

H = H << 1

|0|0|0|0|0|0|1|0|

NUMERIC VALUE becomes 2
```

If I perform leftshift by 2 on the first binary value again  
The 1 will be **shifted** to the **left** by 2:

```txt

H = H << 2

|0|0|0|0|0|1|0|0|

NUMERIC VALUE becomes 4
```

**It means by shifting the number on the left hand side we are able to increase it by multiples of two**

H = H << 5 gives us 32  

#### 2. Bits ANDing (Masking)

```txt
a=10   1010  10
b=6    0110   6

AND => 0010   2
```

#### 2. Bits ORing (Merging)

```txt
a=10   1010  10
b=6    0110   6

AND => 1110  14
```

## Masking

Bitmasking is the act of applying a mask over a value to keep, change or modify a piece of given information. A mask determines which bits to take and which bits to clear off a binary number.  

Eg: Here I want to know whether 3rd bit from right is on or off

```txt

H
|0|0|0|1|0|0|0|0|

a
|0|0|0|0|0|0|0|0|

```

We can take help of a for the following  
Write down 1 at lsb of 1  

```txt
a
|0|0|0|0|0|0|0|1|

```

a = a << 2

```txt
a
|0|0|0|0|0|1|0|0|

```

Now value of a is 4
Now we can **AND** this index to check if its on or off  

So after ANDing A and H we get 0  
So the value of 3rd bit from lsb in H is 0

#### Merging(OR) + Masking

I Want to change value of 3rd bit from lsb to 1

```txt

H
|0|0|0|1|0|0|0|0|

a
|0|0|0|0|0|0|0|0|

```

So:  

a = 1
a = a << 2  

```txt
a
|0|0|0|0|0|1|0|0|
```

**H = a | H**

or the value and store it in H itself  
So H becomes  

```txt
H
|0|0|0|1|0|1|0|0|
```

#### Using bitwise to find duplicate

eg: findings

```txt
H =  |0|0|0|0|0|0|0|0| |0|0|0|0|0|0|0|0| |0|0|0|0|0|0|0|0| |0|0|0|0|0|0|0|0|

x = |0|0|0|0|0|0|0|0| |0|0|0|0|0|0|0|0| |0|0|0|0|0|0|0|0| |0|0|0|0|0|0|0|0|

// create a array of H(see code) - 25 bits
```

```cpp
int mai()
{
    char A[] = "finding";
    long int H = 0 , x = 0;

    for(int i = 0; A[i] != '\0'; i++ )
    {
        x = 1;
        x = x << (A[i] - 97); // left shift || A[i] - 97= 102 - 97 = 5
        
        /* x will be shifted by 5 places
        H = .... |0|0|0|0|0|0|0|0| 

        x = .... |0|0|0|1|0|0|0|0| 

        now check inside H if that bit is on or not 
        
        if its already on that means its a duplicate letter
        if its off change it to on
        */

        if((x & H) > 0)
        {
            cout << A[i] << "is duplicate";
        }
        else
        {
            H = x | H;
        }

    }
}
```

## Check for anagrams

Anagram are two set of strings which are formed using same set of alphabets.

#### Without Duplicates

**Assuming there are no duplicates. If there are amy, use the previous method to check for duplicates**

1. Again take a hash map with 26 indices which are filled with 0 initially  
2. Subtract _97 - ascii code_ of that alphabet  
3. Take the bit from this calculation and turn it on in hash map
4. Now take next string
5. So if 0 is there already, if its becoming -1 then it means this alphabet is actually not there. So you can stop then and there.
6. If the alphabet is already there turn the bit to 0
7. If two letters are anagrams then all values will be 0 inside a hash

```cpp

int main()
{
    char A[] = "decimal";
        //  3,4,2,8,12,0,11 - ASCII
    char B[] = "medical";

    int i, h[26] = 0;

    // for 1st string
    for(int i = 0; A[i] != '\0' , i++)
    {
        H[ A[i] - 97 ] += 1; // UPDATE HASH MAP WITH INDEX
    }

    // for 2nd string
    for(int i = 0; A[i] != '\0' , i++)
    {
        H[ A[i] - 97 ] -= 1; // UPDATE HASH MAP WITH INDEX
        
        if(H[A[i] - 97] < 0 )
        {
            cout << "not anagram";
            break;
        }
    }

    cout << "is anagram";
}

```

#### With duplicates

**Now what if there are duplicates**

eg:
verbosa  
observe  

1. here 'e' comes 2 times, so the value in hash will be increased by 2  
2. If the e comes  2 times then the value will be set to 0
3. So you can check if all the indices are 0 in hash map if there are duplicates

## Permutation of a string

### METHOD 1

```txt
S = |A|B|C|\0|

3! = 6
i.e. 6 combinations are possible  
```

We want all permutations, means all arrangements of A, B, C.  

**State Space Tree**

```

        abc
       / | \
      /  |  \
     /   |   \
    /    |    \
   /     |     \
  a      b      c
 / \    / \    / \
b   c  a   c  a   b
|   |  |   |  |   |
c   b  c   a  b   a

```

This is **backtracking**  
Backtracking is a recursive algorithmic technique for solving problems by incrementally trying different possibilities and undoing the previous step if they do not lead to a solution.

See we have to use recursion to achieve backtracking.  
And with the help of backtracking, we are performing brute force.

- A recursive procedure which is trying to explore everything is a **Backtracking Procedure**

- If a procedure is backtracking and finding out everything, then that procedure is called as **Brute Force**

#### Implementation

So we need a few more data structures here  

1. Result ARRAY - k
We will be storing these alphabets A, B, C in here.
2. Flag ARRAY  - i
We should also know which letter is included, which is not included. So for that we will maintain a flag array  

```

        abc
       /  
      /    
     / 
    /   
   /     
  a     K=0 I=0  | RES = [A, , , ] | A = [1, 0, 0, 0] | K = K+1
 /    
b       K=1 I=1  | RES = [A,B, , ] | A = [1, 1, 0, 0] | K = K+1 
|      
c       K=2 I=2  | RES = [A,B,C, ] | A = [1, 1, 1, 0] | K = K+1

        SAVING STRING
        Now when we move up do the following operations
        Decrease the value of => k : k -= 1
        Change values in flag array to 0  
```

'I' always starts from 0 (traverse flag array) to check if letter is available

```cpp

void permutation(char s[] , int k)
{
    static int A[10] = {0};
    static char Res[10];
    int i=0;

    if(s[k] == '\0')
    {
        Res[k] = '\0';
        cout << result; // save the result here
    }
    else{
        for (int i = 0; s != '\0'; i++ )
        {
            if(A[i] == 0) // alphabet is available
            {
                Res[k] = s[i]; //copy alphabet from string to res
                A[i] = 1;
                permutation(s,k+1);
                A[i]=0
            }
        }
    }
}

int main()
{
    char s[] = 'ABC';
    perm(s,0)
}
```

### METHOD 2

**Swapping of letters**

```
                abc(l=0,h=2,i=0)
               /       |       \
bac(l=1,h=2,i=1) abc(l=1,h=2,i=0) cba(l=1,h=2,i=2)
   |        |          |           |
abc(l=2,h=2,i=2) cba(l=2,h=2,i=2) bac(l=2,h=2,i=1)

```

1. When l = h we store that string
2. We swap l and i

```cpp

void permutation(Char s[], int l, int h)
{
    int i;

    if(l == h){
        cout << s; // store the string
    }
    else{

        for(int i = l; i <= h; i++)
        {
            swap(s[l] , s[i]);
            permutation(s, l + 1, h);
            swap(s[l] , s[i]);
        }
    }

}
```

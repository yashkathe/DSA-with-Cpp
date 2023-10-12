# Strings

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

## Find duplicates in a string  

1.  Compare with other letters O(n^2)
2.  Using hashtable for counting
3.  Using bits

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

### Bitwise Opeartions

1. Left Shift <<
2. Bits ORing (Merging)
3. Bits ANDing (Masking)

For understanding Bitwise Operation we should know how the data is stored in a memory in the form of a bits.  

So **One Byte** is **Eight Bits**  

![LSB AND MSB](https://www.researchgate.net/publication/365659382/figure/fig3/AS:11431281099121854@1669209517904/Explanation-of-the-LSB-right-and-the-MSB-left-concepts.ppm)

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
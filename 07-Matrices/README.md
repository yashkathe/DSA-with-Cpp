# Special Matrices

## Types of Matrix

1. Diagonal Matrix
2. Lower Triangle Matrix
3. Upper Triangle Matrix
4. Symmetric Matrix
5. Tridiagonal Matrix
6. Band Matrix
7. Toeplitz Matrix
8. Sparse Matrix

## 1.Diagonal Matrix

**M[i,j] = 0** if **i = j**

All the elements except diagonal elements are 0  

```txt

    1 2 3 4 5
   ----------
1 | 3 0 0 0 0
2 | 0 4 0 0 0
3 | 0 0 5 0 0
4 | 0 0 0 5 0
5 | 0 0 0 0 7

```  

## 2. Lower Triangular Matrix

**M[i,j] = 0** if **i < j**
**M[i,j] != 0** if **i >= j**

Number of non zero elements = ( n * ( n + 1) )/ 2  
Here: 5 + 4 + 3 + 2 + 1 = 15  

A lower triangular matrix is a square matrix in which the **lower triangular part** of a matrix is **non-zero elements**  

```txt

    1 2 3 4 5
   ----------
1 | 3 0 0 0 0
2 | 4 4 0 0 0
3 | 3 2 5 0 0
4 | 2 3 4 5 0
5 | 1 2 8 8 7

```  

Mappping this to 2-d Matrix

```txt

| A11 || A21 | A22 || A31 | A32 | A33 || A41 | A42  | A43 | A44 || A51 | A52 | A53 | A54 | A55 ||

```

If I want to access index (4,3): skip 3 (4-1) rows and 2 (3-1) elements ahead  

A[ 4 ] [ 3 ] = [1 + 2 + 3] + 2 = 8  

So what is the formula for this

Index(A[ i ] [ j ]) = [ i (i - 1) / 2 ] + ( j - 1)

## 3. Upper Triangular Matrix

**M[i,j] != 0** if **i <= j**
**M[i,j] = 0** if **i > j**

Number of non zero elements = ( n * ( n + 1) ) / 2  
Here: 5 + 4 + 3 + 2 + 1 = 15  

A lower triangular matrix is a square matrix in which the **lower triangular part** of a matrix is **non-zero elements**  

```txt

    1 2 3 4 5
   ----------
1 | 1 2 8 8 7
2 | 0 4 3 1 6
3 | 0 0 5 1 6
4 | 0 0 0 5 4
5 | 0 0 0 0 5

```  

### Row Major Mapping

Mappping this to 2-d Matrix

```txt

| A11 | A12 | A13 | A14 | A15 || A22 | A23 | A24 | A25 || A33 | A34 | A35 || A44 | A45 | A55 ||

```

If I want to access index (4,5): skip 3 (4-1) rows

A[ 4 ] [ 5 ] = [5 + 4 + 3] + [5 - 4]  
             = 12 + 1  
             = 13  

So what is the formula for this

Index(A[ i ] [ j ]) = [(i - 1) * n -  [(i - 2)(i - 1)] / 2 ] + ( j - 1)  

### Column Major Mapping

```txt

| A11 || A12 | A22 || A13 | A23 | A33 || A14 | A24  | A34 | A44 || A15 | A25 | A35 | A45 | A55 ||

```

A[ 4 ] [ 5 ] = [1 + 2 + 3 + 4] + 3 = 13  
_This looks similar to row major mapping of lower triangular matrix, but i and j are different_  

Index(A[ i ] [ j ]) = ( [ j * ( j - 1) ] / 2 ) + ( i - 1 )

## Symmetric Matrix

if M [i , j] = M[j , i]  
then it is a symmetric matrix  

## Tridiagonal Matrix

```txt

    1 2 3 4 5
   ----------
1 | 1 2 0 0 0
2 | 1 4 3 0 0
3 | 0 2 5 1 0
4 | 0 0 3 5 4
5 | 0 0 0 3 5

```  

**Condition for non zero elements**

- Main Diagonal:  i - j = 0
- Lower Diagonal: i - j = 1
- Upper Diagonal: i - j = -1  

 | A21 | A32 | A43 | A54 || A11 | A22 | A33 | A44 | A55 || A12 | A23 | A34 | A45 |  

### Mapping elements to 2d matrix

Index(A [ i ] [ j ]):

Case 1: if **i -j = 1**  => index = i - 1
Case 2: if **i -j = 0**  => index = n - 1 + i - 1
Case 3: if **i -j = -1**  => index = 2n -1 + i - 1

## Toeplitz Matrix

Elements in a diagonal are same  

```txt

    1 2 3 4 5
   ----------
1 | 2 1 3 4 5
2 | 1 2 1 3 4
3 | 6 2 2 1 3
4 | 5 6 3 2 1
5 | 4 5 6 3 2

```

M [ i, j ] = M[ i - 1, j - 1]

### Mapping elements to 2-d matrix

| 2 | 1 | 3 | 4 | 5 || 1 | 6 | 5 | 4 |  
       row          ||   column

Index(A [ i ] [ j ]):  

Case 1: if **i <= j** => index = j - i  
Case 2: if **i > j**   => index = n + i - j - 1  

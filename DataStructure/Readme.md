## Data Structure: The logical or mathematical model of particular rganization of data.

Data Structure:

## 1. Primitive Data Structure or Simple Data Structure: The data structure which can store only one value at a time is called primitive data structure.

        a. int
        b. float
        c. char
        d. double
        e. long
        f. boolean

## 2. Non-Primitive Data Structure: The data structure which can store multiple values at a time is called non-primitive data structure.

        a. Array / string
        b. graph
        c. tree
        d. Interface
        e. Enum
        f. Queue : FIFO >---> First In First Out
        g. Linked List
            i. Singly Linked List
            ii. Doubly Linked List
            iii. Circular Linked List

        h. stack: LIFO >---> Last In First Out


        **Customer Salesman Linked list table**

        | Customer    | Salesman   |
        |-------------|------------|
        | A           | 0          |
        | B           | 1          |
        | C           | 0          |
        | D           | 0          |
        | E           | 1          |

        **Salesman Table**

        | Salesman    |
        |-------------|
        | S           | --> A
        | R           | --> B
        | T           | --> E

# 2D Array or Matrix

Operation of Data Structure.

1. Traversing
2. Searching
3. Inserting
4. Deleting
5. Sorting
6. Merging

## ADT / Abstract Data Type.

## String

- Substring
- Indexing
- Concatenation
- Length

1. Substring: A part of string is called substring.
   - String s = "Hello World";
   - String s1 = s.substring(0, 5); // Hello
   - String s2 = s.substring(6, 11); // World

SUBSTRING(String, index, length);

<!-- Index will start from 1 -->

SUBSTRING("Hello World", 5, 3) = "o W";
SUBSTRING("The End", 4, 4) = " End";

String: The String from which will get the substring.
Initial: The position of the first character in the substring.
Length: Length of the substring.

2. Indexing: INDEX(text, pattern)

3. Concatenation: The process of joining two or more strings together to create a new string is called concatenation.
   - String s1 = "Hello";
   - String s2 = "World";
   - String s3 = s1 + s2; // HelloWorld

#2nd pattern

p = "aabaa"
t = "aaabacaabaabca"

# maxLength = L(t)-L(p)+1

MaxLength = 14-5+1 = 10

Q0 = ∑
Q1 = a
Q2 = aa
Q3 = aab
Q4 = aaba
p/Q5 = aabaa

| State   | a   | b   |
| ------- | --- | --- |
| Q0      | Q1  | Q0  |
| Q1      | Q2  | Q0  |
| Q2      | Q2  | Q3  |
| Q3      | Q4  | Q0  |
| Q4      | p   | Q0  |
| ------- | --- | --- |

######

# Automata Circuit

| State | Input | Next State |
| ----- | ----- | ---------- |
| Q0    | a     | Q1         |
| Q0    | b     | Q0         |
| Q1    | a     | Q2         |
| Q1    | b     | Q0         |
| Q2    | a     | Q3         |
| Q2    | b     | Q2         |
| Q3    | a     | Q0         |
| Q3    | b     | Q4         |
| Q4    | a     | Q0         |
| Q4    | b     | Q0         |
| Q5    | a     | Q0         |
| Q5    | b     | Q0         |

---

## | t | | a | a | a | b | a | c | a | a | b | a | a | b | c | a |

## |state | 0| 1 | 2 | 2 | 3 | 4 | 0 | 1 | 2 | 3 | 4 | 5 | | | |

                                                    k = 11

# INDEX = k - p + 1

INDEX = 11 - 5 + 1 = 7

INDEX = (t,p) = 7

# Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Example

Let's say we have an array of numbers: [5, 3, 8, 4, 2]

1. Start from the first element, compare the current element with the next element. If the current element is greater than the next element, swap them.
2. Move to the next element and repeat the process until the last element.
3. Repeat the entire process for the rest of the elements until the array is sorted.

After the first pass, the largest number will have bubbled up to the end of the array. After the second pass, the second largest number will be in the second last position. This process continues until the array is sorted.

The sorted array is: [2, 3, 4, 5, 8]

# 1st pass

    [5, 3, 8, 4, 2] -> [3, 5, 8, 4, 2] -> [3, 5, 8, 4, 2] -> [3, 5, 4, 8, 2] -> [3, 5, 4, 2, 8]

# 2nd pass

    [3, 5, 4, 2, 8] -> [3, 4, 5, 2, 8] -> [3, 4, 2, 5, 8]

# 3rd pass

    [3, 4, 2, 5, 8] -> [3, 2, 4, 5, 8]

# 4th pass

    [3, 2, 4, 5, 8] -> [2, 3, 4, 5, 8]

# 5th pass

    [2, 3, 4, 5, 8] -> [2, 3, 4, 5, 8]

give me the pass for= [8,5,7,3]

# 1st pass

    [8, 5, 7, 3]
    [5, 8, 7, 3]
    [5, 7, 8, 3]
    [5, 7, 3, 8]

# 2nd pass

    [5, 7, 3, 8]
    [5, 3, 7, 8]
    [5, 3, 7, 8]

# 3rd pass

    [5, 3, 7, 8]
    [3, 5, 7, 8]

# 4th pass

    [3, 5, 7, 8]
    [3, 5, 7, 8]

#include<bits/stdc++>
using namespace std;

void bubbleSort(vector<int>& arr) {
int n = arr.size();
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
swap(arr[j], arr[j + 1]);
}
}
}
}

int main() {
vector<int> arr = {8, 5, 7, 3};

    bubbleSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}

# Selection Sort

Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.

The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right.

This algorithm is not suitable for large data sets as its average and worst-case complexities are of Ο(n2), where n is the number of items.

## Example

Let's say we have an array of numbers: [5, 3, 8, 4, 2]

1. Find the smallest element in the array and swap it with the first element.

   [5, 3, 8, 4, 2] -> [2, 3, 8, 4, 5]

2. Now, find the smallest element in the remaining array (excluding the first element) and swap it with the second element.

   [2, 3, 8, 4, 5] -> [2, 3, 8, 4, 5]

3. Now, find the smallest element in the remaining array (excluding the first two elements) and swap it with the third element.

   [2, 3, 8, 4, 5] -> [2, 3, 4, 8, 5]

4. Now, find the smallest element in the remaining array (excluding the first three elements) and swap it with the fourth element.

   [2, 3, 4, 8, 5] -> [2, 3, 4, 5, 8]

5. Now, find the smallest element in the remaining array (excluding the first four elements) and swap it with the fifth element.

   [2, 3, 4, 5, 8] -> [2, 3, 4, 5, 8]

The sorted array is: [2, 3, 4, 5, 8]

#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr) {
int n = arr.size();
for (int i = 0; i < n - 1; i++) {
int minIndex = i;
for (int j = i + 1; j < n; j++) {
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
swap(arr[i], arr[minIndex]);
}
}

int main() {
vector<int> arr = {5, 3, 8, 4, 2};

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}

## Example

Let's say we have an array of numbers: [7,3,5,11,8,2]

The sorted array is: [2, 3, 4, 5, 8]

The sorted array is: [2, 3, 5, 7, 8]

# Insertion Sort

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

Algorithm

To sort an array of size n in ascending order:

1. Iterate from arr[1] to arr[n] over the array.

2. Compare the current element (key) to its predecessor.

3. If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

## Example

Let's say we have an array of numbers: [5, 3, 8, 4, 2]

1. We start with the second element of the array and compare it with the first element. If the second element is smaller than the first element, we swap them.

   [5, 3, 8, 4, 2] -> [3, 5, 8, 4, 2]

2. Now, we compare the third element with the second element and swap them if they are not in order.

   [3, 5, 8, 4, 2] -> [3, 5, 8, 4, 2]

3. Now, we compare the fourth element with the third element and swap them if they are not in order.

   [3, 5, 8, 4, 2] -> [3, 5, 4, 8, 2]

4. Now, we compare the fifth element with the fourth element and swap them if they are not in order.

   [3, 5, 4, 8, 2] -> [3, 5, 4, 2, 8]

5. Now, we compare the fifth element with the fourth element and swap them if they are not in order.

   [3, 5, 4, 2, 8] -> [3, 4, 5, 2, 8]

6. Now, we compare the fifth element with the fourth element and swap them if they are not in order.

   [3, 4, 5, 2, 8] -> [3, 4, 2, 5, 8]

7. Now, we compare the fifth element with the fourth element and swap them if they are not in order.

   [3, 4, 2, 5, 8] -> [3, 2, 4, 5, 8]

8. Now, we compare the fifth element with the fourth element and swap them if they are not in order.

   [3, 2, 4, 5, 8] -> [2, 3, 4, 5, 8]

The sorted array is: [2, 3, 4, 5, 8]

## Radix sort

---

## | 276 | 316 | 105 | 31 | 62 | 10 | 187 | 3 |

1st pass

    0     1     2    3    4    5    6     7

---

### Linked List

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

## Example

Let's say we have a linked list with the following elements: a -> b -> c -> d -> e ->f

------------------
No | DATA | LINK |
------------------


# array representation 

arr(5)

<!-- It will start from index 0 or 1(for theory) -->

arr(5:10)

<!-- It will start from index no 5 -->

# length = upperBound - lowerBound + 1

if the array is arr(-5:10), the length will be = 10 - (-5) + 1 = 16


location of an element: 
# loc(k) = base + w(k - lowerBound)

- w = size of the element
- k = index of the element
- lowerBound = lower bound of the array
- base = base address of the array

| Index | Value | Location |
|-------|-------|----------|
|  190  |   6   |   2004   |
|  191  |   7   |   2005   |
|  192  |   8   |   2006   |
|  193  |   9   |   2007   |
|  194  |   10  |   2008   |
|  195  |   11  |   2009   |

- LOC(arr(196)) = 1004 + 4(196-190) = 1004+24 = 1028
 



## 2D array

arr(5:10, 5:10)


|r/c | c1    | c2    |
|----|-------|-------|
| r1 |  1,1  |  1,2  |
| r2 |  2,1  |  2,2  |
| r3 |  3,1  |  3,2  |
| r4 |  4,1  |  4,2  |

    |------|      
    |  r1  |
    |------|      
    |  101 |      
    |      |      
    |  105 |      
    |      |      
                                    
    
       r2
    |------|   
    |  203 |    
    |      |   
    |  201 |   
    |      |    
        
        r3
    |------|
    |  309 |
    |      |
    |  411 |
    |      |
        
      c1
    |------|
    |  101 |
    |------|
    |  203 |
    |------|
    |  309 |
    |------|

       c2
    |------|
    |  105 |
    |------|
    |  201 |
    |------|
    |  411 |
    |------|



# Row measure: The elements are stored row by row.
    - Loc(arr[j][k]) = base + w((j-lowerBound)*n + (k-lowerBound))

# Column measure: The elements are stored column by column.
    - Loc(arr[j][k]) = base + w((k-lowerBound)*n + (j-lowerBound))


# EXAMPLE 
- Loc(Arr[3][1]) = 1004 + 4(2(3-1)+(1-1)) = 1004 + 4(4) = 1004 + 16 = 1020
- Loc(Arr[3][1]) = 1004 + 4(3(1-1)+(3-1)) = 1004 + 4(2) = 1004 + 8 = 1012


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


| State | a | b |
|-------|---|---|
| Q0    | Q1| Q0|
| Q1    | Q2| Q0|
| Q2    | Q2| Q3|
| Q3    | Q4| Q0|
| Q4    | p | Q0|
|-------|---|---|



######

# Automata Circuit

| State | Input | Next State |
|-------|-------|------------|
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



--------------------------------------------------------------------
| t     |  | a | a | a | b | a | c | a | a | b | a | a | b | c | a |
--------------------------------------------------------------------
|state  | 0| 1 | 2 | 2 | 3 | 4 | 0 | 1 | 2 | 3 | 4 | 5 |   |   |   |
--------------------------------------------------------------------
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

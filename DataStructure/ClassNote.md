
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





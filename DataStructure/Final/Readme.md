### Stack

### Polish Notation
- [ ] [150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)

(1) Use a stack to store the numbers.
(2) When we meet an operator, we pop two numbers from the stack and calculate the result.
(3) Push the result back to the stack.

(7*6)+15-4/2 
1. prefix = *AB
2. Infix = A*B
3. Postfix = AB*


# Example
```
Postfix: 5,6,2,+,*,12,4,/,-
```
```
Step 1: 5,6,2,+,*,12,4,/,-
Step 2: 5,8,*,12,4,/,-
Step 3: 40,12,4,/,-
Step 4: 40,3,-
Step 5: 37
```

Question: 
```
Postfix: 2,4,9,/,-,3,7,/,1,-,* 
```
```
(2-(4/9))*(3/7-1)
```
Answer: -0.88888889
```


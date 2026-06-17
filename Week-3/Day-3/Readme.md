# Week 3 - Day 3

Today I solved 3 Stack-based problems from LeetCode.

## Problems Solved

### 1. Valid Parentheses
- Used a stack to store opening brackets.
- Checked whether each closing bracket matches the top of the stack.

Time Complexity: O(n) 
Space Complexity: O(n)

### 2. Min Stack
- Stored both the element and the minimum value till that point.
- Supported getMin() operation in O(1) time.

Time Complexity:
- Push: O(1)
- Pop: O(1)
- Top: O(1)
- GetMin: O(1)

Space Complexity: O(n)

### 3. Next Greater Element I
- Used a monotonic stack to find the next greater element.
- Matched the answers with elements of the first array.

Time Complexity: O(n + m²)
Space Complexity: O(n)

## Concepts Learned
- Stack
- Monotonic Stack
- Bracket Matching
- Next Greater Element
- Stack Design

## Author
Abhay

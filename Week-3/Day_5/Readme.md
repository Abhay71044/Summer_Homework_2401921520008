# Week 3 - Day 5

Today I solved 3 Queue and Sliding Window problems from LeetCode.

## Problems Solved

### 1. Implement Queue using Stacks
- Used two stacks to simulate queue operations.
- Maintained FIFO order using stack transfers.

Time Complexity:
- Push: O(1)
- Pop: Amortized O(1)
- Peek: Amortized O(1)

Space Complexity: O(n)

### 2. Number of Recent Calls
- Used a queue to store recent request timestamps.
- Removed timestamps that were outside the 3000 ms window.

Time Complexity: O(1) Amortized
Space Complexity: O(n)

### 3. Sliding Window Maximum
- Used a deque to maintain useful elements of the current window.
- Retrieved the maximum element of each window in O(1) time.

Time Complexity: O(n)
Space Complexity: O(k)

## Concepts Learned
- Queue
- Queue using Stacks
- Deque
- Sliding Window
- FIFO Principle
- Window Optimization

## Author
Abhay
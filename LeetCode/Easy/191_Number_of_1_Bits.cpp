
/*
 * LeetCode Problem: 191. Number of 1 Bits
 * Approach: Bit Manipulation
 * Time Complexity: O(1) for a fixed 32-bit integer
 * Space Complexity: O(1)
 */

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while (n != 0) {
            count += (n & 1);
            n = n >> 1;
        }

        return count;
    }
};


/*
## Problem 191: Number of 1 Bits

- **Platform:** LeetCode
- **Problem Number:** 191
- **Difficulty:** Easy
- **Language:** C++
- **Topic:** Bit Manipulation

### Problem Description

Given an integer `n`, return the number of set bits (bits with value `1`) in its binary representation.

### Approach

The solution uses bit manipulation to examine the least significant bit of the number.

1. Initialize a counter to zero.
2. Use `n & 1` to check the last bit.
3. Add the result to the counter.
4. Right-shift the number by one bit.
5. Repeat until all bits have been processed.
6. Return the counter.

### Example

**Input:** `n = 11`

**Binary:** `1011`

**Output:** `3`

**Explanation:** The binary representation of 11 contains three set bits.

### Complexity Analysis

- **Time Complexity:** O(1) for a fixed 32-bit integer.
- **Space Complexity:** O(1).

*/

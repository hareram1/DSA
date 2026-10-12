/*
 * LeetCode Problem: 338. Counting Bits
 * Approach: Dynamic Programming + Bit Manipulation
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            ans[i] = ans[i >> 1] + (i & 1);
        }

        return ans;
    }
};





/*
## Problem Details
- **Platform:** LeetCode
- **Problem Number:** 338
- **Problem Name:** Counting Bits
- **Difficulty:** Easy
- **Language:** C++
- **Topics:** Bit Manipulation, Dynamic Programming

## Problem Statement
Given an integer `n`, return an array `ans` of length `n + 1` such that, for every integer `i` in the range `0 <= i <= n`, `ans[i]` is the number of `1` bits in the binary representation of `i`.

## Approach
This solution uses Dynamic Programming and Bit Manipulation.

For each number `i`, we calculate the number of set bits using the previously calculated result for `i >> 1`.

**Formula:**

`ans[i] = ans[i >> 1] + (i & 1)`

- `i >> 1` shifts the bits one position to the right.
- `i & 1` checks whether the last bit is `1`.
- `ans[i >> 1]` provides the number of set bits in the shifted number.

We initialize the answer array with zeros and calculate the results from `1` to `n`.

## Example

**Input:**
```text
n = 5
```

**Output:**
```text
[0,1,1,2,1,2]
```

**Explanation:**

| Number | Binary Representation | Number of Set Bits |
|---|---|---|
| 0 | 0 | 0 |
| 1 | 1 | 1 |
| 2 | 10 | 1 |
| 3 | 11 | 2 |
| 4 | 100 | 1 |
| 5 | 101 | 2 |

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(n), for storing the answer array.

*/

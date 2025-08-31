# 📊 LeetCode Problem: Daily Temperatures

## 🧩 Problem Statement

Given an **array of integers** `temperatures` represents the daily temperatures, return an array `answer` such that `answer[i]` is the number of days you have to wait after the `ith` day to get a warmer temperature. If there is no future day for which this is possible, keep `answer[i] == 0` instead.


> **Note :**
> - Use Monotonic Stack for finding the next greater Element.



## 🧠 Approach: Monotonic Stack (Right -> Left Traversal)

- Start from the rightmost day and move backward.
  
- Maintain a stack of indices representing future days with higher temperatures.

> For each day i:
> - While stack isn’t empty and current temp ≥ stack’s top temp -> pop the stack.
> - If stack becomes empty → no warmer day ahead → ans[i] = 0
> - Else -> ans[i] = st.top() - i (distance to warmer day)

- Finally, push current index into the stack.



## ✅ Example Walkthrough

### Example 1

##### Input: temperatures = [73,74,75,71,69,72,76,73]
##### Output: [1,1,4,2,1,1,0,0]

=
### Example 2

##### Input: temperatures = [30,40,50,60]
##### Output: [1,1,1,0]


### Example 3

##### Input: temperatures = [30,60,90]
##### Output: [1,1,0]



## 🛠️ Constraints

- `1 <= temperatures.length <= 10^5`
- `30 <= temperatures[i] <= 100`

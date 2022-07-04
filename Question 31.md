# Permutation

[Question Link](https://leetcode.com/problems/permutations/)

## Solution

```python
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = [] # list of lists
        
        # base condition
        if(len(nums) == 1): # [3]
            return [nums[:]]
        
        
        for i in range(len(nums)): # run a loop n times : n is len of list
            start = nums.pop(0)            # [1 2 3] -> [2 3]
            perms = self.permute(nums)     # => [1 2 3], [1 3 2]
            
            for perm in perms:
                perm.append(start)
            
            for i in perms:
                ans.append(i)
            
            nums.append(start);
        
        return ans
```

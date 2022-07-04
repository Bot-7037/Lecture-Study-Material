## Permutations 2

[Question Link](https://leetcode.com/problems/permutations-ii/)

```python
class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        res = [] # final ans
        perm = [] 
        count= {i:0 for i in nums} # count of nums in the array
        for i in nums:
            count[i]+=1
        
        def permute():
            
            if( len(perm) == len(nums)):
                res.append(perm[:])
                return
            
            for n in count:
                if(count[n] > 0):
                    perm.append(n)
                    count[n]-=1
                    permute()
                    count[n]+=1
                    perm.pop()
        permute()
        return res
```

## Nth tribonacci number

[Question Link](https://leetcode.com/problems/n-th-tribonacci-number/)

## Solution

```c++
class Solution {
public:
    int dp[100];
    int fun(int n){
        if(n==0||n==1) return n;
        if(n==2) return 1;
        if(dp[n]!=-1) return dp[n];
        else
            return dp[n]= fun(n-1)+fun(n-2)+fun(n-3);

    }
    int tribonacci(int n) {
        memset(dp, -1, sizeof(dp));
        return fun(n);
    }
};
```

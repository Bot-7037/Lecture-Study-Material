## Fibonacci Number

[Question Link](https://leetcode.com/problems/fibonacci-number/)

## Solution

```c++
#include<bits/stdc++.h>
using namespace std;
int dp[100];
int fib(int n)
{
    if(n == 0 || n==1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1)+fib(n-2);
}

int main(){
    memset(dp, -1, sizeof(dp)); // set dp values to -1
    cout<<fib(60);
    return 0;
}
```

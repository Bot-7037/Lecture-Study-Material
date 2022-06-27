## Maximize card score

[Question Link](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/)

## Solution

```c++
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int window = arr.size()-k;
        int left=0;
        int right=0;
        for (int i = 0; i < k; i++)// sum first k elements into 'left'
            left+=arr[i];
        int final = left;
        for(int i=k-1; i>=0; i--){
            left-=arr[i];
            right+=arr[i+window];
            final = max(final, left+right);
        }
        return final;
    }
};
```

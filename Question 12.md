## Question
Given a range of numbers, print all palindromes in the given range.

**Input**

10

11

**Output**

11, 22, 33, 44, 55, 66, 77, 88, 99, 101, 111

**Explanation**

All the numbers that are same when read forward as well as backward are called palindromes

## Solution

```c++
#include<bits/stdc++.h>
#define print(arr, n) for(int _=0; _<n; _++) cout<<arr[_]<<' ';cout<<endl
#define input(arr, n) for(int _=0; _<n; _++) cin>>arr[_]
using namespace std;

bool checkpalindrome(int num)
{
    int original = num; // 0
    int target = 0; // 4321

    while(original > 0){
        target *= 10;
        target = target+(original%10);
        original /= 10;
    }
    return target == num;
}

int main(){
    int start, end;
    cin>>start>>end;
    for (int i = start; i < end; i++)
    {
        if(checkpalindrome(i))
            cout<<i<<" ";
    }
    return 0;
}
```
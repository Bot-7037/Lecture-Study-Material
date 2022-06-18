## Quesion
___
Use recursion to find the factorial of a number

**Input**

5

**Output**

120

**Explanation**

Factorial of 5 = 5*4*3*2*1

___
## Solution
```c++
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 0 || n == 1) return 1;
    return n*fact(n-1);
}
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
```
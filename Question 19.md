## Question

Find sum of all the numbers from starting range `m` to end range `n` which are divisible by both 3 and 5

**Example**

**Input**

12 50

**Output**

90

## Solution
```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    
    // find starting number
    int i=1;
    while(15*i < m) 
        i++;
    int start_num = i*15;
    
    int sum = 0;
    while(start_num < n){
        sum += start_num;
        start_num+=15;
    }
    cout<<sum;
    return 0;
}
```
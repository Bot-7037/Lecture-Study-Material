## Question

Print the multiplication table of a given number till 10 and also print sum of the printed multiples

**Input**

5

**Output**

5 10 15 20 25 30 35 40 45 50 

275

## Solution
```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout<<i*n<<" ";
        sum+= i*n;
    }
    cout<<endl<<sum;
    return 0;
}
```
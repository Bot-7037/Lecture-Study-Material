## Question
___
The Binary number system only uses two digits, 0 and 1 and number system can be called binary string. You are required to implement the following function:

`int OperationsBinaryString(char* str);`

The function accepts a string str as its argument. The string str consists of binary digits eparated with an alphabet as follows:

- A denotes AND operation
- B denotes OR operation
- C denotes XOR Operation

You are required to calculate the result of the string str, scanning the string to right taking one opearation at a time, and return the same.

**Note:**

- No order of priorities of operations is required
- Length of str is odd
- If str is NULL or None (in case of Python), return -1

**Input:**

str: 1C0C1C1A0B1

**Output:**

1

**Explanation:**

The alphabets in str when expanded becomes “1 XOR 0 XOR 1 XOR 1 AND 0 OR 1”, result of the expression becomes 1, hence 1 is returned.

**Sample Input:**

0C1A1B1C1C1B0A0

**Output:**

0
___
## Solution
```c++
#include<bits/stdc++.h>
#define print(arr, n) for(int _=0; _<n; _++) cout<<arr[_]<<' ';cout<<endl
#define input(arr, n) for(int _=0; _<n; _++) cin>>arr[_]
using namespace std;

int solve()
{
    string s;
    cin>>s;
    int ans; // final ans
    if(s.length()<3) return -1;
    if(s[0] == '1')
        ans = 1;
    else
        ans = 0;

    int next;
    for(int i=1; i<s.length(); i+=2){
        if(s[i+1] == '1') next = 1;
        else next = 0;

        if(s[i] == 'A'){
            ans = ans&next;
        }
        else if(s[i] == 'B')
            ans = ans|next;
        else
            ans = ans^next;
    }
    return ans;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        cout<<solve();
    }
    return 0;
}
```
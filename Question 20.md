## Question

Given a string, move all the hyphens in the string to the beginning of the string

**Example**

**Input**

My-name-is-john

**Output**

---Mynameisjohn

## Solution
```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    string str;
    cin>>str; // My-name-is-John
    int count = 0; // 3
    string final_str= ""; // MynameisJohn
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='-')
            count++;
        else
            final_str += str[i];
    }
    while(count--){
        final_str = '-'+final_str;
    }
    cout<<final_str;
    return 0;
}
```
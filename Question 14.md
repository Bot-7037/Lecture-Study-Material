## Question

Given an input string str, and two characters c1 and c2, swap all the occurances of c1 with c2 and all occurances of c2 with c1 in the input string.

**Input**

Accenture

c

e

**Output**

Aeecnturc


```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    char c1, c2;
    cin>>c1>>c2;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == c1)
            str[i] = c2;
        else if(str[i] == c2)
            str[i] = c1;
    }
    cout<<str;
    return 0;    
}
```
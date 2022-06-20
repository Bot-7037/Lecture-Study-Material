## Question

Given a string, find the element that occurs in the string most frequently

**Example**

**Input**

hello world

**Output**

l

## Solution
```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int arr[123] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[(int)(s[i])]++; // (int)('a'); 
    }
    int ans = arr[0]; // max value in array
    int index = 0; // which index had max value
    for (int i = 0; i < 123; i++)
    {
        if(ans < arr[i]){
            ans = arr[i];
            index = i;
        }
    }
    cout<<(char)(index);
    return 0;
}
```

## Solution 2
```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<char,int> m;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        m[str[i]]++;
    }
    int max_val = INT_MIN;
    char ans;
    for(pair i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    for(auto i:m){
        if(i.second > max_val){
            max_val = i.second;
            ans = i.first;
        }
    }
    cout<<ans;
    
    return 0;
}
```
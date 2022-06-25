## 7 Segment Displpay

[Question Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/)

```c++
#include<bits/stdc++.h>
#define print(arr, n) for(int _=0; _<n; _++) cout<<arr[_]<<' ';cout<<endl
#define input(arr, n) for(int _=0; _<n; _++) cin>>arr[_]
using namespace std;
map<char, int> m;

int total_matchsticks(string n){
    int ans=0;
    for(auto i:n){
        ans+=m[i];
    }
    return ans;
}

void solve()
{
    string n;
    cin>>n;
    int matches = total_matchsticks(n);
    string str="";
    if(matches%2==1){
        str+="7";
        matches-=3;
    }
    while(matches>=2){
        matches-=2;
        str+="1";
    }
    cout<<str<<"\n";
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    m['0']=m['6']=m['9']=6;
    m['1']=2;
    m['2']=m['3']=m['5']=5;
    m['4']=4;
    m['7']=3;
    m['8']=7;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
```

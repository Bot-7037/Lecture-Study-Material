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
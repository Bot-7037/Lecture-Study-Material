#include<bits/stdc++.h>
using namespace std;
int exponent(int n){
    int i = 0;
    while(n%2 == 0){
        n = n/2;
        i++;
    }
    return i;
}
int main(){
    int a, b;
    cin>>a>>b;
    int ans = INT_MIN;
    int exp = INT_MIN;
    for (int i = a; i <= b; i++)
    {
        if(exp < exponent(i)){
            ans = i;
            exp = exponent(i);
        }
    }
    cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
#define print(arr, n) for(int _=0; _<n; _++) cout<<arr[_]<<' ';cout<<endl
#define input(arr, n) for(int _=0; _<n; _++) cin>>arr[_]
using namespace std;


int sum_of_factors(int n){
    int sum = 0;
    for (int i = 1; i <n; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}

void solve(int a=1, int b=500)
{
    for (int i = a; i <= b; i++)
    {
        if(i == sum_of_factors(i))
            cout<<i<<" ";
    }
}

int main(){
    solve(1, 500);
    return 0;
}
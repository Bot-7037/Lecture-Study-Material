#include<bits/stdc++.h>
#define print(arr, n) for(int _=0; _<n; _++) cout<<arr[_]<<' ';cout<<endl
#define input(arr, n) for(int _=0; _<n; _++) cin>>arr[_]
using namespace std;

int solve(int a, int b, int c)
{
    switch (c) 
    {
        case 1:
            return a+b;
        case 2:
            return a-b;
        case 3:
            return a*b;
        case 4:
            if(b!=0)
                return a/b;
            else
                cout<<"invalid operation";
                return -1;
        default:
            cout<<"Invalid choice";
    }
    return -1;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout<<solve(10, 20, 3);
    return 0;
}
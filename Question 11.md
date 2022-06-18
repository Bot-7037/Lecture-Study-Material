## Question

Given 3 points in form of co-ordinates, find the distance between them as :
- Find the distance between point 1 and point 2
- Find the distance between point 2 and 3
- Return sum of both distances
- Use the formula 

$$
\sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
$$
```c++
#include<bits/stdc++.h>
#define print(arr, n) for(int _=0; _<n; _++) cout<<arr[_]<<' ';cout<<endl
#define input(arr, n) for(int _=0; _<n; _++) cin>>arr[_]
using namespace std;

float solve()
{
    int x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    float d1 = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));
    float d2 = sqrt(pow(x2-x3, 2)+pow(y2-y3,2));

    return d1+d2;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout<<solve();
    return 0;
}
```
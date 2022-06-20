#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{10, 20, 40, 50 ,30};
    priority_queue<int> pq;

    for(auto i:arr)
        pq.push(i);
    
    for (int i = 0; i < 3; i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}
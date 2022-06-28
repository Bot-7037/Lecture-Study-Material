## Unique Triangles

Given a number of triangles as input, find the total number of unique triangles

**Sample Input**

5

5 4 3

4 5 3

8 3 1

7 5 6

6 5 7
  
**Output**

3

## Solution

```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> triangle;
    set<vector<int>> s;
    while(n--){
        cin>>triangle[0]>>triangle[1]>>triangle[2];
        sort(triangle.begin(), triangle.end());
        s.insert(triangle);
    }
    cout<<s.size();
    return 0;
}
```

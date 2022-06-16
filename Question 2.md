## Question
___
**Implement the following Function**

`def ProductSmallestPair(sum, arr)`

The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

NOTE

Return -1 if array is empty or if n<2

Return 0, if no such pairs found

All computed values lie within integer range

**Example**

*Input*

sum:9

Arr:5 2 4 3 9 7 1

*Output*

2

## Explanation

Pair of least two element is (2, 1) 2 + 1 = 3 < 9, 

Product of (2, 1) 2*1 = 2. Thus, output is 2

**Sample Input**

sum:4

Arr:9 8 3 -7 3 9

**Sample Output**

-21
___
## Solution
```c
#include <stdio.h>
#include <stdlib.h>
int fun(int * arr, int n){
    int ans, temp, i, j, check;
    if(n<=2) return -1;
    
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return arr[1]*arr[0];
}
int main()
{
    int n;
    scanf("%d",&n); // input
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    prinf("%d", fun(arr, n));
    return 0;
}
```
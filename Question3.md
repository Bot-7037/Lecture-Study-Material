## Question
___
**Problem Description :**

The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

**Note**

- Return -1 if the array is null
- Return 0 if the total amount of food from all houses is not sufficient for all the rats.
- Computed values lie within the integer range.

**Example**

*Input*

r: 7

unit: 2

n: 8

arr: 2 8 3 5 7 4 1 2

*Output*

4
___
## Explanation
```
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, units, n;
    scanf("%d %d %d",& r, &units, &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int requirement = r*units; // -4
    for(int i=1; i<=n; i++){
        requirement -= arr[i-1];
        if(requirement <= 0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}
```
## Question

**Implement the following function**
`LargeSmallSum(arr)`

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

**Assumption**
- All array elements are unique
- Treat the 0th position as even

**Example**

**Input**

arr : 3 2 1 7 5 4

**Output**
7

**Explanation**
- Second largest among even position elements(1 3 5) is 3
- Second smallest among odd position element is 4
- Thus output is 3+4 = 7
___
## Solution

```c
#include <stdio.h>;
 
int largeSmallSum(int *array, int n)
{
    int answer, i, j, temp;;
    int even[n], odd[n];
    int evencount = 0, oddcount = 0;
    if(n<=3)
    {
        answer = 0;
    }
    else
    {
        even[0] = array[0];
        evencount = 1;
        for(i=1; i<n; i++)
        {
            if(i%2==0)
            {
                even[evencount] = array[i];
                evencount++;
            }
            else
            {
                odd[oddcount] = array[i];
                oddcount++;
            }  
        }
        for(i=0; i<evencount; i++)
        {
            for(j=i+1; j<evencount; j++)
            {
                if(even[i]>even[j])
                {
                    temp = even[i];
                    even[i] = even[j];
                    even[j] = temp;
                }
            }
        }
        for(i=0; i<oddcount; i++)
        {
            for(j=i+1; j<oddcount; j++)
            {
                if(odd[i]>odd[j])
                {
                    temp = odd[i];
                    odd[i] = odd[j];
                    odd[j] = temp;
                }
            }
        }
        answer = even[evencount-2] + odd[1];
    }
    return answer;
}
 
int main()
{
    int n, result, i;
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    result = largeSmallSum(array, n);
    printf("%d",result);
    return 0;
}```
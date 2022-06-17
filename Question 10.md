## Question

**Problem Statement :**

You are given a function, void MaxInArray(int arr[], int length); The function accepts an integer array ‘arr’ of size ‘length’ as its argument. Implement the function to find the maximum element of the array and print the maximum element and its index to the standard output 

(STDOUT). The maximum element and its index should be printed in separate lines.

*Note:* 

- Array index starts with 0 
- Maximum element and its index should be separated by a line in the output 
- Assume there is only 1 maximum element in the array 
- Print exactly what is asked, do not print any additional greeting messages 

**Example:** 

**Input:** 

23 45 82 27 66 12 78 13 71 86 

**Output:** 

86 

9 

**Explanation:** 

86 is the maximum element of the array at index 9. 

## Solution

```c++
#include<iostream>
using namespace std;

void MaxInArray (int arr[], int length) 
{
  int max = INT_MIN, index = -1;  
  for (int i = 0; i < length; i++){
      if (arr[i] > max){
	    max = arr[i];
	    index = i;
      }
    }
 cout << max << endl << maxIdx;

}


int main () 
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  MaxInArray (a, n);
  return 0;
}
```
## Adding ones

[Question Link](https://practice.geeksforgeeks.org/problems/adding-ones3628/1)

## Solution

```c++
class Solution{
    public:
    void update(int arr[], int n, int updates[], int k)
    {
    	for(int i=0; i<k; i++){ // iterating updates array
    		int index = updates[i]-1;
    		arr[index]++;
    	}
    
    	for(int i=1; i<n ; i++){
    		arr[i]+= arr[i-1];
    	}
    }
};
```

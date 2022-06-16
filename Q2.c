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
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
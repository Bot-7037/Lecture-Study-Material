#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m;
    n = 3;
    m = 10;
    int sumofall = (m*(m+1))/2; // sum of all numbers 1 -> m
    int sumofdivisible;
    int l = m-(m%n);
    int n_of_t = ((l-n)/n)+1;
    sumofdivisible = (n_of_t*(n+l))/2;//sum of all numbers divisible my n
    int sumfoindivisible = sumofall-sumofdivisible;
    printf("%d",abs(sumofdivisible- sumfoindivisible));
    return 0;
}
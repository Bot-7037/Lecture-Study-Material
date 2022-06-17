## Question

N-base notation is a system for writing numbers that uses only n different symbols, This symbols are the first n symbols from the given notation list(Including the symbol for o) Decimal to n base notation are (0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A,11:B and so on upto 35:Z)

**Implement the following function**

`Char* DectoNBase(int n, int num):`

The function accept positive integer n and num Implement the function to calculate the n-base equivalent of num and return the same as a string

**Steps**

- Divide the decimal number by n,Treat the division as the integer division
- Write the the remainder (in  n-base notation)
- Divide the quotient again by n, Treat the division as integer division
- Repeat step 2 and 3 until the quotient is 0
- The n-base value is the sequence of the remainders from last to first

**Assumptions**
- 1<n<=36

**Example**

**Input**
- n:12
- num: 718

**Output**
- 4BA

**Explanation**

| Number | Divisor | Quotient | Remained |
| ------ | ------- | -------- | -------- |
| 718    | 12      | 59       | 10(A)    |
| 59     | 12      | 4        | 11(B)    |
| 4      | 12      | 0        | 4(B)     |

## Solution
```c++
#include<bits/stdc++.h>
using namespace std;
string decitoNBase (int n, int num) 
{
        string res = "";
        int quotient = num / n;
        
        vector<int> rem;
        
        rem.push_back(num % n);
          
        while(quotient != 0)
        {
            rem.push_back(quotient % n);
            quotient = quotient / n;
        }
        
        for (int i = 0; i < rem.size (); i++)
        {
            if (rem[i] > 9)
    	    {
                res = (char)(rem[i] - 9 + 64) + res;
            }
    	    else
                res = to_string(rem[i]) + res;
        }
        
        
        return res;
}

int main () 
{
  int n, num;
  cin >> n>>num;
 
  cout << decitoNBase(n, num);
   
  return 0;
}```
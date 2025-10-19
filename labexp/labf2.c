#include <stdio.h>
int main ()
{
    int rev=0, n, rem, temp;
        printf ("enter a no");
        scanf("%d",&n);
        temp = n;

        while (n!=0)
        {
            rem=n % 10;
            rev = rev * 10 + rem;
            n = n/10;
        }
        if (temp == rev) 
        {
        printf("%d is palidrom no",temp);
        }
        else
        {
            printf("%d is not a palidrom no",temp);
        }
      return 0;
        
    }

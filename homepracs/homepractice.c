#include <stdio.h>
int main ()
{
    float bs, hra, da, gs;

    printf("enter the basic salary:");
    scanf("%f",&bs);

    if (bs<1300)
    {
        hra= 10*bs/100;
        da= 90*bs/100;
    }
    else
     {
     hra= 500;
     da= 98*bs/100 ;
    }
    gs=bs+hra+da;
    printf("gross salary is:rs.%f\n",gs);
    return 0;

}
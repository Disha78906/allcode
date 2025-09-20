#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;

    printf ("enter marks for 5 sub:");
    scanf ("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    per = (m1+m2+m3+m4+m5)*100/500;

    if (per>=60)
     printf ("1st div\n");

    if ((per<=50) && (per<59))    
      printf("2nd div\n");

    if ((per>=40) && (per<50));
     printf("3rd div\n");

    if (per<40)
     printf ("FAIL\n");
    

 return 0;
}
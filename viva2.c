#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int g, p, n;
        scanf("%d %d", &g, &p);
        scanf("%d", &n);

        int c1 = 0, c2 = 0; 
        for (int i = 0; i < n; i++) 
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if (a == 1) c1++;
            if (b == 1) c2++;
        }

        long long cost1 = (long long)g * c1 + (long long)p * c2;
        long long cost2 = (long long)p * c1 + (long long)g * c2;

        if (cost1 < cost2)
            printf("%lld\n", cost1);
        else
            printf("%lld\n", cost2);
    }

    return 0;
}


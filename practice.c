#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, prod, prod1;
    scanf("%d %d", &x, &n);

    float sum = 0.0;
    for (int i = 0; i <= n-1; i++)
    {
        prod = 1, prod1 = 1;
        for (int j = 1; j <= i; j++)
        {
            prod *= x;
            prod1 *= j;
            
        }
        sum = sum + (prod * 1.0) / prod1;
    }
    printf("\n%f", sum);

    return 0;
}

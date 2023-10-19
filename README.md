//C_Learnings

//Day1 of 30 days C Challenge
//printing sum and difference
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, m;
    float c, d;
    scanf("%d%d", &n, &m);
    scanf("%f%f", &c, &d);
    printf("%d %d\n", n+m, n-m);
    printf("%.1f %.1f", c+d, c-d);        
    return 0;
}

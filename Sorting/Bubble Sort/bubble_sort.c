#include <stdio.h>

main()
{
    int t,a[5],i,j;
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);

    for(j=5; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(a[i] > a[i+1])
            {
                t = a[i+1];
                a[i+1] = a[i];
                a[i] = t;
            }
        }
    }
    for(i=0; i<5; i++)
        printf("%d ",a[i]);
}

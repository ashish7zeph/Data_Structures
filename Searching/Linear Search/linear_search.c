#include <stdio.h>

main()
{
    int i,a[7],n,loc = 1;
    printf("Input an array\n");

    for(i=0; i<7; i++)
        scanf("%d",&a[i]);

    printf("\n enter no. to be searched - ");
    scanf("%d",&n);
    i = 0;
    while(n != a[i])
    {   loc = loc + 1;
        i++;
    }
    printf("LOC = %d",loc);
}

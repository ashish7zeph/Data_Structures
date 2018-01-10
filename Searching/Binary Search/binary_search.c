#include<stdio.h>

 main()
{
    int i,a[7],b=0,e=6,m,n,loc;
    printf("Input an array\n");
    for(i=0; i<7; i++)
        scanf("%d",&a[i]);

    printf("\n enter no. to be searched - ");
    scanf("%d",&n);
    while(b <= e)
    {
        m = (b+e)/2;
        if(n == a[m])
        {
            loc = m;
            printf("LOC = %d",loc+1);
            break;
        }
        if(n <= a[m])
            e = m-1;
        else
            b = m+1;
    }
    if(b > e)
        printf("LOC = null");
}

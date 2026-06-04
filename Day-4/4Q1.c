#include <stdio.h>
int main ()
{
    int n,c,a=0,b=1,i;
    printf ("enter the no. of terms: ");
    scanf ("%d",&n);
    printf ("%d \n %d",a,b);
    for (i=1;i<=n-2;i++)
    {
        c=a+b;
        printf ("\n %d",c);
        a=b;
        b=c;
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a,b=0,x,y,z;
    scanf("%d %d", &x,&y);

    for(a=1; a<=y; a++)
    {
        b++;

        if(b==x) printf("%d",a);
        else printf("%d ", a);

        if(b==x)
        {
            b=0;
            printf("\n");
        }
    }

    return 0;
}

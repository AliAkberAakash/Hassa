/*
* Solution to uva-10783
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdio.h>

int main()
{
    int t,i,a,b,j,s;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d", &a, &b);

        s=0;

        for(j=a; j<=b; j++)
            if(j%2)
             s=s+j;
        printf("Case %d: %d\n", i+1, s);

    }

    return 0;
}

/*
* Solution to uva-11636
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    int t,c,d,i;

    i=0;
    while(1)
    {
        i++;
        scanf("%d", &t);
        if(t<0) break;

        d=1; c=0;
        while(d<t)
        {
            d=2*d;
            c++;
        }

        printf("Case %d: %d\n", i, c);
    }

    return 0;
}

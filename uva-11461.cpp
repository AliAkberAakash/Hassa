/*
* Solution to uva-11461
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cmath>
#include<cstdio>

int main()
{
    int a,b,i,c,p;

    while(1)
    {
        c=0;
        scanf("%d %d", &a, &b);
        if(!a&&!b)
            break;

        for(i=a; i<=b; i++)
        {
            p=sqrt(i);
            if(p*p==i)
                c++;
        }

        printf("%d\n", c);
    }

    return 0;
}

/*
* Solution to uva-100
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

int main()
{
    int i,j,a,b,d,c,n;

    while(scanf("%d %d", &i, &j)!=EOF)
    {
        if(i<j)
           { a=i; b=j; }
        else   { a=j; b=i; }


        c=0;

        for( ; a<=b; a++)
        {
            d=0;
            n=a;
            while(1)
            {
                d++;
                if(n==1)
                    break;
                else if(n%2==0)
                    n=n/2;
                else
                    n=(3*n)+1;
            }
            if(d>c)
                c=d;
        }

        printf("%d %d %d\n", i, j, c);

    }

    return 0;
}

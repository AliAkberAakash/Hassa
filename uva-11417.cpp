/*
* Solution to uva-11417
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int GCD(int i,int j)
{
    int temp;
    while(i>0)
    {
        temp=j%i;
        j=i;
        i=temp;
    }

    return j;
}

int main()
{
    int n,g,i,j;

    while(1)
    {
        scanf("%d", &n);
        if(!n)  break;

        g=0;

        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
                g+=GCD(i,j);
        }

        printf("%d\n", g);
    }

    return 0;
}

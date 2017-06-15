/*
* Solution to uva-11716
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>

int square(int l)
{
    if(sqrt(l)*sqrt(l)==l)
        return (int) sqrt(l);
    else return 0;
}

int main()
{
    int n,i,j,l,k,p;
    char e[1000],f[32][32];

    scanf("%d", &n);
    getchar();

    while(n--)
    {
        gets(e);
        l=strlen(e);
        if(!square(l))
        {
            printf("INVALID\n");
            continue;
        }
        k=0;
        p=square(l);
        for(i=0; i<p; i++)
        {
            for(j=0; j<p; j++)
            {
                f[i][j]=e[k];
                k++;
            }
        }
        for(j=0; j<p; j++)
        {
            for(i=0; i<p; i++)
            {
                printf("%c", f[i][j]);
            }
        }
        printf("\n");

    }

    return 0;
}

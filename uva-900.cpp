/*
* Solution to uva-900
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

int main()
{
    int i,j;
    int a[60];
    a[0]=0;
    a[1]=1;
    while(scanf("%d",&i)&&i)
    {
        for(j=2; j<=i+1; j++)
            a[j]=a[j-1]+a[j-2];

        printf("%d\n", a[j-1]);
    }

    return 0;
}

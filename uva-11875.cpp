/*
* Solution to uva-11875
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    int t,i,j,n,a[50];

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);

        for(j=0; j<n; j++)
            scanf("%d", &a[j]);

        j=(n/2);

        printf("Case %d: %d\n", i+1, a[j]);
    }

    return 0;
}

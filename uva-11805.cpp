/*
* Solution to uva 11805
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t,n,k,p,i,j;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &n, &k, &p);

        for(j=0; j<p; j++)
        {
            k++;
            if(k>n)
                k=1;
        }

        printf("Case %d: %d\n", i+1, k);
    }
    return 0;
}

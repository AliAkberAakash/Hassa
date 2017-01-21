/*
* Solution to uva 11727
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

using namespace std;

void sorts(long long int a[])
{
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(a[i]>a[j])
            {
                long long int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    long long int t,i,a[3];

    scanf("%lld", &t);

    for(i=0;  i<t; i++)
    {
        scanf("%lld %lld %lld", &a[0], &a[1], &a[2]);

        sorts(a);

        printf("Case %lld: %lld\n", i+1,a[1]);

    }

    return 0;
}

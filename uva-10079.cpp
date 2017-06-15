/*
* Solution to uva-10079
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    long long int n;

    while(scanf("%lld", &n)&&n>=0)
        printf("%lld\n", ((n*(n+1))/2)+1);

    return 0;
}

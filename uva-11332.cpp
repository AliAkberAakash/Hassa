/*
* Solution to uva 11332
* Solved by: Ali Akber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

long long int sum(long long int x)
{
    long long int d=0;

    if(x<10)
      return x;

    while(x>0)
    {
        d+=(x%10);
        x=x/10;
    }

    return sum(d);
}


int main()
{
    long long int x;

    while(scanf("%lld", &x))
    {
        if(!x)
            break;
        else
            printf("%lld\n", sum(x));
    }

    return 0;
}

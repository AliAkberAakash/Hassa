/*
* Solution to uva 11479
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    long long int t,a,b,c;

    scanf("%lld", &t);

    for(long long int i=0; i<t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        if(a+b>c&&b+c>a&& a+c>b)
        {
            if(a==b&&b==c)
            {
                printf("Case %lld: Equilateral\n", i+1);
            }
            else if(a==b||b==c||c==a)
                printf("Case %lld: Isosceles\n", i+1);
            else
               printf("Case %lld: Scalene\n", i+1);
        }
        else
        {
            printf("Case %lld: Invalid\n", i+1);
        }
    }

    return 0;
}

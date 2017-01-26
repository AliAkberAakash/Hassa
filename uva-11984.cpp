/*
* Solution to uva-11984
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    double c,f;
    int i,t;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%lf %lf", &c, &f);
        c=((9*c)/5)+32;
        f=f+c;
        c=((f-32)*5)/9;

        printf("Case %d: %.2lf\n", i+1, c);
    }


    return 0;
}

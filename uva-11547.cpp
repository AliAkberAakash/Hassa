/*
* Solution to uva-11547
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    int t,n,i,d;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d",&n);

        n=((((((n*567)/9)+7492)*235)/47)-498);

        i=2;
        while(i--)
        {
            d=n%10;
            n=n/10;
        }

        if(d<0)
            d=-d;

        printf("%d\n", d);
    }

    return 0;
}

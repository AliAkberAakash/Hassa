/*
* Solution to uva-11689
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>



int main()
{
    int n,e,f,g,c,d;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d %d", &e, &f, &g);

        e=e+f;

        c=0;

        while(e>=g)
        {
            d=e/g;
            e=(e%g)+d;
            c+=d;
        }

        printf("%d\n", c);
    }

    return 0;
}

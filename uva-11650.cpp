/*
* Solution to uva-11650
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>
#define t 12
#define s 60

int main()
{
    int h,m,n;
    char c;
    scanf("%d",&n);
    getchar();

    while(n--)
    {
        scanf("%d%c%d", &h,&c,&m);

        if(!m)
        {
            if(h==12)
            printf("%02d:%02d\n", h, m);
            else
            printf("%02d:%02d\n", t-h, m);
        }
        else
           {
               int k=t-h-1;
               if(k<=0)
                k+=12;
               printf("%02d:%02d\n", k, s-m);
           }
    }

    return 0;
}

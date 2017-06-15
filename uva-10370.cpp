/*
* Solution to uva 10370
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

int main()
{
    int i,t,n,sum,avg,c,a[1005];
    double ans;

    scanf("%d", &t);

    while(t--)
    {
        sum=c=0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            sum+=a[i];
        }
        avg = sum/n;

        for(i=0; i<n; i++)
        {
            if(a[i]>avg)
                c++;
        }
        ans = ((c*1.0)*100)/(n*1.0);

        printf("%.3lf%%\n", ans);
    }

    return 0;
}

/*
* Solution to uva-11715
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>
#include<cmath>

int main()
{
    double x,y,z,ans1, ans2;
    double u,v,t,s,a;

    int i=0,d;

    while(scanf("%d %lf %lf %f", &d, &x,&y, &z)!=EOF)
    {
        if(!d)
            break;

        switch(d)
        {
        case 1:
            u=x; v=y; t=z;
            a=(v-u)/t;
            s=(u*t)+(a*t*t)/2;
            ans1=s; ans2=a;
            break;
        case 2:
            u=x; v=y; a=z;
            s=((v*v)-(u*u))/(2*a);
            t=(v-u)/a;
            ans1=s; ans2=t;
            break;
        case 3:
            u=x; a=y; s=z;
            v=sqrt((u*u)+2*a*s);
            t=(v-u)/a;
            ans1=v; ans2=t;
            break;
        case 4:
            v=x; a=y; s=z;
            u=sqrt((v*v)-2*a*s);
            t=(v-u)/a;
            ans1=u; ans2=t;
            break;
        }

        printf("Case %d: %.3lf %.3lf\n",i+1, ans1, ans2);

        i++;
    }

    return 0;
}

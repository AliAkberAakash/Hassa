/*
* Solution to uva 11677
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int h1,h2,m1,m2,ans;

    while(1)
    {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(!m1&&!m2&&!h1&&!h2)
            break;
        if(h1==h2)
        {
            if(m1<=m2)
            {
                printf("%d\n", m2-m1);
            }
            else if(m1>m2)
            {
                ans=(24*60)+m2-m1;
                printf("%d\n", ans);
            }
        }
        else if(h1>h2)
        {
            h1=24-h1;
            h2=h1+h2;
            ans=(h2*60)+m2-m1;
            printf("%d\n", ans);
        }
        else
        {
            h1=h2-h1;
            ans=(h1*60)-m1+m2;
            printf("%d\n", ans);
        }

    }

    return 0;
}

/*
* Solution to uva 11219
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    int d1,d2,m1,m2,y1,y2,t,i;
    char c,c1,c2;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d%c%d%c%d", &d1,&c,&m1,&c1,&y1,&c2);
        getchar();
        scanf("%d%c%d%c%d", &d2,&c,&m2,&c1,&y2,&c2);

        if(y1<y2)
            printf("Invalid birth date\n");
        else if(y1>y2)
        {
            if(m1<m2)
                printf("Invalid birth date\n");
            else if(m1>m2)
            {
                if()
            }
        }
        else
        {

        }
    }



    return 0;
}

/*
* Solution to uva-11777
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

void sorts(int ts[])
{
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(ts[i]<ts[j])
            {
                int temp=ts[i];
                ts[i]=ts[j];
                ts[j]=temp;
            }
        }
    }
}

char grade(int k)
{
    if(k>=90)
        return 'A';
    if(k>=80)
        return 'B';
    if(k>=70)
        return 'C';
    if(k>=60)
        return 'D';

    return 'F';
}

int main()
{
    int t,i,t1,t2,t3,a,ts[3],k,v;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d %d %d %d %d %d", &t1, &t2, &t3, &a, &ts[0], &ts[1], &ts[2]);

        sorts(ts);

        v=(ts[0]+ts[1])/2;

        k=t1+t2+t3+a+v;

        printf("Case %d: %c\n", i+1,grade(k));

    }

    return 0;
}

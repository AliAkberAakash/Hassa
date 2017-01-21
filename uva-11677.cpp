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
    int h1,h2,m1,m2;

    while(1)
    {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(!m1&&!m2&&!h1&&!h2)
            break;


        m1=(h1*60)+m1;
        m2=(h2*60)+m2;

        printf("%d\n", m2-m1);
    }

    return 0;
}

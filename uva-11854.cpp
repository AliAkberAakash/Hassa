/*
* Solution to uva-11854
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdio.h>

int main()
{
    int a,b,c;

    while(1)
    {
        scanf("%d %d %d", &a,  &b, &c);

        if(!a&&!b&&!c)
            break;

        if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==b*b+a*a))
            printf("right\n");
        else
            printf("wrong\n");

    }

    return 0;
}

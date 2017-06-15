#include<iostream>
#include<cstdio>

int main()
{
    int n, a[1005],f,c;

    while(scanf("%d", &n)!=EOF)
    {
        f=0; c=0;
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);


        //flipping
        while(1)
        {
            f=0;
            int i=0, j=1,temp;
            while(i<n-1)
            {
                if(a[i]>a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                f++;
                }
                i++; j++;
            }
            if(!f)
                break;
            c=c+f;
        }

        printf("Minimum exchange operations : %d\n", c);

    }

    return  0;
}

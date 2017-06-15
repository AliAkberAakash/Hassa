/*
* Solution to uva-11734
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<cstring>

int main()
{
   int T,i,j,l,a;
    char s[101],t[101];

    scanf("%d", &T);
    getchar();

    for(j=0; j<T; j++)
    {
        printf("Case %d: ", j+1);
        a=0;
        gets(s);
        gets(t);
        l=strlen(s);

        if(!strcmp(s,t))
            printf("Yes\n");
        else
        {

            for(i=0; i<l; i++)
            {
                if(s[i]!=t[])
                {
                printf("Output Format Error\n");
                a=1;
                break;
                }
            }

            if(!a)
                printf("Wrong Answer\n");
        }

    }

    return 0;

}

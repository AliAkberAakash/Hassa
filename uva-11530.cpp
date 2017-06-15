/*
* Solution to uva-11530
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>
#include<cstring>

int main()
{
    int T,i,j,l,a;
    char s[101];

    scanf("%d", &T);
    getchar();

    for(j=0; j<T; j++)
    {
        a=0;
        gets(s);
        l=strlen(s);

        for(i=0; i<l; i++)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
                a+=1;
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
                a+=2;
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
                a+=3;
            else    a+=4;

        }

        printf("Case #%d: %d\n",j+1, a);
    }

    return 0;
}

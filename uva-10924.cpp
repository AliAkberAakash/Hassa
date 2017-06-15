/*
* Solution to uva 10924
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>
#include<cstring>

bool prime(int x)
{
    if(x==1) return  1;

    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return 0;
    return 1;
}

int main()
{

    char ch[1000];

    int i,l,sum;

    while(scanf("%s", ch)==1)
    {
        l=strlen(ch);
        sum=0;

        for(int i=0; i<l; i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
            sum+=ch[i]-'a'+1;
            else if(ch[i]>='A'&&ch[i]<='Z')
            sum+=ch[i]-'A'+27;
        }

        if(prime(sum))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }

    return 0;
}

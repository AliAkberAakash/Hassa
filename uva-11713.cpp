/*
* Solution to uva-11713
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

bool notVowel(char c)
{
    bool k;
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        k=0;
        break;
    default:
        k=1;
        break;
    }

    return k;
}

int main()
{
    string s,t;

    int n,i,l;

    scanf("%d", &n);
    getchar();

    while(n--)
    {
        cin>>s;
        cin>>t;

        if(s.length()!=t.length())
        {
            printf("No");
        }
        else
        {
            l=s.length();
            for(i=0; i<l; i++)
            {
                if(s[i]!=t[i])
                {
                    if(notVowel(s[i]))
                    {
                        printf("No");
                        break;
                    }
                    else
                    {
                        if(notVowel(t[i]))
                        {
                            printf("No");
                            break;
                        }

                    }
                }
            }
            if(i==l)
                printf("Yes");
        }
            printf("\n");

    }

    return 0;
}

/*
* Solution to uva 10921
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<cstring>

char returnChar(char c)
{
    char s;

    switch(c)
    {
    case '1':
    case '0':
    case '-':
        s=c;
        break;
    case 'A':
    case 'B':
    case 'C':
        s='2';
        break;
    case 'D':
    case 'E':
    case 'F':
        s='3';
        break;
    case 'G':
    case 'H':
    case 'I':
        s='4';
        break;
    case 'J':
    case 'K':
    case 'L':
        s='5';
        break;
    case 'M':
    case 'N':
    case 'O':
        s='6';
        break;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
        s='7';
        break;
    case 'T':
    case 'U':
    case 'V':
        s='8';
        break;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        s='9';
        break;
    }

    return s;
}

int main()
{
    char s[50];

    int i,l;

    while(scanf("%s", s)==1)
    {
        l=strlen(s);

        for(i=0; i<l; i++)
        {
            printf("%c", returnChar(s[i]));
        }
        printf("\n");
    }

    return 0;
}

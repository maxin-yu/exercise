#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    gets(str);
    int i,c=0;
    int n=strlen(str);
    for(i=(n-1);i>=0;i--)
    {
        if(str[i]!=' ')
        {
            c++;
        }
        else
        {
            break;
        }    
    }
    printf("%d\n",c);

    return 0;
}

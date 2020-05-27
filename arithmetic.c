#include<stdio.h>
#include<conio.h>

int main()
{
    int num,ans,j=0;
    scanf("%d",&num);
    int array[num];
    char op[num-1];

    for(int i=0;i<num;i++)
        scanf("%d",&array[i]);

        scanf("%s",op);

    ans = array[j];

    for(int i=0;i<num-1;i++)
    {
        j+=1;
        if(op[i]=='+')
        {
            ans += array[j];
            continue;
        }
         if(op[i]=='-')
        {
            ans -= array[j];
            continue;
        }
         if(op[i]=='*')
        {
            ans *= array[j];
            continue;
        }
         if(op[i]=='/')
        {
            ans /= array[j];
            continue;
        }
         if(op[i]=='%')
        {
            ans %= array[j];
            continue;
        }
    }
    printf("%d",ans);
}

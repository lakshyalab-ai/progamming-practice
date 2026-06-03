#include<stdio.h>
int main()
{
    float bal, wd, rem_bal;
    printf("enter balance :");
    scanf("%f", &bal);
    printf("enter withdrawal amt:");
    scanf("%f", &wd);
    if(bal<wd)
    {
        printf("insufficient funds");
    }
    else if(wd>50000)
    {
        printf("pan is required");
    }
    else if((bal-wd)<1000)
    {
        rem_bal=bal - wd;
        printf("penalty");
    }
    return 0;
}

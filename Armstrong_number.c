# include <stdio.h>
int main()
{
    int n,c,r;
    int arm=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    {
    printf("Armstrong number");
    }
    else
    {
        printf("not a Armstrong number");
    }
}


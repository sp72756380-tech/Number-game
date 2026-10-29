#include <stdio.h>
int main()
{
    int secret =25;
    int i;
    printf("enter any number");
    scanf("%d",&i)\
    int attempt=0;
    while(i!=secret)
    {
        if(i>secret)
        printf("too high");
    else
    {
        printf("too low");
    }
    printf("enter any number");
    scanf("%d",&i);
    attempt++;
    }
    printf("congratulations you guess the number");
    printf("total attempt=%d",attempt);
    return 0;
}
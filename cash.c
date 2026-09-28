#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int change;
    do
    {
        change=get_int("change owed: ");
    }
    while(change<0);
    int nb=0;
    while(change>=25)
    {
        change-=25;
        nb++;
    }
    while(change>=10)
    {
        change-=10;
        nb++;
    }
    while(change>=5)
    {
        change-=5;
        nb++;
    }
    while(change>=1)
    {
        change-=1;
        nb++;
    }
    printf("%i\n",nb);
    return 0;
}

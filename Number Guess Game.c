#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int random_number=(rand()%100)+1;
int guessed,nguesses=0;
while(guessed!=random_number)
{
    printf("Guess the number\n");
    scanf("%d",&guessed); 
    if(guessed<random_number)
    printf("Enter higher number\n");
    else if(guessed>random_number)
    printf("Enter lower number\n");
    nguesses++;
}
printf("You guessed ir right\n");
printf("Number of attempts you did to guess the number is %d",nguesses);
return 0;
}
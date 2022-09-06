#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
    
    do{
        scanf("%d",&guess);
        if(guess>number)
        {
         printf("lowewr number please\n");
        }
        else if(guess<number)
        {
         printf("higer number please\n");
        }
        else
        {
         printf("congrstulations you gussed in %d attemps \n",nguesses);
        }
        nguesses++;
      }while(guess!=number);
    
}
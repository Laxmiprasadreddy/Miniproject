#include <stdio.h>
int main(){
    int option;
    int cofee = 0;
    int icecream = 0;
    int maggie = 0;
    int pasta = 0;
    int cake = 0; 
    float total = 0;
    printf("---Welcome to Mama cafe---\n");
    do{
    printf("\nItems          Rupees\n");
    printf("1.Cofee          40\n2.Icecream       50\n3.Maggie         60\n4.Pasta          60\n5.Tea            20\n6.Cake           40\n\n");
    printf("Enter your choice:");
    scanf("%d",&option);
    switch(option){

        case 1:
        printf("you are odering Cofee\n");
        printf("How many cofee's do yo want:");
        scanf("%d",&cofee);
        total = total+(20*cofee);
        printf("Your Ordering  = %d*Cofee\n\n",cofee);
        printf("Any other items to order sir:\n");
        continue;

        case 2:
        printf("you are odering Icecream\n");
        printf("How many Icecream's do yo want:");
        scanf("%d",&icecream);
        total = total+(50*icecream);
        printf("Your Ordering  = %d*Icecream\n\n",icecream);
        printf("Any other items to order sir:\n");
        continue;

        case 3:
        printf("you are odering Magiee\n");
        printf("How many Maggie plates do yo want:");
        scanf("%d",&maggie);
        total = total+(60*maggie);
        printf("Your Ordering  = %d*Maggie\n\n",maggie);
        printf("Any other items to order sir:\n");
        continue;

        case 4:
        printf("you are odering Pasta\n");
        printf("How many Pasta plates do yo want:");
        scanf("%d",&pasta);
        total = total+(60*pasta);
        printf("Your Ordering  = %d*Pasta\n\n",pasta);
        printf("Any other items to order sir:\n");
        continue;

        case 5:
        printf("you are odering Cake\n");
        printf("How many Cakes do yo want:");
        scanf("%d",&cake);
        total = total+(50*cake);
        printf("Your Ordering  = %d*cake\n\n",cake);
        printf("Any other items to order sir:\n");
        continue;

        case 6:
        break;
    }
}while(option>=1 && option<=5);

   printf("Your bill:   \t\t\n");
   if(cofee > 0)
   {
    printf("%d * Cofee             ------->       \t\t %d\n",cofee, 20 * cofee);
   }
   if(icecream > 0){
    printf("%d * Icecream          ------->       \t\t %d\n",icecream, 50 * icecream);
   }
   if(maggie > 0){
    printf("%d * Maggie            ------->       \t\t %d\n",maggie, 60 * maggie);
   }
   if(pasta > 0){
    printf("%d * Pasta             ------->       \t\t %d\n",pasta, 60 * pasta);
   }
   
   if(cake > 0){
    printf("%d * Cake             ------->        \t\t %d\n",cake, 50 * cake);
   }
    printf("GST :                -------->                   %g\n",total*18.0/100);
    printf("Your total:           --------->       \t\t %g\n\n", total+total*18/100);



    printf("    --------THANK YOU VISIT AGAIN---------       ");
}
    
   
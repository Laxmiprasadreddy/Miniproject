#include <stdio.h>
int main(){
    int chocolates;
    int player_1;
    int player_2;
    label:
    printf("Enter the number of chocolates:");
    scanf("%d",&chocolates);
    if(chocolates <=0 ){
      printf("Invalid Choice Enter again\n");
      goto label;
    }
    while(chocolates != 0){
        do{
        if(chocolates < 3 && chocolates >= 0){
            printf("Enter player 1 choice (0 to %d):",chocolates);
            scanf("%d",&player_1);
        }
        else{
        printf("Enter Player 1 choice (0 to 3):");
        scanf("%d",&player_1);
        }
        if(player_1 < 0 || player_1 > 3){
            printf("Invalid choice Enter again\n");
            continue;
        }
        chocolates = chocolates - player_1;
        printf("Remaining chocolates = %d\n\n",chocolates);
    }while(player_1 < 0 || player_1 > 3);

        if(chocolates == 0){
            printf("Player_2 got chilly\nPlayer_2 lost the game\nPlayer_1 win the game\n");
            break;
        }
        do{ 
        if(chocolates < 3 && chocolates >= 0){
            printf("Enter player 2 choice (0 to %d):",chocolates);
            scanf("%d",&player_2);
        }
        else{
        printf("Enter Player 2 choice (0 to 3):");
        scanf("%d",&player_2);
        }
        if(player_2 < 0 || player_2 > 3){
            printf("Invalid choice Enter again\n");
            continue;;   
        }
        chocolates = chocolates - player_2;
        printf("Remaining chocolates = %d\n\n",chocolates);    
    }while(player_2 < 0 || player_2 > 3);

        if(chocolates == 0){
            printf("Player_1 got chilly\nPlayer_1 lost the game\nPlayer_2 win the game\n");
            break;
        }
}
}
#include <stdio.h>
#include <stdlib.h> //system clear
#include <conio.h>



char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void BOARD();
void PLAY_MARK();
int CHECK_WIN();

void main(void)
{
	
PLAY_MARK();

}


void BOARD(){
	
	
    system("cls");
    printf("\n\n\t\t\t\tTic Tac Toe\n\n");

    printf("\t\t\t\t Player 1 (X)  -  Player 2 (O)\n\n\n\n");
	
	printf("\t\t\t     |     |     \n\n");
	printf("\t\t\t  %c  |  %c  |  %c \n\n",square[1],square[2],square[3]);
	printf("\t\t\t_____|_____|_____\n\n");
	printf("\t\t\t     |     |     \n\n");
	printf("\t\t\t  %c  |  %c  |  %c \n\n",square[4],square[5],square[6]);
	printf("\t\t\t_____|_____|_____\n\n");
	printf("\t\t\t     |     |     \n\n");
	printf("\t\t\t  %c  |  %c  |  %c \n\n",square[7],square[8],square[9]);
	printf("\t\t\t     |     |     \n\n");

	
}
void PLAY_MARK(){
	
int player = 1, i, choice;

    char mark;
    do
    {
        BOARD();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move ");
            player--;
            getch();
        }
        i = CHECK_WIN();

        player++;
    }while (i ==  - 1);
    
    BOARD();
    
    if (i == 1){
		player--;
	printf("==>\aPlayer %d win ", player);}
    else{
        printf("==>\aGame over ");
	}
 printf("press any key to play again ");
    getch();

	
}
int CHECK_WIN(){
	
	/*return 1 if Gameover with result*/
	/*return 0 if Gameover without result*/
	/*return -1 if Game in progress*/

	
	 if (square[1] == square[2] && square[2] == square[3]){
		 
		         return 1;

	 }
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
		
        return -1;
}


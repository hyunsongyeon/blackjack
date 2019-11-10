#include <stdio.h>
#include <stdlib.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30

int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;

int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users

int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag

//some utility functions

//get an integer input from standard input (keyboard)
//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) 
{
    int input, num;
    
    num = scanf("%d", &input);
    fflush(stdin);
    if (num != 1) //if it fails to get integer
        input = -1;
    
    return input;
}


//card processing functions ---------------

//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) 
{
}

//print the card information (e.g. DiaA)
void printCard(int cardnum) 
{
	
}

//mix the card sets and put in the array
int mixCardTray(void) 
{
	srand((unsigned)time(NULL));
	
}



int main(int argc, char *argv[]) 
{
	do
	{
		printf("Input the number of players (MAX : 5) : ");
		scanf("%d", &n_user);
		if(n_user>5)
			printf("Too many players!\n");
	}
	while(n_user>5);
	
	printf(" --> card is mixed and put into the tray\n");
	printf("------------------------------------------------\n--------- ROUND 1 (cardIndex : 0) ----------\n------------------------------------------------\n");
	

	printf("\n-------- BETTING STEP --------\n");
	printf(" --> your betting (total: $50) : ");
	
	printf("\n-------- CARD OFFERING -------\n");
	

	
	return 0;
}

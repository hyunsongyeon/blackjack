#include <stdio.h>
#include <stdlib.h>

int getCardNum(int cardnum)
{
	
	int value;
	int A;
	int i;
	
	if(i>=1 || i<=9)
		value = i+1;
	else if(i>=10||i<=12)
		value = 10;
	else if(i = 0)
		value = A; 
	
	return value;
}

int main(int argc, char *argv[])
{
	int cardtray[4][13];
	int i,j;
	int cardnum = 0;
	
	
	for(i=0;i<4;i++)
		{	
			for(j=0;j<13;j++)
				cardtray[i][j] = cardnum++;
			cardnum = 0;
		}
	
	printf("%d", getCardNum(9));
	return 0;	
}

//----------------------------------------------------------------------------------

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
 //Ace

int getCardNum(int cardnum)
{	
	int A;
	int CardTray[4][13] =
	{	{0,1,2,3,4,5,6,7,8,9,10,11,12},
		{0,1,2,3,4,5,6,7,8,9,10,11,12},
		{0,1,2,3,4,5,6,7,8,9,10,11,12},
		{0,1,2,3,4,5,6,7,8,9,10,11,12}	
	};
	
	cardnum = CardTray[4][13];
	
	int i,value;
	
	for(i=1;i<10;i++)
		{
			if(cardnum = i)
			value = i+1;
		}
	if(cardnum = 0)
		value = A;
	else if(cardnum >= 10)
		value = 10;
		
	return value;
}



//print the card information (e.g. DiaA)
void printCard(int cardnum) 
{
	
	int CardTray[4][13] =
	{	{0,1,2,3,4,5,6,7,8,9,10,11,12},
		{0,1,2,3,4,5,6,7,8,9,10,11,12},
		{0,1,2,3,4,5,6,7,8,9,10,11,12},
		{0,1,2,3,4,5,6,7,8,9,10,11,12}	
	};
	int shape, value;
	char Hrt, Dia, Spd, Clv;
	
	int i;
	
	if(i=1)
		shape = Hrt;
	else if(i=2)
		shape = Dia;
	else if(i=3)
		shape = Spd;
	else if(i=4)
		shape = Clv;
			
	printf("%s%d", shape, value);
}

//mix the card sets and put in the array
int mixCardTray(void) 
{
	
}

//betting
int betDollar(void) 
{
	int i;
	do
	{
		printf(" --> your betting (total: $50) : ");
		scanf("%d",&bet[N_MAX_USER]);
		if(bet[N_MAX_USER]>50)
			printf(" ¡Ú You only have $50! Bet again\n");
	} 
	while(bet[N_MAX_USER]>50);
	
	for(i=1;i<n_user;i++)
	{	
		printf(" --> player%d bets $%d (out of $50)\n", i, rand()%N_MAX_BET);
	}
}

//get one card from the tray
int pullCard(void) 
{
	
}

//offering initial 2 cards
void offerCards(void) 
{
	int i;
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
	}

	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	
	return;
}

//print initial card status
void printCardInitialStatus(void) 
{

}




// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() 
{
	int cardsum;
	
	if(cardsum == 21)
		printf("");
}


int checkResult() {
	
}

int checkWinner() {
	
}





// Game Start!!!!!!!!!!!!!!!!!!
int main(int argc, char *argv[]) 
{
	srand((unsigned)time(NULL));
	
	int i;
	do
	{
		printf("Input the number of players (MAX : 5) : ");
		scanf("%d", &n_user);
		if(n_user>5)
			printf("Too many players!\n");
	}
	while(n_user>5);


	

	printf(" --> card is mixed and put into the tray\n"); 

	
	do {
		printf("\n-------- BETTING STEP --------\n");
		betDollar();
		
		printf("\n-------- CARD OFFERING -------\n");
		getCardNum(2); //1. give cards to all the players
		
		printCardInitialStatus();
		printf("\n------------------ GAME start --------------------------\n");
		
	
	} while (gameEnd == 0);
	
	
	return 0;
}


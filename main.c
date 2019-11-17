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


//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							


//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users


//play yard information
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag

//some utility functions

//get an integer input from standard input (keyboard)
//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) {
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
	int value;
	int i;
	for(i=i;i<10;i++)
		
	if(cardnum = )
		value = 
	
	return value;
}

//print the card information (e.g. DiaA)
void printCard(int cardnum) 
{	
	char shape;
	if(0<=cardnum || 14>=cardnum)
		shape = Hrt;
	else if(13<=cardnum || 25>=cardnum)
		shape = Dia;
	else if(26<=cardnum || 38>=cardnum)
		shape = Spd;
	else if(39<=cardnum || 51>=cardnum)
		shape = Clv;
	
	int value = getCardNum(cardnum);
	
	printf("%s%d", &shape, &value);
}


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) 
{
	srand((unsigned)time(NULL));
	
	int x,i;
	for(i=0;i<52;i++)
		x = rand()%51
		
	//0~51 cardnum 
	
	return CardTray;
}

//get one card from the tray
int pullCard(void) 
{	
	int output;//one card
	
	return output
}


//playing game functions -----------------------------

//player settiing
int configUser(void) 
{
	int i;
	do
	{
		printf("Input the number of players (MAX : 5) : ");
		scanf("%d", &n_user);
		if(n_user>5)
			printf("Too many players!\n");
	}
	while(n_user>5);
	
	return 0;
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
			printf(" �� You only have $50! Bet again\n");
	} 
	while(bet[N_MAX_USER]>50);
	
	for(i=1;i<n_user;i++)
	{	
		printf(" --> player%d bets $%d (out of $50)\n", i, rand()%N_MAX_BET);
	}
	return 0;
}


//offering initial 2 cards
void offerCards(void) {
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
	printf()	
}

int getAction(void) 
{
	
}


void printUserCardStatus(int user, int cardcnt) 
{
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
}




// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {
	
}

int checkResult() {
	
}

int checkWinner() {
	
}



int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int max_user;
	int i;
	
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();


	//Game initialization --------
	//1. players' dollar
	
	//2. card tray
	mixCardTray();



	//Game start --------
	do {
		
		betDollar();
		offerCards(); //1. give cards to all the players
		
		printCardInitialStatus();
		printf("\n------------------ GAME start --------------------------\n");
		
		//each player's turn
		for () //each player
		{
			while () //do until the player dies or player says stop
			{
				//print current card status printUserCardStatus();
				//check the card status ::: calcStepResult()
				//GO? STOP? ::: getAction()
				//check if the turn ends or not
			}
		}
		
		//result
		checkResult();
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}

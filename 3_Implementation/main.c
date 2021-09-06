#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"jewel.h"
#include "test_jewel.h"

/*
	INSTRUCTIONS
		1. Use key 'a' to move left
		2. Use key 's' to move right
		3. Use key 'w' to move up
		4. Use key 'z' to move down
		5. Press 'q' To Quit The Game Any Time
*/

//Function Declaration. U must declare all the function


int main(){
	int x=0,y=0; // for user position
	char ch;     // to store the key Pressed
	int positionX[4]={0}; // Jwel X Position
	int positionY[4]={0}; // Jwel Y Position
	int randomNum,i=0;
	int gameOver=0,noOfMoves=0,gameQuit=0;
	int b=4;
	printf("Person 'P' have to collect all the jewels 'a','b','c','d' with in the boundary\nThese are the instructions to move 'P' using keyboard\n");
    printf("press A to move left\n");
	printf("press S to move right\n");
	printf("press W to move up\n");
	printf("press Z to move down\n");
	printf("press Q to to quit the game\n");
	srand(time(0)); // if we don't use srand() then every time we compile and run the program
					// we will be getting same coordinate fro jwels hence it is must to use srand function
					// You can just comment the srand and check the output to be more clear about it

	// Storing the random X Position For JWEL
	while(i<4){
		randomNum=rand()%50;
		positionX[i]=randomNum;
		i++;
	}
	// Storing the random Y Position For JWEL
	i=0;
	while(i<4){
		randomNum=rand()%10;
		positionY[i]=randomNum;
		i++;
	}

	drawBoundary(x,y,positionX,positionY,&gameOver); // Function Call

	while(1){
		if(kbhit()){
			ch=getch();
			system("cls");
			changeUserLocationOnButtonClick(&x,&y,ch,&noOfMoves,&gameQuit);
			if(gameQuit==0){ // if gameQuit is 1 means user has pressed 'q' key
				drawBoundary(x,y,positionX,positionY,&gameOver);
				if(gameOver==4){ // if gameOver value becomes 4 means we have collected all the jwels
					system("cls");
					printf("\n[][][] Well Done [][][]\n");
					printf("\nYou Collected All The Jwels!\n");
					printf("\nIt Took You %d Moves!\n",noOfMoves);
					printf("\n[][][][] Game Over [][][][]\n");
					break; // it will break infinite loop as we have won the game
				}
			}
			else{
				system("cls");
				printf("\nOh No! You Quit!!\n");
				printf("\nYou Collected %d Jwels!\n",gameOver); // gameOver will give the number of jwel collected.
				printf("\nAfter %d Moves You Quit!\n",noOfMoves); // gives number of moves so for.
				printf("\n[][][][] Game Over [][][][]\n");
				break;	//breaking the infinite loop
			}
		}
	}
	success(b);
	test_main();
	getch();
	return(0);
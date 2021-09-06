#include<stdio.h>
#include<stdlib.h>
#include "jewel.h"
/*void drawBoundary(int,int,int*,int*,int*);
void changeUserLocationOnButtonClick(int *,int *,char,int*,int*);
int success(int A);*/
void drawBoundary(int x,int y,int *posX,int *posY,int *gameOver){ // Passing User Coordinate And JWEL Coordinate
	// Here I will be drawing the boundary using # character.
	// I am not using graphics so i will not color the background.
	int i,j,k;
	for(i=-1;i<=10;i++){
		for(j=-1;j<=50;j++){
			if(i==-1 || i==10 || j==-1 || j==50){
				printf("#");
			}
			else{
				if(i==y && j==x){
					printf("P");
					for(k=0;k<4;k++){
						if(posX[k]==x && posY[k]==y){
							posX[k]=-1;
							posY[k]=-1;
							(*gameOver)++; // if we are here means we are able to collect the jwels hence incrementing gameOver.
						}
					}
				}
				else{
					if(posX[0]==j && posY[0]==i){
						printf("a");
					}
					else if(posX[1]==j && posY[1]==i){
						printf("b");
					}
					else if(posX[2]==j && posY[2]==i){
						printf("c");
					}
					else if(posX[3]==j && posY[3]==i){
						printf("d");
					}
					else
						printf(" ");
				}
			}
		}
		printf("\n");
	}
}

void changeUserLocationOnButtonClick(int *x,int *y,char keyPressed,int *noOfMoves,int *gameQuit){
	switch(keyPressed){
		case 'w':     // ASCII value of  UP Arrow Key
			if(*y!=0){
				(*noOfMoves)++;
				(*y)--;     // Changing y
			}
			break;
		case 'a':     // ASCII value of  LEFT Arrow Key
			if(*x!=0){
				(*noOfMoves)++;
				(*x)--;  // Changing x
			}
			break;
		case 's':     // ASCII value of  RIGHT Arrow Key
			if(*x!=49){
				(*noOfMoves)++;
				(*x)++;  // Changing x
			}
			break;
		case 'z':     // ASCII value of  DOWN Arrow Key
			if(*y!=9){
				(*noOfMoves)++;
				(*y)++;  // Changing y
			}
			break;
		case 'q':
			*gameQuit=1; // storing 1 to gameQuit variable indicate that user has quit the GAME
			break;
	}
}
int success(int A)
	{
	    if(A == 4)
        {
            return 1;
        }
	}

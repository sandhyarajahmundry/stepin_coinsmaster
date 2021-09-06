#ifndef __drawBoundary__
	#define __drawBoundary__
	/**
	*Draws the boundary arrange the jewels
	*@param[in] x is the x-axis indices
	*@param[in] y is the y-axis indices
	*@return Game Over
	*/

	void drawBoundary(int x,int y,int *posX,int *posY,int *gameOver);

	#endif

/**
	* @file jewel.h
	*/
#ifndef __changeUserLocationOnButtonClick__
	#define __changeUserLocationOnButtonClick__

/**
	*Changes the users loaction by button click
	*@param[in] key 'a' to move left
	*@param[in] key 's' to move right
	*@param[in] Use key 'w' to move up
	*@param[in] Use key 'z' to move down
	*@return number of moves
	*/
	void changeUserLocationOnButtonClick(int *x,int *y,char keyPressed,int *noOfMoves,int *gameQuit);

	#endif

	#ifndef __success__
	#define __success__
     int success(int A);
     #endif // __success__
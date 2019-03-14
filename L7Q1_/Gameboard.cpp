

#include "Gameboard.h"
#include "Point.h"

// constructor - empty() the grid
Gameboard::Gameboard() {
	empty();
}

// return the content at a given point
int Gameboard::getContent(Point pt) const {
	return grid[pt.getX()][pt.getY()];
}

// return the content at an x,y grid loc
int Gameboard::getContent(int x, int y) const {
	return grid[x][y];
}

// set the content at a given point
void Gameboard::setContent(Point pt, int content) {
	grid[pt.getX()][pt.getY()] = content;
}

// set the content at an x,y grid loc
void Gameboard::setContent(int x, int y, int content) {
	grid[x][y] = content;
}	

// set the content for an array of grid locs
void Gameboard::setContent(std::vector<Point> locs, int content) {

}	

// return true if the content at all the locs specified is empty
//   IMPORTANT NOTE: invalid x,y values can be passed to this method.
//   Invalid meaning: outside the bounds of the grid.
//   * Only test valid points (disregard the others - and ensure you
//   don't use them to index into the grid).  Testing invalid points
//   would likely result in an out of bounds error or segmentation fault!
bool Gameboard::areLocsEmpty(std::vector<Point> locs) const {

}

// removes all completed rows from the board
//   use getCompletedRowIndices() and removeRows() 
//   return the # of completed rows removed
int Gameboard::removeCompletedRows() {

}

// fill the board with EMPTY_BLOCK 
//   (iterate through each rowIndex and fillRow() with EMPTY_BLOCK))
void Gameboard::empty() {

}
											
Point Gameboard::getSpawnLoc() const {

}

// print the grid contents to the console (for debugging purposes)
// use setw(2) to space the contents out.
// getter for the spawnLoc for new blocks
void Gameboard::printToConsole() const {

}

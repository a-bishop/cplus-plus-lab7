#include <assert.h>
#include "TestSuite.h"
#include "Gameboard.h"
#include "Point.h"


int main() {
	
	//Gameboard g = Gameboard();
	// test fillRow() & isRowCompleted()

	//g.printToConsole();

	assert(TestSuite::runTestSuite());
}
#include <iomanip>
#include <iostream>
using namespace std;

int multTable[12][12];

int main()
{
	for(int row = 1; row <= 12; row++)
	 {
		for(int col = 1; col <= 12; col++)
		 {
			//multTable[row][col] = row * col;
			cout << setw(4) << row * col; 

		 }
		cout << endl;
	 }

}

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
	This program will take 3 numbers per line from a file and test divisibility
	The first number will be the first divisor, the second number as the second divisor, and	 the third number will be a number to count to

*/

int x, y, n;
int main(int argc, char *argv[])
{
	// first thing to be done is to get the lines from the file 
	ifstream infile;
	string line;
	infile.open(argv[1]);
	// read in each number from line
	while(infile >> x >> y >> n)
		{
			//cout << x << " " << y << " " << n << endl;
			// establish all of the rules
			for(int i = 1; i <= n; i++)
				{
					if(i % x == 0 && i % y == 0)
					 {
					    cout << "FB "; 
					 }
					else if(i % x == 0)
					 {
						cout << "F ";
					 }
					else if(i % y == 0)
					{
						cout << "B ";
					}
					else
					 {
						cout << i << " ";
	
					 }
				}
			cout << "\n";


		}

}



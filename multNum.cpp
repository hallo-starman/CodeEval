#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

/* This program takes two numbers, x and n, and gets the first multiple of n that is greater than x */

long x, n;
string line;

int main(int argc, char *argv[])
{
	// open the file
	ifstream infile;
	infile.open(argv[1]);
    
		// get each line of the file
    while(getline(infile, line))
	  {
		replace(line.begin(), line.end(), ',', ' ');
		//cout << line << endl; 
		istringstream str(line);
		str >> x >> n;
		//cout << "x is " << x << " n is " << n << endl;
		int times = 1;
		while(x > (n * times))
		 {
			times++;
		 }
		cout << n * times << endl;
	  }

}



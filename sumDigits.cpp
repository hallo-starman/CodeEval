#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// This program takes lines of numbers and returns the sum of each digit of the number per line

ifstream infile;
string line;

int main(int argc, char *argv[])
{
	infile.open(argv[1]);
	
	while(getline(infile, line))
	 {
		//cout << line << endl;
		int c = atoi(line.c_str());
		int d;
		//cout << c << endl;
		while(c >= 1)
		 {
			d += c % 10;
			c /= 10;
			// cout << d << endl;			
		 }
		cout << d << endl;
		d = 0;

	 }

}

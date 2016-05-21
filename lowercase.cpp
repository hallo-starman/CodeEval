#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
using namespace std;

// This program takes text input from a file and then returns the lowercase form of it

ifstream infile;
string line;


int main(int argc, char *argv[])
{
	// open file
	infile.open(argv[1]);
	// get line from file
	while(getline(infile, line))
	 {
		//cout << line << endl;
		// cout << line.size() << endl;
		for(int i = 0; i < line.size(); i++)
		 {
			if(line.at(i) >= 65 && line.at(i) <= 90)
			  {	
				int c = line.at(i) + 32;
				char d = c;
				cout << d;
			  }
			else
			  {
				cout << line.at(i);
			  }			
		 }
		cout << endl;
	 }	
	
	// first get each char and then use tolower()
	


}

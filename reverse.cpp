#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
/* This program takes a file and reverses the words of each line */

ifstream infile;
string line;
string line1;
string line2;
vector<string> lines;

int main(int argc, char *argv[])
{	
	// open the file
	infile.open(argv[1]);

	// first, get each line from the file
	while(infile.good())
	 {
		getline(infile, line);
		//cout << line << endl;
		// now separate the words of each line
		// puts all of what is in line in the stringstream
		istringstream iss(line);
		do
			{
				string sub;
				iss >> sub;
				lines.push_back(sub);
				//cout << sub << endl;
			}
	while(iss);	
	for(int i = lines.size() - 1; i >= 0; i--)
	 {
		cout << lines.at(i);
		// makes sure there is no whitespace at the beginning of each print statement
		if(i != lines.size() - 1)
		  {
			cout << " ";
		  }
		
	}
	cout << "\n";
	lines.clear();			
	 }

}

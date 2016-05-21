#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

fstream myFile;
int total = 0;
stringstream str;

// this program will count the sum of all numbers in the file
int main(int argc, char *argv[])
{
  int input = 0;
  // check for enough arguments to take in a file
  if(argc >= 2)
    {
      myFile.open(argv[1], ios::in);
      // while there's data to get
      // get data
      while(myFile >> input)
	{
	  // cout << "input is " << input << endl;
	  total += input;

	}
      cout << total << endl;
      }


      myFile.close();
}

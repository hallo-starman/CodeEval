#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

ifstream infile;
string line, num;
int n, p1, p2;
vector<int> nums;
int main(int argc, char *argv[])
{
	infile.open(argv[1]);	
	while(getline(infile, line))
	 {
		// replace commas with whitespace
		replace(line.begin(), line.end(), ',', ' ');
		//cout << line << endl;
		istringstream iss(line);
		iss >> n >> p1 >> p2;
		//cout << n << " " << p1 << " " << p2 << endl;
		int b;
		string c;
		istringstream str;
		while(n > 0)
		 {
			b = n % 2;
			n /= 2;
			nums.push_back(b);
		 }
		// get the position, p1 and p2 in the vector
		if(nums.at(p1 - 1) == nums.at(p2 - 1))
		  {
			cout << "true" << endl;
		  }
		else
		  {
			cout << "false" << endl;
		  }
		//cout << nums.at(p1 - 1) << endl;
		//cout << nums.at(p2 - 1) << endl;
		nums.clear();
	}



}

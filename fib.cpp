#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// This program will print out F(n), where n is the nth fibonacci number

long fib(long f);

ifstream infile;
string line;

int main(int argc, char *argv[])
{
	infile.open(argv[1]);
	while(getline(infile, line))
	 {
		//cout << line;
		int n = atoi(line.c_str());
		//cout << "n is " <<  n << endl;
		cout << fib(n) << endl;
	 }


}

long fib(long f)
{
	if(f == 0)
	{
		return 0;
	}
	else if(f == 1)
	{
		return 1;
	}
	else
	{
		long result = 0;
		long prev1 = 1;
		long prev2 = 0;
	//	return (fib(f - 1) + fib(f - 2));
		for(int i = 2; i <= f; i++)
		 {
		//	cout << "prev1 is " << prev1 << endl;
		//	cout << "prev2 is " << prev2 << endl;
			result = prev1 + prev2;
			prev2 = prev1;
			prev1 = result;
		//	cout << "i is " << i << endl;
		//	cout << "result is " << result << endl;
		//	cout << result << endl;
		 }
		return result;
	}	

}

#include <iostream>
using namespace std;

/* This program takes the sum of the first 1000 prime numbers */

bool isPrime(int n);
int numPrimes = 0;
int primeSum = 2;

int main()
{
	// go through loop until we reach 1000 prime numbers
	for(int i = 3; i < 10000; i++)
	  {
		if(isPrime(i) && numPrimes < 1000)
		 {
			//cout << i << endl;
			primeSum += i;
			//cout << primeSum << endl;
		 }
	  }
	//cout << numPrimes << endl;	
	cout << primeSum << endl;
}

bool isPrime(int n)
{
	if(n % 2 == 0)
	  {
		return false;
	  }

	for(int i = 3; i < 5000; i+=2)
	  {
		if(n % i == 0 && n != i)
		  {
			return false;
		  }
      }


	numPrimes++;
	return true;

}

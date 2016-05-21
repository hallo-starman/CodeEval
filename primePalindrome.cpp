#include <iostream>
using namespace std;

/*
	This program determines the largest prime palindrome number below 1000
*/

bool isPrime(int num);
bool isPalindrome(int num);
int greatest;
int prime;
int temp = 0;

int main(int argc, char *argv[])
{
	// start at largest palindrome and work down from there
	for(int i = 999; i > 0; i-=2)
	 {
		if(isPrime(i) == true)
		 {
			//cout << i << endl;
			prime = i;
			greatest = prime;
			//cout << prime << endl;
			if(isPalindrome(prime) == true)
			 {
				cout << prime << endl;
				break;
			 }
		 }
		
	 }





}

// test if prime, return true if so
bool isPrime(int num)
{
	for(int i = 3; i <= 999 / 2; i++)
	  {
		if(num % i == 0 && num != i)
		  {
			return false;
		  }
	  }

	return true;
}

bool isPalindrome(int num)
{
	temp = 0;
	greatest = num;
	while(num / 10 > 0)
	  {
		temp += num % 10;
		num /= 10;
		temp *= 10;
	    
	  }
	temp += num;
	//cout << "num is " << temp << endl;
	if(temp == greatest)
	  {
		return true;
	  }
    return false;
}

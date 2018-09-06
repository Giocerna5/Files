#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string bin(int num);
string exponent(string x);

int main()
{
	
	string b, exp, sig;
	int sign, num;
	


	cout << "Enter an integer value: ";
	cin >> num;
	
	if(num <= -256 || num >= 256)
		cout << "Sorry, " << num << " is too large to be stored in our system";
	
	else
	{
		if(num > 0)
			sign = 0;
		else
			sign = 1;
	
		b = bin(num);
		exp = exponent(b);
		sig = b;
	
		while(sig.size() != 8)
			sig += '0';
		
		cout << "Here is how " <<  num << " is stored as floating-point in memory: "
			<< "\n------------------------"
			<< "\n| " << sign << " | " << exp << " | " << sig
			<< "\n----------------------- ";
	}
		
return 0;
}

string bin(int num)
{
	string word, temp;
	int x = num; 

	if(num < 0)
		 x *= -1;

		while(x != 0)
		{
			word += to_string(x%2);
			x /= 2;
		}
		reverse(word.begin(), word.end());
	
	if(num < 0)		
		word[0] = '1';


	return word;	
}

string exponent(string x)
{
	int  num;
	string temp;
	num = x.size();
	
	num +=15;
	temp = bin(num);


	return temp;
}

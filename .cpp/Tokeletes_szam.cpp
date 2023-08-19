using namespace std;
#include <iostream>
#include <vector>

int main(){
	
	for (int i = 0; i < 1000; i++)
	{
		vector <int> divisors = {};

		for (int j = 0; j < i; j++)
		{
			cout << i%j;
		}
		for (size_t j = 0; j < divisors.size(); j++)
		{
			cout << divisors[j] << endl;
		}

		cout << endl;
		
		
	}
	
		

	
	return 0;
}
#include <iostream>

int main()
{
	using namespace std;

	int x;

	for (x = 1; x < 21;++x){
		

		if (x % 3 == 0){
			cout << "Fizz" << endl;
		}
		else if (x%5==0){
			cout << "Buzz" << endl;
		}
		else if (x % 3 == 0 && x % 5 == 0){
			cout << "FizzBuzz" << endl;
		}
		else{
			cout << x << endl;
		}
	}


}
#include <iostream>

int main()
{
	using namespace std;

	int x;

	for (x = 0; x < 51; x++){
		cout << x << endl;

		if (x % 3 == 0){
			cout << "Fizz" << endl;
		}
		else if (x%5==0){
			cout << "Buzz" << endl;
		}
		else if (x % 7 == 0){
			cout << "woof" << endl;
		}
		else if (x % 3 == 0 && x % 5 == 0){
			cout << "FizzBuzz" << endl;
		}
		else if (x%3==0 && x%7==0){
			cout << "FizzWoof" << endl;
		}
		else if (x % 5 == 0 && x % 7 == 0){
			cout << "BuzzWoof" << endl;
		}
		else{
			cout << x << endl;
		}
	}

	return 0;
}
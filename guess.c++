#include<iostream>
using std::cout;
using std::cin;

#include<ctime>
using std::time;

#include<cstdlib>
using std::rand;
using std::srand;


int main() {
	int guess;
	int num;
	bool win = false;
	bool error;

	srand(time(NULL));

	num = (rand() % 100) + 1;

    while(!win) {
	do {
		error = false;
		cout << "Please give a number." << "\n";
		cin >> guess;

		if(cin.fail()) {
			cout << "Please give a real number." << "\n";
			error = true;
			cin.clear();
			cin.ignore(80, '\n');
		}
	} while(error);

        if(guess < num) {
            cout << "Guess Higher." << "\n";
        } else if(guess > num) {
            cout << "Guess Lower." << "\n";
        } else if(guess == num) {
            cout << "You Win!" << "\n";
            win = true;
        };
    };
	return 0;
}

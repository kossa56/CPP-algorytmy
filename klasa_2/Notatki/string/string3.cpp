#include <iostream>
using namespace std;

int main() {
	string imie;
	cin >> imie;
	
	//sprawdzenie plci osoby o podanym imieniu
	if( imie[imie.size() - 1] == 'a'){
		cout << "Jestes dziewcznka";
	}
	else {
		cout << "Jestes chlopcem";
	}
	return 0;
}


#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	//wypisanie pierwszej litery
	cout << s[0] << endl;
	
	//wypisanie drugiej litery
	cout << s[1] << endl;
	
	//wypisanie ostatniej litery
	cout << s[ s.size()-1 ] << endl;
	
	//wypisanie literek jedna pod druga
	for(int i = 0; i < s.size();i++){
		cout << s[i] << endl;
	}
	
	//wypisanie napisu wspak
	for(int i = s.size()-1; i>=0; i--){
		cout << s[i] << endl;
	}
	
	
	return 0;
}


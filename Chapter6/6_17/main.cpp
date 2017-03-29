#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool hasLower(const string &s){								//Use const string &s,because I don't want to change any value in string
	for (const char &c : s)
		if (islower(c))
			return true;
	return false;
}

void convertToLower(string &s){								//Use string &s,because I need change upper letter to lower letter
	for (char &c : s)
		if (isupper(c))
			c = tolower(c);
}

int main(){
	string s = "Weiyanyu";
	if (hasLower(s))
		cout << "has lower" << endl;
	else
		cout << "does not exist lower letter" << endl;

	cout << "Before Convert : " << '\n' << s << endl;
	convertToLower(s);
	cout << "After Convert : " << '\n' << s << endl;


	return 0;
}

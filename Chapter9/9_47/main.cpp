#include <iostream>
#include <string>

using namespace std;


int main(){
	string s = "ab2c3d7R4E6";
	string number = "0123456789";
	string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string::size_type pos = 0;
	while ((pos = s.find_first_of(number,pos)) != string::npos){
		cout << "Found number at indx: " << pos
			 << " element is " << s[pos] << endl;
		++pos;
	}
	pos = 0;
	while ((pos = s.find_first_of(alpha,pos)) != string::npos){
		cout << "Found alpha at index: " << pos
			 << " element is " << s[pos] << endl;
		++pos;
	}


	//another way just  s.find_first_of(number,pos) repalce s.find_first_not_of(alpha,pos) inorder to find number
	//In the similar way to find alpha   

	return 0;
}

#include<iostream>

using namespace std;

int main(){
	cout << "/*"; 		//no error
	cout << "*/";		//no error
	cout << /* "*/" */; " //have error
	return 0;
}

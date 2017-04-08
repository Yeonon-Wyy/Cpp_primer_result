#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
	vector<int> vi = {1,2,3,4,5};
	list<int> li = {1,2,3,4,5};



	vector<int> temp(li.begin(),li.end());						
	if (vi == temp)
		cout << "They are equal !" << endl;
	else
		cout << "They are not equal !" << endl;
	
	cout << "second way : \n";



	return 0;
}

#include<iostream>

using namespace std;
int main(){
	cout << "Plese enter two number (wihtespace splic) : ";
	int num_1 = 0,num_2 = 0;
	cin >> num_1 >> num_2;
	int i = num_1 + 1;
	cout << "These are res: " << endl;
	while (i < num_2){
		cout << i << " ";
		i++;
	}
	cout << endl;
	return 0;
}

// It can also use for loop
// It will be like this:
// for (int i = num_1 + 1;i < num_2;i++)
// loop body are the name as while

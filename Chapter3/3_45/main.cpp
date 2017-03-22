#include <iostream>


using std::cout;
using std::cin;
using std::endl;			//maybe it will be better


int main(){

	int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	using int_array = int[4];
	cout << "First version : " << endl;
	for (auto &row : ia){
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}

	cout << "Second version : " << endl;
	for (size_t i = 0; i < 3;i++){
		for (size_t j = 0;j < 4;j++)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	cout << "Third version : " << endl;
	for (auto row = ia; row != ia + 3;row++){				// if use auto ,it seem to be so easy! (Ps:sometime,decltype not better auto )
		for (auto col = *row; col != *row + 4;col++)
			cout << *col << " ";
		cout << endl;
	}
	return 0;
}

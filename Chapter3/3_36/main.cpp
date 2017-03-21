#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

bool complear(int *const pb1,int *const pe1,int *const pb2,int *const pe2){
	if ((pe1 - pb1) != (pe2 - pb2)) return false;
	else{
		for (int *i = pb1,*j = pb2;(i != pe1) && (j != pe2);i++,j++){
			if (*i != *j) return false;
		}
	}	
	return true;
}
int main(){
	int arr1[] = {1,2,3};
	int arr2[] = {1,2,4};
	if (complear(begin(arr1),end(arr1),begin(arr2),end(arr2)))
		cout << "array the same!" << endl;
	else
		cout << "array No same!" << endl;

	vector<int> vi_1 = {1,2,3};
	vector<int> vi_2 = {1,5,3};
	
	if (vi_1 == vi_2)
		cout << "vector the same!" << endl;
	else
		cout << "vector No same1" << endl;

}

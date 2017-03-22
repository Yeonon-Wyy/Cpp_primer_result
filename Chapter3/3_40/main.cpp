#include <iostream>
#include <cstring>

using namespace std;

int main(){

	char cs_1[50] = "Weiyanyu";
	const char cs_2[] = "is a boy!";
	char cs_cat[50];
	strcat(cs_1,cs_2);
	strcpy(cs_cat,cs_1);
	int l = strlen(cs_cat);
	for (int i = 0; i < l;i++){
		cout << cs_cat[i] << " ";
	}	
	cout << endl;
	return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	const char cs_1[] = "Weiyanyu";
	const char cs_2[] = "weiyanyu";
	if (strcmp(cs_1,cs_2) == 0)
		cout << "The two string are equal!" << endl;
	else if (strcmp(cs_1,cs_2) > 0)
		cout << "cs_1 more than cs_2 " << endl;
	else
		cout << "cs_1 less than cs_2 " << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
	string str = "",temp,maxCntWord;
	unsigned maxCnt = 0,tempCnt = 0;
	
	while (cin >> str){
		if (str == temp)
			tempCnt++;
		else{
			temp = str;
			tempCnt = 1;
		}
		if (maxCnt < tempCnt){
			maxCnt = tempCnt;
			maxCntWord = temp;
		}

	}
	if (maxCnt == 1) cout << "inexistence" << endl;
	else
		cout << "max count word is : " << maxCntWord << "\n"
			 << "max count is : " << maxCnt << endl;
	return 0;
}

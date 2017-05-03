#include "HasPtr.h"
#include <vector>
#include <algorithm>

int main(){
	std::vector<HasPtr> hps = { {"weiyanyu"},
								{"Yeonon"},
								{"yanyuwei"},
								{"Hello"} 
							  };

	sort(hps.begin(),hps.end());
	for (auto hp : hps)
		hp.show();		
	return 0;
}
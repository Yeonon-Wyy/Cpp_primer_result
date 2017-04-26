#include <iostream>
#include <memory>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(){
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef std::unique_ptr<int> IntP;

	/*compile error,in clang++ give no matching constructor for initialiation */

	//IntP p0(ix);


	/*can compile ,but have huge error in runtime ,the reason is when unique_prt out of
	the block ,will release memory (use delete(defalut)),but we known ,the pi local on 
	stack no on heap(no use new keyword)*/

	//IntP p1(pi);

	/*can comile,but maybe dangerous,because if the unique_ptr out of block,will use delete
	to release memory,so pi2 will become a dangling pointer,if you must use like it,remember
	make pi2 = nullptr */

	//IntP p2(pi2);

	/*the same as IntP pi(pi),but a little different*/

	//IntP p3(&ix);

	/*good ways !*/

	//IntP p4(new int(2048));

	/*if p2 is a good unique_ptr,no comile error,but will cause error in runtime.
	The reason is have two pointer point to same object(memory),will double free memory*/

	//IntP p5(p2.get());


	return 0;
}
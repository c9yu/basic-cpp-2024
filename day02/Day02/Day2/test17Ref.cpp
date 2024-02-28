// date : 20240222
// file : test17Ref.cpp
// desc : RefReturnOne

/*
#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main() {

	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);

	num1++;
	num2++;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}
*/

// date : 20240222
// file : test17Ref.cpp
// desc : RefReturnOne

/*
#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref) {
	ref++;
	return ref;
}

int main() {

	int num1 = 1;
	int num2 = RefRetFuncOne(num1); // num2가 참조가 아니다. num2 = 2
	                                
	num1 += 1; // 3 
	num2 += 100; // 102
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}
*/
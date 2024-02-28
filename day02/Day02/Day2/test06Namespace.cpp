// date : 20240222
// file : test06Namespace.cpp
// desc : 이름 공간

/*
#include <iostream>

using namespace std;

namespace BestComImpl
{
	void SimpleFunc(void);      // 그 이름공간 안에 SimpleFunc 이라는 함수 선언
}

namespace ProgComImpl
{
	void SimpleFunc(void);      // 그 이름공간 안에 SimpleFunc 이라는 함수 선언
}

int main(void)
{
	BestComImpl::SimpleFunc();      // 각각의 이름공간의 함수들을 호출
	ProgComImpl::SimpleFunc();      // 호출하려면 이름공간을 붙여줘야한다
	return 0;
}

void BestComImpl::SimpleFunc(void)      // 함수 정의시 이름공간을 붙여줘야 한다
{
	cout << "BestCom이 정의한 함수" << endl;      // 호출
}

void ProgComImpl::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;      // 호출
}
*/
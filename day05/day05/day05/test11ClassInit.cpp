// date : 20240227
// desc : 복사생성자

/*
#include <iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	int num2;

public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{
		//empty
	}
	SoSimple(SoSimple& copy) // 복사 생성자, 객체를 복사할 때 자동으로 호출된다
		:num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);                             // 15, 30이 대입된다.
	cout << "생성 및 초기화 직전" << endl;             // 출력
	SoSimple sim2 = sim1;                              // 새로운 객체 sim2를 생성하는데 sim1을 복사한다. -> 복사 생성자의 문장(21행) 출력
	cout << "생성 및 초기화 직후" << endl;             // 출력
	sim2.ShowSimpleData();                             // 복사된 sim2의 값 15, 30이 각각 num1, num2에 저장되어 있다가 출력
	return 0;
}
*/
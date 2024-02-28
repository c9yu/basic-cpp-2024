/*

// date : 20240227
// desc : PointerThis p198

#include <iostream>
#include <cstring>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int num) // : num(n) // num(n) 은 이니셜라이즈, 생략하고 다음과 같이 변형
	{
		this->num = num; // 이 num이 객체인지 필드에 있는 것인지 무엇인지 구분하기 위해 객체 자기 자신을 가리키는 this ->를 사용한다.
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;
	}
};

int main(void) // sim1, sim2 2개의 객체를 생성
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}

*/
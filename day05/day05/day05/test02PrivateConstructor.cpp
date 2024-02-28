// date : 20240227
// desc : PrivateConstructor

/*
#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public: 
	AAA() : num(0){}
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}

	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {} 
	// 객체를 여러번 생성 못하고 한번밖에 생성 못함
};
int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12); //obj1과 obj2는 다른 객체이다.
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
	return 0;

}

//싱글톤 패턴은 객체 생성을 단 하나만 할 때 사용한다.
*/
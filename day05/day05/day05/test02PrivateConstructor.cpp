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
	// ��ü�� ������ ���� ���ϰ� �ѹ��ۿ� ���� ����
};
int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12); //obj1�� obj2�� �ٸ� ��ü�̴�.
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
	return 0;

}

//�̱��� ������ ��ü ������ �� �ϳ��� �� �� ����Ѵ�.
*/
// date : 20240228
// desc : ReturnCopycon

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public: 
	SoSimple(int n): num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "called SoSimple (const SoSimple& copy" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;	
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFunObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;
}


int main(void) {

	SoSimple obj(7);
	//SoSimple re = SimpleFunObj(obj);             // ������� ��ü�� �����Ͽ� ����ϴ� ���� ������
	SimpleFunObj(obj).AddNum(30).ShowData();       // �ٷ� SimpleFunObj(obj)�� ����߱⿡ �ӽð�ü�� �����ǰ�, AddNum���� �Ѿ�� �����Ǿ��� �ӽð�ü�� �������
	obj.ShowData();

	return 0;
}
*/
// date : 20240227
// desc : ��������� ���� ����

/*
��ǻ�Ͱ� �⺻������ �����ϴ� ������:

����Ʈ ������, ���� ������
*/


#include <iostream>

using namespace std;

class AA {
	int a;
	int b;

public: 
	AA(int a, int b) {
		this->a = a;
		this->b = b;
	}


	AA(const AA& r) {           // ���� ������
		this->a = r.a;          // 26��, 27���� ������ ����� ���� ������ �߻��Ѵ�.
		this->b = r.b;
	}
	void AAinfo(){
		cout << a << " " << b << endl;
	}
	
	
};

int main(void) {

	AA obj1(10, 20);
	obj1.AAinfo();

	AA obj2(obj1);
	obj2.AAinfo();


	return 0;
}
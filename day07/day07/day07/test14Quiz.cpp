#include <iostream>
#include <cstring>

using namespace std;

class Myclass {

private:
	char name[30];
	int age;

public:
	Myclass(const char* anmae, int aage) : name(aname), age(aage)
	{}
	const char* aname() {
		return name;
	}
	int aage() {
		return age;
	}

};

class MyInfo : public Myclass {
private:
	char pNumber[20];

public:
	MyInfo(const char* bname, int bage, const char * bpNumber)   //
		: Myclass(bname, bage)
	{}

	void printMyInfo() {
//		"���� �̸��� XXX�̰�, ���̴� XX ���̸� ��ȭ��ȣ�� XXX�Դϴ�."
		cout << "���� �̸��� " << aname << "�̰�, " << "���̴� " << aage << " ���̸� ��ȭ��ȣ�� " << pNumber << "�Դϴ�." << endl;
	
	}
};


int main(void) {
	MyInfo Itsme("������", 26, "010-3733-1657");



	return 0;
}
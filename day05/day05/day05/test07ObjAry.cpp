// date : 20240227
// desc : ObjAry


/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Human {
private:
	char name[30]; // 2���� �Է°��� �޴´�.
	int age;

public:
	Human(const char* pname, int page) {        // ������
		cout << "������ ȣ��" << endl;
		strcpy(name, pname);
		this->age = page;

	}
	void HumanInfo() {                          // ���
		cout << "�̸�: " << name << " ";
		cout << "����: " << age << endl;
	}
	
	~Human() {                                  // �Ҹ���
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main(void) {

	Human h[3] = { Human("ȫ�浿", 50), Human("��ö��", 40), Human("�迵��", 30) }; // ��ü �迭

	for (int i = 0; i < 3; i++) { // i�� 0~2���� 1�� ����
		h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 50); // new�� ���� �߰�
	h1->HumanInfo(); // h1�� �ּ������̹Ƿ� '->' �� ����Ͽ� �����ؾ� �Ѵ�.
	//h1.HumanInfo;  // '. ' �� ���� ������ �߻�

	delete h1; // �����Ҵ� ����

	return 0;
}
*/
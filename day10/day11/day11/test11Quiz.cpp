/*
#include <iostream>
#include <cstring>

using namespace std;

class Grade {
	char* name;
	int ko;
	int eng;
	int math;

public:
	Grade(const char* name, int ko, int eng, int math)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->ko = ko;
		this->eng = eng;
		this->math = math;

	}
	~Grade() {
		printf("�Ҹ��� ȣ��\n");
		delete[] name;
	}

	int getKo() {
		return ko;
	}

	int getEng() {
		return eng;

	}

	int getMath() {
		return math;

	}

	int sum() {
		int sum = ko + eng + math;
		return sum;
	}
	

	double avr() {
		double avr = sum() / 3.0;
		return avr;
	}
};


int main(void)
{
	// �Է��� �޴´�.
	Grade* gradeAry[3];  // ��ü ������ �迭
	char name[20];
	int inKo;
	int inEng;
	int inMath;

	// �ϳ��� �Է��� �޴´� -> 5ȸ
for (int i = 0; i < 3; i++){

	cout << "�̸�: ";
	cin >> name;
	cout << "���� ����: ";
	cin >> inKo;
	cout << "���� ����: ";
	cin >> inEng;
	cout << "���� ����: ";
	cin >> inMath;

	// cout << name << inKo << inEng << inMath << endl;
	// ��ü ���� : 5���� ��ü�� ����(2) ��ü �迭 or ��ü ������ �迭
	gradeAry[i] = new Grade(name, inKo, inEng, inMath);
}

for (int i = 0; i < 3; i++) {
	//cout << "����: " << gradeAry[i]->sum() << "��, ����: " << gradeAry[i]->avr()<<"��" << endl;
	printf("%d��° �л� ����: %d, ����: %f\n",i+1, gradeAry[i]->sum(), gradeAry[i]->avr());
}

for (int i = 0; i < 3; i++) {
	//cout << "���� ���� : " <<  << endl;
	//cout << "���� ���� : " << << endl;

	printf("��ü �л� ���� ���� : %d, ����: %f\n", gradeAry[0]->getKo() + gradeAry[1]->getKo() + gradeAry[2]->getKo(), (gradeAry[0]->getKo() + gradeAry[1]->getKo() + gradeAry[2]->getKo()) / 3);
}

cout << "���� ���� : " << gradeAry[0]->getEng() + gradeAry[1]->getEng() + gradeAry[2]->getEng() << endl;
cout << "���� ���� : " << (gradeAry[0]->getEng() + gradeAry[1]->getEng() + gradeAry[2]->getEng()) / 3 << endl;

cout << "���� ���� : " << (gradeAry[0]->getMath() + gradeAry[1]->getMath() + gradeAry[2]->getMath())/3 << endl;
cout << "���� ���� : " << gradeAry[0]->getMath() + gradeAry[1]->getMath() + gradeAry[2]->getMath() << endl;

*/
/*
for (int i = 0; i < 3; i++) {
	//printf("��� �л��� ���� ����: %d, ����: %f\n", gradeAry[i]->);
}
*/

/*
for (int i = 0; i < 3; i++) {
	printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
	delete gradeAry[i];
}
	return 0;
}
*/
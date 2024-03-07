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
		printf("소멸자 호출\n");
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
	// 입력을 받는다.
	Grade* gradeAry[3];  // 객체 포인터 배열
	char name[20];
	int inKo;
	int inEng;
	int inMath;

	// 하나만 입력을 받는다 -> 5회
for (int i = 0; i < 3; i++){

	cout << "이름: ";
	cin >> name;
	cout << "국어 점수: ";
	cin >> inKo;
	cout << "영어 점수: ";
	cin >> inEng;
	cout << "수학 점수: ";
	cin >> inMath;

	// cout << name << inKo << inEng << inMath << endl;
	// 객체 생성 : 5개의 객체를 생성(2) 객체 배열 or 객체 포인터 배열
	gradeAry[i] = new Grade(name, inKo, inEng, inMath);
}

for (int i = 0; i < 3; i++) {
	//cout << "총점: " << gradeAry[i]->sum() << "점, 평점: " << gradeAry[i]->avr()<<"점" << endl;
	printf("%d번째 학생 총점: %d, 평점: %f\n",i+1, gradeAry[i]->sum(), gradeAry[i]->avr());
}

for (int i = 0; i < 3; i++) {
	//cout << "국어 총점 : " <<  << endl;
	//cout << "국어 평점 : " << << endl;

	printf("전체 학생 국어 총점 : %d, 평점: %f\n", gradeAry[0]->getKo() + gradeAry[1]->getKo() + gradeAry[2]->getKo(), (gradeAry[0]->getKo() + gradeAry[1]->getKo() + gradeAry[2]->getKo()) / 3);
}

cout << "영어 총점 : " << gradeAry[0]->getEng() + gradeAry[1]->getEng() + gradeAry[2]->getEng() << endl;
cout << "영어 평점 : " << (gradeAry[0]->getEng() + gradeAry[1]->getEng() + gradeAry[2]->getEng()) / 3 << endl;

cout << "수학 평점 : " << (gradeAry[0]->getMath() + gradeAry[1]->getMath() + gradeAry[2]->getMath())/3 << endl;
cout << "수학 총점 : " << gradeAry[0]->getMath() + gradeAry[1]->getMath() + gradeAry[2]->getMath() << endl;

*/
/*
for (int i = 0; i < 3; i++) {
	//printf("모든 학생의 국어 총점: %d, 평점: %f\n", gradeAry[i]->);
}
*/

/*
for (int i = 0; i < 3; i++) {
	printf("객체 할당 소멸자 호출\n");
	delete gradeAry[i];
}
	return 0;
}
*/
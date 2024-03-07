/*
#include <iostream>
#include <cstring>
using namespace std;

class Grade {
private:
    char* name;
    int kor;
    int math;
    int eng;
    int total;
    double average;

public:
    // ������: �л��� �̸��� �� ������ ������ �޾� �ʱ�ȭ
    Grade(const char* name, int kor, int math, int eng) {
        // �̸� ����
        size_t len = strlen(name) + 1;
        this->name = new char[len];
        strcpy_s(this->name, len, name);


        this->kor = kor;
        this->math = math;
        this->eng = eng;

        // ������ ��� ���
        Total();
        Average();
    }

    // �Ҹ���: �������� �Ҵ�� �޸� ����
    ~Grade() {
        delete[] name;
    }

    // ���� ��� �Լ�
    void Total() {
        total = kor + math + eng;
    }

    // ��� ��� �Լ�
    void Average() {
        average = total / 3.0;
    }

    // �̸� ��ȯ �Լ�
    const char* getName() const {
        return name;
    }

    // ���� ���� ��ȯ �Լ�
    int getKor() const {
        return kor;
    }

    // ���� ���� ��ȯ �Լ�
    int getMath() const {
        return math;
    }

    // ���� ���� ��ȯ �Լ�
    int getEng() const {
        return eng;
    }

    // ���� ��ȯ �Լ�
    int getTotal() const {
        return total;
    }

    // ��� ��ȯ �Լ�
    double getAverage() const {
        return average;
    }
};

int main() {
    const int STUDENTS = 5;
    Grade* gradeAry[STUDENTS];    // �л� ��ü�� ������ �迭


    for (int i = 0; i < STUDENTS; i++) {
        char name[20];
        int inko, inEng, inmath;

        cout << "�̸�: ";
        cin >> name;
        cout << "����: ";
        cin >> inko;
        cout << "����: ";
        cin >> inmath;
        cout << "����: ";
        cin >> inEng;
        cout << endl;


        gradeAry[i] = new Grade(name, inko, inmath, inEng);
    }

    for (int i = 0; i < STUDENTS; i++) {
        cout << "�̸�: " << gradeAry[i]->getName() << endl;
        cout << "����: " << gradeAry[i]->getKor() << ", ����: " << gradeAry[i]->getMath() << ", ����: " << gradeAry[i]->getEng() << endl;
        cout << "����: " << gradeAry[i]->getTotal() << ", ���: " << gradeAry[i]->getAverage() << endl;  // �� ������ ��� ���
        cout << endl;
    }

    for (int i = 0; i < STUDENTS; i++) {
        delete gradeAry[i];
    }

    return 0;
}
*/
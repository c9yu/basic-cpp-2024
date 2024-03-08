#include <iostream>
#include <cstring>
#include <vector>
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
    Grade* gradeAry[3];          // ��ü ������ �迭
    //Grade gradeAry[100];           // ��ü �迭

    char name[20] = {};
    int inKo = 0;
    int inEng = 0;
    int inMath = 0;
    int num;

    cout << "����ó�� �л���: " << endl;
    cin >> num;

    // vector<Grade*> gradeAry(num);
    // vector<Grade> gradeAry(num);


    // 1. �ϳ��� �Է��� �޴´� -> 5ȸ �Է�
    for (int i = 0; i < num; i++) {

        cout << "�̸�: ";
        cin >> name;
        cout << "���� ����: ";
        cin >> inKo;
        cout << "���� ����: ";
        cin >> inEng;
        cout << "���� ����: ";
        cin >> inMath;

        // cout << name << inKo << inEng << inMath << endl;
        // 2. ��ü ���� : 5���� ��ü�� ����(2) ��ü �迭 or ��ü ������ �迭
        gradeAry[i] = new Grade(name, inKo, inEng, inMath);
    }

    for (int i = 0; i < num; i++) {
        //cout << "����: " << gradeAry[i]->sum() << "��, ����: " << gradeAry[i]->avr()<<"��" << endl;
        printf("i��° �л� ����: %d, ����: %f\n", gradeAry[i]->sum(), gradeAry[i]->avr());
    }




    for (int i = 0; i < num; i++) {
        printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
        delete gradeAry[i];
    }
    return 0;
}
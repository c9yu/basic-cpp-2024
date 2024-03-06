#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Grade {
private:
    char name[50]; // �̸��� ������ �迭 �߰�
    int kr;
    int math;
    int english;

public:
    Grade() : kr(0), math(0), english(0) {
        // �����ڿ��� �ʱ�ȭ
        name[0] = '\0';
    }

    // ����ڷκ��� �̸��� ������ �Է¹޴� ��� �Լ� �߰�
    void input() {
        cout << "�̸��� �Է��ϼ���: ";
        cin.getline(name, sizeof(name));
        cout << "���� ������ �Է��ϼ���: ";
        cin >> kr;
        cout << "���� ������ �Է��ϼ���: ";
        cin >> math;
        cout << "���� ������ �Է��ϼ���: ";
        cin >> english;
        cin.ignore(); // ���� ����
    }

    Grade operator+(const Grade& pos) const {
        return Grade(kr + pos.kr, math + pos.math, english + pos.english);
    }

    friend ostream& operator<<(ostream& os, const Grade& pos) {
        os << "�̸�: " << pos.name << ", ����: " << pos.kr << ", ����: " << pos.math << ", ����: " << pos.english;
        return os;
    }

    int getKr() const { return kr; }
    int getMath() const { return math; }
    int getEnglish() const { return english; }
};

class Add {
public:
    int operator()(const Grade& grade) {
        return grade.getKr() + grade.getMath() + grade.getEnglish();
    }
};

class Average {
public:
    double operator()(const Grade& grade) {
        return (grade.getKr() + grade.getMath() + grade.getEnglish()) / 3.0;
    }
};

int main(void) {
    vector<Grade> grades;

    // 5���� ������ �Է¹���
    for (int i = 0; i < 5; ++i) {
        Grade grade;
        grade.input();
        grades.push_back(grade);
    }

    // ������ ��� ���
    Add add;
    Average average;

    for (const Grade& grade : grades) {
        cout << grade << endl;
        cout << "����: " << add(grade) << "��" << endl;
        cout << "���: " << average(grade) << "��" << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}
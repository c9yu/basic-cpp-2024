#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Grade {
private:
    char name[50]; // 이름을 저장할 배열 추가
    int kr;
    int math;
    int english;

public:
    Grade() : kr(0), math(0), english(0) {
        // 생성자에서 초기화
        name[0] = '\0';
    }

    // 사용자로부터 이름과 점수를 입력받는 멤버 함수 추가
    void input() {
        cout << "이름을 입력하세요: ";
        cin.getline(name, sizeof(name));
        cout << "국어 점수를 입력하세요: ";
        cin >> kr;
        cout << "수학 점수를 입력하세요: ";
        cin >> math;
        cout << "영어 점수를 입력하세요: ";
        cin >> english;
        cin.ignore(); // 버퍼 비우기
    }

    Grade operator+(const Grade& pos) const {
        return Grade(kr + pos.kr, math + pos.math, english + pos.english);
    }

    friend ostream& operator<<(ostream& os, const Grade& pos) {
        os << "이름: " << pos.name << ", 국어: " << pos.kr << ", 수학: " << pos.math << ", 영어: " << pos.english;
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

    // 5명의 정보를 입력받음
    for (int i = 0; i < 5; ++i) {
        Grade grade;
        grade.input();
        grades.push_back(grade);
    }

    // 총점과 평균 출력
    Add add;
    Average average;

    for (const Grade& grade : grades) {
        cout << grade << endl;
        cout << "총점: " << add(grade) << "점" << endl;
        cout << "평균: " << average(grade) << "점" << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}
/*
#include <iostream>
#include <cstring>
using namespace std;

class Grade {
private:
    char* name;
    int kr;
    int math;
    int english;

public:
    Grade(int 국어, int 수학, int 영어) : kr(국어), math(수학), english(영어)
    {}
    Grade operator+(const Grade & pos) const
    {
        return Grade(kr + pos.kr, kr + pos.math, math + pos.english);
    }
    friend ostream& operator<<(ostream& os, const Grade& pos);

    void rename(const char * arename) {
        
        strcpy(name, arename);
        cout << "이름: " << name << endl;

        return name;
    }
};

ostream& operator<<(ostream& os, const Grade& pos)
{
    os << '[' << pos.kr << ", " << pos.math << ", "<< pos.english << ']' << endl;
    return os;
}

class Add
{
public:
    int operator()(const int& n1, const int& n2, const int& n3)
    {
        return n1 + n2 + n3;
    }
};

class Average {

public:
    int operator()(const int& n1, const int& n2, const int& n3)
    {
        return (n1 + n2 + n3) / 3;
    }
};

int main(void)
{
    rename();

    Add add;
    cout << "총점: " << add(1, 3, 5) << "점" << endl;

    Average average;
    cout << "평균: " << average(1, 3, 5) << "점" << endl;

    return 0;
}
*/
#include <iostream>
/*
�����Լ��� ������ virtual Ű������ ������ ���� �̷�����.
�����Լ��� ����ǰ� ����, �� �Լ��� �������̵� �ϴ� �Լ��� �����Լ��� �ȴ�!
*/
using namespace std;

class First
{
public:
    virtual void MyFunc()       // First Ŭ������ MyFunc �Լ��� virtual�� ����Ǿ����� Second, Third Ŭ������ MyFunc �Լ��� ���� virtual Ű���� �߰� ���ص� �����Լ��� �ȴ�. ��ġ�� virtual ������ �־ �����Լ����� �˸���!
    {
        cout << "FirstFunc" << endl;
    }
};

class Second : public First

{
public:
    virtual void MyFunc()   //�������̵� ������ MyFunc 
    {
        cout << "SecondFunc" << endl;
    }
};

class Third : public Second
{
public:
    virtual void MyFunc()
    {
        cout << "ThirdFunc" << endl;
    }
};

int main(void)
{
    Third* tptr = new Third();
    Second* sptr = tptr;
    First* fptr = sptr;
    /*
    ��ü������ Ÿ���� �������� ���� ������ �����ȴ�.
    �������̵��� ���� �θ���� �ڽİ����� ��������.
    */
    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();

    cout << endl;
    tptr->Second::MyFunc();
    delete tptr;
    return 0;
}
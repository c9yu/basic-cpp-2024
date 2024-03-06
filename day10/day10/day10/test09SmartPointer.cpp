/*
#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    {
        cout << "Point ��ü ����" << endl;
    }
    ~Point()
    {
        cout << "Point ��ü �Ҹ�" << endl;
    }
    void SetPos(int x, int y)
        {
            xpos = x;
            ypos = y;
        }
    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<< (ostream& os, const Point& pos)
{
    os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
    return os;

}

class Smartptr
{
private:
    Point* posptr;

public:
    Smartptr(Point * ptr) : posptr(ptr)
    {}

    Point& operator*() const {
        return *posptr;
    }
    Point* operator -> () const
    {
        return posptr;
    }
    ~Smartptr()
    {
        delete posptr;
    }
};
int main(void)
{
    Smartptr sptr1(new Point(1, 2));  // �Ҹ� 3
    Smartptr sptr2(new Point(2, 3));  // �Ҹ� 2
    Smartptr sptr3(new Point(4, 5));  // �Ҹ� 1
    cout << *sptr1; 
    cout << *sptr2;
    cout << *sptr3;

    sptr1->SetPos(10, 20);
    sptr2->SetPos(30, 40);
    sptr3->SetPos(50, 60);
    cout << *sptr1;
    cout << *sptr2;
    cout << *sptr3;

    return 0;
}
*/
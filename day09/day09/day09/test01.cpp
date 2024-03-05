/*
#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator+(const Point& ref) // operator+라는 이름의 멤버 함수
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos); // 새로운 포인터 객체(pos) 생성
		return pos;                                  // 만든 자료형에 + 하기 위해서 연산자 오버로딩을 통해 더하기 기능을 구현해준다.
	}
};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);  // 만든 operator+를 사용하는 방법
	Point pos4 = pos2.operator+(pos3);  // 먄약 operator-를 만들었다면, pos2.operator-(pos3)의 형태였을 것이다.

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}
*/
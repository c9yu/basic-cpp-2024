
/*
#include <iostream>

using namespace std;

class Point;

class PointOp
{
private:
	int opcnt;
	
public:
	PointOp() : opcnt(0)
	{}

	Point PointAdd(const Point&, const Point&);     // 함수 선언에서는 매개변수의 이름은 생략 가능하나,
	Point PointSub(const Point&, const Point&);     // 매개변수 타입은 생략할 수 없다.
	~PointOp()
	{
		cout << "Operaton times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;

public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos)
	{}
	friend Point PointOp::PointAdd(const Point&, const Point&);
	friend Point PointOp::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);
};

Point PointOp::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOp::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);

}

int main(void) {

	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOp op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));

	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}
*/
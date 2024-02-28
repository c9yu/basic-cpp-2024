// date : 20240228
// desc : 烙矫按眉狼 犬牢

/*
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl; // this : 按眉 器牢磐(按眉狼 林家甫 唱鸥晨)
	}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;

	}
};

SoSimple SimpleFunObj(SoSimple ob)
{
	cout << "Parm ADR" << &ob << endl;  // 窃荐 急攫矫俊 &: 曼炼, 酒匆锭绰 : 林家 楷魂磊
	return ob;
}

int main(void) {
	SoSimple obj(7);
	SimpleFunObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFunObj(obj); // 烙矫按眉 林家 历厘
	cout << "Return Obj " << &tempRef << endl;
	return 0;

}
*/

/*
New Object: 000000DD66AFF9C4         : 按眉 obj 林家
New Copy obj: 000000DD66AFFAC4       : 按眉 ob 林家
Parm ADR000000DD66AFFAC4             : 按眉 ob 林家
New Copy obj: 000000DD66AFFB04       : 烙矫按眉 林家
Destroy obj: 000000DD66AFFAC4        : 按眉 ob 家戈
Destroy obj: 000000DD66AFFB04        : 烙矫按眉 家戈

New Copy obj: 000000DD66AFFB24       : 按眉 ob 林家
Parm ADR000000DD66AFFB24             : 按眉 ob 林家
New Copy obj: 000000DD66AFF9E4       : 烙矫按眉 林家
Destroy obj: 000000DD66AFFB24        : 按眉 ob 家戈
Return Obj 000000DD66AFF9E4          : 烙矫按眉 林家
Destroy obj: 000000DD66AFF9E4	     : 烙矫按眉 家戈
Destroy obj: 000000DD66AFF9C4        : 按眉 obj 家戈
*/
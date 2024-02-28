// date : 20240228
// desc : ReturnCopycon

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public: 
	SoSimple(int n): num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "called SoSimple (const SoSimple& copy" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;	
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFunObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}


int main(void) {

	SoSimple obj(7);
	//SoSimple re = SimpleFunObj(obj);             // 원래라면 객체를 생성하여 사용하는 것이 맞지만
	SimpleFunObj(obj).AddNum(30).ShowData();       // 바로 SimpleFunObj(obj)를 사용했기에 임시객체가 생성되고, AddNum으로 넘어가면 생성되었던 임시객체가 사라진다
	obj.ShowData();

	return 0;
}
*/
// date : 20240227
// desc : SelfRef

/*

#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "객체 생성" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this; // pointerThis의 경우 객체 자기 자신을 가리키기에 this에 저장 된 것이 num으로 보일 수 있으나 이는 틀렸다(31, 32행이 성립 불가)
					  // this가 가리키고 있는것은 객체 자기 자신 즉, obj이다.
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void) {

	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}
*/
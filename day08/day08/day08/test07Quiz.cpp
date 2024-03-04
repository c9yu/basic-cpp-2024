/*
RemoteControlŬ����, SamsungTv Ŭ����, LgTv Ŭ������ �����ϰ�,
remote -> on()�� ȣ���ϸ� ����� TV�� ���� "�Ｚ TV on" �Ǵ� "LG TV on"�� ��µǵ��� ���α׷��� �ϼ��Ͻÿ�.
*/

#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void On() {
		cout << "TV�� �մϴ�." << endl;
	}
};

class SamsungTV : public RemoteControl
{
public:
	virtual void On() {
		cout << "�Ｚ TV on" << endl;
	}
};

class LgTV : public RemoteControl
{
public:
	virtual void On() {
		cout << "LG TV on" << endl;
	}
};

// �������� ����� ��ü�� ���� ����� �޶�����. �̰� �ٷ� ������(Polymorphism)!
int main(void)
{
	RemoteControl* remote = new SamsungTV();		// SamsungTV ��ü ����!
	remote->On();									// SamsungTv Ŭ������ On() ȣ��

	remote = new LgTV();							// ������ ������ LgTv ��ü ����
	remote->On();									// LgTv Ŭ������ On() ȣ��
	delete remote;									// �޸� ��� �� �ݳ�!

	return 0;
}

// virtual Ű���尡 ������ ������ ���� remote ����, �� RemoteControl�� On()�� ȣ��ȴ�. => ��, �������� �ڷ����� ������� ȣ�� ����� �����Ѵ�.
// virtual Ű���� ���� �Ŀ��� ������ ������ ����Ǿ� �ִ� ��ü(���� ����Ű�� ��ü)�� On()�� ȣ��ȴ�! => ������ ������ ������ ����Ű�� ��ü�� �����Ͽ� ȣ�� ����� �����Ѵ�.

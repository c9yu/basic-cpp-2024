// date : 20240223
// file : test08RacingCarEnum.cpp
// desc : 

/*
#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum                             // ������
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car // Car��� ����ü ����
{
	char gamerID[CAR_CONST::ID_LEN]; // ��� ���� 1    // char gamerID[20]; �� �ȴ�. 
	int fuelGauge;                   // ��� ���� 2    // 100
	int curSpeed;                    // ��� ���� 3    // 10

	void ShowCarState();
	void Accel();
	void Break();
};
	void Car::ShowCarState()              // ��� �Լ� 1
	{
		cout << "������ID: " << gamerID << endl;
		cout << "���ᷮ: " << fuelGauge << "%" << endl;
		cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;

	}
	void Car::Accel()                     // ��� �Լ� 2
	{
		if (fuelGauge <= 0)
			return;

		else
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}
		curSpeed += CAR_CONST::ACC_STEP; // CAR_CONST::
	}
	void Car::Break()                     // ��� �Լ� 3
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}
		curSpeed -= CAR_CONST::BRK_STEP;
	}

int main(void)
{
	Car run99 = { "run99", 100, 0 };  // Car Ÿ���� run99�� { "run99", 100, 0 }�� �ʱ�ȭ �����ְ� �ִ�.
	run99.Accel();                   // run99 �ȿ� �ִ� Accel�̶�� �Լ��� ȣ���ϰڴ�. : run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}
*/
/*
new��� Ű���带 ����ϸ� heap ������ ������ �� �ִ� ������ �����Ѵ�.
new��� Ű���带 ������� ������ stack ������ ������ �� �ִ� ������ �����Ѵ�.
*/
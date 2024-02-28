// date : 20240223
// file : test08RacingCarEnum.cpp
// desc : 

/*
#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum                             // 열거형
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car // Car라는 구조체 생성
{
	char gamerID[CAR_CONST::ID_LEN]; // 멤버 변수 1    // char gamerID[20]; 이 된다. 
	int fuelGauge;                   // 멤버 변수 2    // 100
	int curSpeed;                    // 멤버 변수 3    // 10

	void ShowCarState();
	void Accel();
	void Break();
};
	void Car::ShowCarState()              // 멤버 함수 1
	{
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;

	}
	void Car::Accel()                     // 멤버 함수 2
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
	void Car::Break()                     // 멤버 함수 3
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
	Car run99 = { "run99", 100, 0 };  // Car 타입의 run99를 { "run99", 100, 0 }로 초기화 시켜주고 있다.
	run99.Accel();                   // run99 안에 있는 Accel이라는 함수를 호출하겠다. : run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}
*/
/*
new라는 키워드를 사용하면 heap 영역에 저장할 수 있는 공간을 생성한다.
new라는 키워드를 사용하지 않으면 stack 영역에 저장할 수 있는 공간을 생성한다.
*/
// date : 20240228
// desc : Static

#include <iostream>
using namespace std;

void Counter()
{
	//int cnt = 0;       // 원래 하던 방식으로 하면 1이 반복해서 출력된다.
	static int cnt;      // static을 사용하면 정적 데이터 영역에 cnt라는 변수가 생성돼 죽지 않고 계속 쌓인다.
						 // 지역변수에 static을 붙이게 되면 전역적인 특성과 지역적인 특성을 모두 가질 수 있다.
	cnt++;

	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
		//cnt--; // 이는 static이 사용된 Counter 내부에서 사용되지 않았기에 오류가 발생했다.
	}
	return 0;
}
// date : 20240228
// desc : Static

#include <iostream>
using namespace std;

void Counter()
{
	//int cnt = 0;       // ���� �ϴ� ������� �ϸ� 1�� �ݺ��ؼ� ��µȴ�.
	static int cnt;      // static�� ����ϸ� ���� ������ ������ cnt��� ������ ������ ���� �ʰ� ��� ���δ�.
						 // ���������� static�� ���̰� �Ǹ� �������� Ư���� �������� Ư���� ��� ���� �� �ִ�.
	cnt++;

	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
		//cnt--; // �̴� static�� ���� Counter ���ο��� ������ �ʾұ⿡ ������ �߻��ߴ�.
	}
	return 0;
}
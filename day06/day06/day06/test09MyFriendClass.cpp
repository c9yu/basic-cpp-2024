// date : 20240228
// desc : Class�Լ��� ���� Friend ����

/*
#include <iostream>
#include <cstring>

using namespace std;

//class Girl; // class Girl�� �����Ŷ�� ���� �̸� �˷��ִ� ���� ���� ��� �ȴ�.

class Boy
{
private:
	int height;
	friend class Girl;
	
public:
	Boy(int len) : height(len)
	{}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
	char phNum[20];
	
public:
	Girl(const char* num)                    // const�� �ٿ��� ��
	{
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);       // �����
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)      // ���Ǻ�
                                             // ����ο� ���Ǻθ� �и��Ͽ� �ۼ��� �� '::'�� ���� �Ҽ��� �ۼ����־�� �Ѵ�.
{ 
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height: " << frn.height << endl;
}

int main(void) {

	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}
*/
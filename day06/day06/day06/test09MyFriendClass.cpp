// date : 20240228
// desc : Class함수에 대한 Friend 선언

/*
#include <iostream>
#include <cstring>

using namespace std;

//class Girl; // class Girl이 있을거라는 것을 미리 알려주는 역할 굳이 없어도 된다.

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
	Girl(const char* num)                    // const를 붙여줄 것
	{
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);       // 선언부
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)      // 정의부
                                             // 선언부와 정의부를 분리하여 작성할 때 '::'를 통해 소속을 작성해주어야 한다.
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
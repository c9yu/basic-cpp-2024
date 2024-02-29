#include <iostream>
#include <cstring>

using namespace std;

class Myclass {

private:
	char name[30];
	int age;

public:
	Myclass(const char* anmae, int aage) : name(aname), age(aage)
	{}
	const char* aname() {
		return name;
	}
	int aage() {
		return age;
	}

};

class MyInfo : public Myclass {
private:
	char pNumber[20];

public:
	MyInfo(const char* bname, int bage, const char * bpNumber)   //
		: Myclass(bname, bage)
	{}

	void printMyInfo() {
//		"나의 이름은 XXX이고, 나이는 XX 살이며 전화번호는 XXX입니다."
		cout << "나의 이름은 " << aname << "이고, " << "나이는 " << aage << " 살이며 전화번호는 " << pNumber << "입니다." << endl;
	
	}
};


int main(void) {
	MyInfo Itsme("이찬규", 26, "010-3733-1657");



	return 0;
}
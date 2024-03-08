/*
- Parent clas
class Product : id, price, producer

- Child class
class Book : ISBN, author title
class Handphone : model, RAM
class Computer : model, cpu, RAM
 
메인화면
------------- 상품 관리 프로그램 -------------
1. 상품 추가 2. 상품 출력 3. 상품 검색 0. 종료
>
----------------------------------------------

1 or 2 or 3을 선택한 경우
1. 책, 2. 핸드폰, 3 컴퓨터
선택 목록을 띄워 해당 상품을 선택한 후에 추가, 출력, 또는 검색 실행된다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Product
{
private: 
	int id;
	int price;
	char* producer;

public:
	Product() {
		cout << "디폴트 생성자 호출" << endl;
	}
	void AddProduct(int myid, int myprice, char* myproducer)
	{
		id = myid;
		price = myprice;
		producer = myproducer;
	}
	~Product()
	{
		printf("소멸자 호출\n");
	}
	int getid() {
		return id;
	}
	int getprice() {
		return price;
	}
};


int main(void)
{
	Product productArr[100] = {};

	char producer[20];
	int inid, price, select;

	for (int i = 0; i < 1; i++) {
		cout << "1. 상품추가, 2. 상품 출력, 3. 상품 검색, 0. 종료" << endl;
		cin >> select;
		if (select == 1)

		else if (select == 2)

		else if (select == 3)

		else if (select == 0)
			break;
			exit;
	}

	return 0;
}
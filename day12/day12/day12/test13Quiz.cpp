/*
- Parent clas
class Product : id, price, producer

- Child class
class Book : ISBN, author title
class Handphone : model, RAM
class Computer : model, cpu, RAM
 
����ȭ��
------------- ��ǰ ���� ���α׷� -------------
1. ��ǰ �߰� 2. ��ǰ ��� 3. ��ǰ �˻� 0. ����
>
----------------------------------------------

1 or 2 or 3�� ������ ���
1. å, 2. �ڵ���, 3 ��ǻ��
���� ����� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ���, �Ǵ� �˻� ����ȴ�.
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
		cout << "����Ʈ ������ ȣ��" << endl;
	}
	void AddProduct(int myid, int myprice, char* myproducer)
	{
		id = myid;
		price = myprice;
		producer = myproducer;
	}
	~Product()
	{
		printf("�Ҹ��� ȣ��\n");
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
		cout << "1. ��ǰ�߰�, 2. ��ǰ ���, 3. ��ǰ �˻�, 0. ����" << endl;
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
#include <iostream>
using namespace std;

typedef struct Data
{
	int data;
	void(*ShowData)(Data*);   // ShowData 멤버함수 선언   void(함수주소)()
	void(*Add)(Data*, int);   // Add      멤버함수 선언
};	Data;


void ShowData(Data* THIS)     // ShowData 멤버함수 정의
{ 
	cout << "Data: " << THIS->data << endl; 
}
void Add(Data* THIS, int num) // Add 멤버함수 정의
{ 
	THIS->data+= num; 
}

int main(void)
{
	Data obj1 = { 15, ShowData,Add }; // 구조체 Data 변수 obj1 선언과 초기화
	Data obj2 = { 7, ShowData,Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);
	return 0;
}
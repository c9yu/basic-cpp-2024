// date : 20240227
// desc : Dynamic


/*
#include <iostream>
using namespace std;

int main()
{
	cout << "int size: " << sizeof(int) << endl;
	int * pi = new int; // new 연산자를 통해서 heap영역에 int(4byte)크기만큼 메모리 공간을 할당받고, 
	                    // 할당받은 메모리의 주소를 리턴시켜준다.

	*pi = 10; // 포인트가 나타내고 있는곳의 저장공간에 10을 넣어라!
			  // int *의 형식의 공간에 그냥 int형태의 값을 넣을 수 없다. 즉, *pi = 10의 형태로 사용

	cout << "Pi가 가리키는 곳에 저장된 값: " << *pi << endl;

	delete pi; // 힙 영역에 할당받았던 공간(동적 할당받은 메모리 공간)을 해제시켜 준다.

	int* pary = new int[10]; // 
	for (int i = 0; i < sizeof(pary); i++) {
		pary[i] = i + 10; // 배열의 각 방에 원소(요소)값을 집어 넣는다. ex) pary[0] = 10
	}

	for (int i = 0; i < sizeof(pary); i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete[]pary; // 배열로 동적할당한 메모리를 반환한다.

	return 0;
}
*/
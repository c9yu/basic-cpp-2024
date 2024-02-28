#include <iostream>
#include "test15FileDivision.h"


void Human::humanInfo() {
	std::cout << "나는" << age << "살인" << job << " " << name<< "입니다." << std::endl;

}

int main(void) {


	
		Human h( "이찬규", 26, "학생" );
		h.humanInfo(); // 나는 50살인 백수 홍길동입니다. 출력
		// strcopy 이용해서 작업

		return 0;

}


#include <iostream>
#include "test15FileDivision.h"


void Human::humanInfo() {
	std::cout << "����" << age << "����" << job << " " << name<< "�Դϴ�." << std::endl;

}

int main(void) {


	
		Human h( "������", 26, "�л�" );
		h.humanInfo(); // ���� 50���� ��� ȫ�浿�Դϴ�. ���
		// strcopy �̿��ؼ� �۾�

		return 0;

}


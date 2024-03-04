#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
/*
�Լ��� �����Լ��� ����Ǹ�, �ش� �Լ� ȣ�� �� �������� �ڷ����� ������� ȣ������ �������� �ʰ�,
������ ������ ������ ����Ű�� ��ü�� �����Ͽ� ȣ���� ����� �����Ѵ�!!
*/
class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name : " << name << endl;
	}
	virtual int GetPay() const
	{
		return 0;
	}
	virtual void ShowSalaryInfo() const
	{ }
};

class PermanentWorker : public Employee
{
private:
	int salary;		// �� �޿�
public:
	PermanentWorker(const char* name, int money) : Employee(name), salary(money)
	{ }
	int GetPay() const
	{
		cout << "PermanentWorker�� GetPay()" << endl;
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;		// �� �޿� ���� �ð��� �հ�
	int payPerHour;		// �ð��� �޿�
public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay)
	{ }
	void AddWorkTime(int time)	// ���� �ð��� �߰�
	{
		workTime += time;
	}
	int GetPay() const			// �� ���� �޿�
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;	// �� �ǸŽ���
	double bonusRatio;	// �󿩱� ����
public:
	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{ }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		cout << "SalesWorker�� GetPay()" << endl;								// �������̵��� ��� �Լ��� �ڽİ��� ����ȴ�.
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);		// ���� �����ǵ� �θ���� ȣ���Ϸ��� ::�����ڷ� ����!(�Ҽ��� ǥ��), PermanentWorker�� GetPay �Լ� ȣ��
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;						// SalesWorker�� GetPay �Լ� ȣ��
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];		// Employee ��ü�� �ּҰ��� �����ϴ� ������� ��ü ����, ���� Employee Ŭ������ ����ϴ� Ŭ������ ��ü�� �� �迭�� ���� ����!!!!!!!!!
	int empNum;
public:
	EmployeeHandler() : empList(), empNum(0)	// empList() - nullptr �ʱ�ȭ == empList{}
	{ }
	void AddEmployee(Employee* emp)	// Employee ��ü�� �ּҰ� ����, ���� Employee Ŭ������ ����ϴ� PermanentWorker ��ü�� �ּҰ��� ���� ����!!!!!
	{
		empList[empNum++] = emp;
	}
	// EmployeeManager3.cpp ���� �ּ�ó�� �س��� �κ�
	// �迭�� �����ϴ� ������ ������ Employee�� ������ �����̹Ƿ�, Employee Ŭ������ ����� �ƴ� GetPay�Լ��� ShowSalaryInfo�Լ��� ȣ�� �κп��� ������ ������ ���� �ּ� ó���س���
	// Employee Ŭ������ GetPay �Լ��� ShowSalaryInfo �Լ��� �߰��� �����ϰ�, �����Լ��� ��������!!!!! �׷��� ���� ����!
	// ���� SalesWorker  Ŭ�������� �������̵��� GetPay �Լ��� ShowSalaryInfo �Լ��� ȣ��� ��!
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();			// ShowSalaryInfo �Լ��� �����Լ��̹Ƿ� ���� �������� �������̵��� ������ �Լ��� ȣ��ȴ�.
	}
	void ShowTotalSalaryInfo() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();			// GetPay �Լ��� �����Լ��̹Ƿ� ���� �������� �������̵��� ������ �Լ��� ȣ��ȴ�.
		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	// ���� ������ �������� ����� ��Ʈ�� Ŭ������ ��ü ����
	EmployeeHandler handler;

	// ������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// �ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("JUNG", 700);
	alba->AddWorkTime(5);			// 5�ð� ���� ��� ���
	handler.AddEmployee(alba);

	// ������ ���
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);	// �������� 7000
	handler.AddEmployee(seller);

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalaryInfo();

	//SalesWorker s("Hong", 1000, 0.1);
	//cout << s.GetPay() << endl;		// SalesWorker Ŭ������ GetPay() ȣ��
	//s.ShowSalaryInfo();
	return 0;
}
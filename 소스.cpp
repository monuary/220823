//�̸����� : �̸��� �ٿ����� ����
//�ٸ� ����� �Լ��� ������ ���ų�, �����ϴ� ���� ���� ���߾��迡���� �Լ��̸��� �浹�� ���� �Ͼ��. �̸������� �� ������ �ذ��� �� �ִ� cpp�� ����̴�.
//�̸����� ���� : namespace ������ {�Լ�����}
//�̸����� ��� : ������::�Լ�;

#include <iostream>

namespace maker1//�̸����� ����
{
	void Func()
	{
		std::cout << "maker1" << std::endl;
	}
}

namespace maker2
{
	void Func()
	{
		std::cout << "maker2" << std::endl;
	}
}

int main()
{
	maker1::Func();//�̸����� ���
	maker2::Func();
	return 0;
}
//이름공간 : 이름을 붙여놓은 공간
//다른 사람의 함수를 가져와 쓰거나, 협업하는 일이 잦은 개발업계에서는 함수이름의 충돌이 많이 일어난다. 이름공간은 이 문제를 해결할 수 있는 cpp의 기능이다.
//이름공간 정의 : namespace 제작자 {함수정의}
//이름공간 사용 : 제작자::함수;

#include <iostream>

namespace maker1//이름공간 정의
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
	maker1::Func();//이름공간 사용
	maker2::Func();
	return 0;
}
// my_first_cmake_project.cpp: определяет точку входа для приложения.
//

#include "my_first_cmake_project.h"

class WhatIsYourName
{
private:
	std::string name;
	void print_your_name() const
	{
		std::cout << "Здравствуйте, " << name << std::endl;
	}
public:
	WhatIsYourName(std::string name)
	{
		this->name = name;
		print_your_name();
	}
};



int main()
{
	setlocale(LC_ALL, "rus");
	std::string name{};
	std::cout << "Введите ваше имя: ";
	std::cin >> name;
	WhatIsYourName w (name);
	
	return EXIT_SUCCESS;
}

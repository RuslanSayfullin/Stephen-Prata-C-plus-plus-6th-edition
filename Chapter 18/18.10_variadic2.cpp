﻿//variadic2.срр
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <string> 

//--------------------------------------------------------------------------------------------------
// Определение для 0 параметров — завершение вызова 
void show_list() {}
//--------------------------------------------------------------------------------------------------
// Определение для 1 и более параметров 
// Определение для 1 параметра 
template<typename T>
void show_list(const T& value)
{
	std::cout << value << '\n';
}
//--------------------------------------------------------------------------------------------------
// Определение для 2 и более параметров 
template<typename T, typename...Args>
void show_list(const T& value, const Args&... args)
{
	std::cout << value << ", ";
	show_list(args...);
}
//--------------------------------------------------------------------------------------------------
int main()
{
	int n = 14;
	double x = 2.71828;
	std::string mr = "Mr. String objects!";
	show_list(n, x);
	show_list(x*x, ' !', 7, mr);

	std::cin.get();
	std::cin.get();
	return 0;
}
//--------------------------------------------------------------------------------------------------
/*
14, 2.71828
7.38905, 8225, 7, Mr. String objects!
*/
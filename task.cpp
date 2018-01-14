#include <iostream>
#include <string>
#include "math.h"

int main() {
	//Вывод числа Пи, округленного до сотых
	std::cout << "pi = 3.14" << std::endl;
	//Вывод чилел 1/13/49 с одним пробелом между ними
	std::cout << "1 13 49" << std::endl;
	//Вывод чилел 1/13/49 разделенных заданным символом
	char chr1;
	std::cin >> chr1;
	std::cout << "1" << chr1 << "13" << chr1 << 49 << std::endl;
	//Вывод трех любых чисел с двумя пробелами между ними
	std::string str1;
	std::string str2 = "";
	std::cin >> str1;
	str2 = str1 + ' ';
	std::cin >> str1;
	str2 = str2 + str1 + ' ';
	std::cin >> str1;
	str2 = str2 + str1 + ' ';
	//Вычисление значения функции1
	double a = 0;
	std::cin >> a;
	double x = 12 * a*a + 7 * a - 12;
	double y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	//Определение плотности по объему и массе
	double v = 0;
	std::cin >> v;
	double m = 0;
	std::cin >> m;
	std::cout << m / v << std::endl;
	//Решение функции
	double b = 0;
	std::cin >> b;
	double c = 0;
	std::cin >> c;
	std::cout << (-c / b) << std::endl;
	//Длина между двумя точками
	double x1 = 0;
	std::cin >> x1;
	double y1 = 0;
	std::cin >> y1;
	double x2 = 0;
	std::cin >> x2;
	double y2 = 0;
	std::cin >> y2;
	double l = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	std::cout << l << std::endl;
	//Нахождение периметра равнобедренной трапеции
	double a1 = 0;
	std::cin >> a1;
	double b1 = 0;
	std::cin >> b1;
	double h = 0;
	std::cin >> h;
	double d = sqrt(h * h + ((b1 - a1) * (b1 - a1) / 4));
	std::cout << (a1 + b1 + d + d) << std::endl;
	//Нахождение площади кольца
	double lR = 0;
	std::cin >> lR;
	double bR = 0;
	std::cin >> bR;
	std::cout << 3.14 * (bR * bR - lR * lR);
	//
	double r = 0;
	std::cin >> r;
	std::cout << r * r * r << std::endl;
	std::cout << 6 * r * r << std::endl;
	//
	double s = 0;
	std::cin >> s;
	std::cout << 4 * s << std::endl;
    return 0;
}


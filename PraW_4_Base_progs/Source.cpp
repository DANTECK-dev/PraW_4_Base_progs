//#define _CRT_SECURE_NO_WARNINGS
//#define N 10
#define M 1000

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;


int Ff(int a, int b) {
	int delAB(0), c;

	if (a > b) c = a;
	if (a <= b) c = b;
	
	for (int i = 1; i < c; i++) {
		if ((a % i == 0) && (b % i == 0)) {
			delAB = i;
		}
	}
	return delAB;
}

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*Напишите программу, решающие задачи, соответствующую вашему индивидуальному заданию. 
	Для решения задачи необходимо использовать собственные функции. 
	Функции должны использоваться в основном коде (внутри функции main()),
	чтобы можно было проверить их работоспособность.

	Продумайте, какие аргументы должны быть у разрабатываемых функций. 
	Внутри функции не должно быть ввода с клавиатуры. 
	Ввод должен осуществляться в функции main(), 
	а полученные значения переданы в функцию в качестве аргументов.
	
	Все пользовательские функции должны только выполнять вычисление и 
	возвращать результат в главную функцию. Все результаты работы 
	программ необходимо выводить на экран в функции main().*/

	/*Написать функцию, которая возвращает наибольший общий делитель двух целых чисел.*/
	int res, a, b;

	cout << "Enter a: ";
	cin >> a;
	cout << endl << "Enter b: ";
	cin >> b;

	res = Ff(a, b);
	cout << endl << "The greatest common divisor of a and b: " << res << endl;
}
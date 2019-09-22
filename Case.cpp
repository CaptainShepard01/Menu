﻿#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "MyLib.h"
#include <math.h>;
using namespace std;

/*Case5. Арифметические действия над числами пронумерованы следующим
образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.
Дан номер действия N (целое число в диапазоне 1–4) и вещественные чис-
ла A и B (В не равно 0). Выполнить над числами указанное действие и вы-
вести результат. */

int case_5()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	int n;
	cout << "Case5. Арифметические действия над числами пронумерованы следующим образом:" << endl;
	cout << "1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление." << endl;
	cout << "Дан номер действия N (целое число в диапазоне 1–4) и вещественные числа A и B(В не равно 0)." << endl;
	cout << "Выполнить над числами указанное действие и вывести результат." << endl << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Какое действие вы хотите выполнить?" << endl;
	cout << "1 - Сумма " << endl;
	cout << "2 - Разность " << endl;
	cout << "3 - Произведение " << endl;
	cout << "4 - Деление " << endl;
	cin >> n;
	int answer = n - 1;
	switch (answer)
	{
	case 0: cout << "a + b = " << a + b << endl; break;
	case 1: cout << "a - b = " << a - b << endl; break;
	case 2: cout << "a * b = " << a * b << endl; break;
	case 3: cout << "a / b = " << a / b << endl; return 0;
	}
	system("pause");
	return 0;
}

/*Case10. Робот может перемещаться в четырех направлениях («С» — север,
«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые ко-
манды: 0 — продолжать движение, 1 — поворот налево, –1 — поворот на-
право. Дан символ C — исходное направление робота и целое число N —
посланная ему команда. Вывести направление робота после выполнения
полученной команды.*/

int case_10()
{
	setlocale(LC_ALL, "Russian");
	int n, k, dir;
	cout << "Case10. Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток)" << endl;
	cout << "и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, –1 — поворот направо." << endl;
	cout << "Дан символ C — исходное направление робота и целое число N — посланная ему команда." << endl;
	cout << "Вывести направление робота после выполнения полученной команды." << endl << endl;
	cout << "Текущее направление: " << endl;
	cout << "1 - С - север" << endl;
	cout << "2 - З - запад" << endl;
	cout << "3 - Ю - юг" << endl;
	cout << "4 - В - восток" << endl;
	cin >> dir;
	cout << "Команда: " << endl;
	cout << "0 — продолжать движение," << endl;
	cout << "1 — поворот налево," << endl;
	cout << "–1 — поворот направо." << endl;
	cin >> n;
	switch (dir)
	{
	case 1:
	{if (n == 0) cout << "Север" << endl;
	if (n == 1) cout << "Запад" << endl;
	if (n == (-1)) cout << "Восток" << endl;
	}; break;
	case 2:
	{if (n == 0) cout << "Запад" << endl;
	if (n == 1) cout << "Юг" << endl;
	if (n == (-1)) cout << "Север" << endl;
	}; break;
	case 3:
	{if (n == 0) cout << "Юг" << endl;
	if (n == 1) cout << "Восток" << endl;
	if (n == (-1)) cout << "Запад" << endl;
	}; break;
	case 4:
	{if (n == 0) cout << "Восток" << endl;
	if (n == 1) cout << "Север" << endl;
	if (n == (-1)) cout << "Юг" << endl;
	}; return 0;
	}
	return 0;
}

/*Case15. Мастям игральных карт присвоены порядковые номера: 1 — пики,
2 — трефы, 3 — бубны, 4 — червы. Достоинству карт, старших десятки,
присвоены номера: 11 — валет, 12 — дама, 13 — король, 14 — туз. Даны
два целых числа: N — достоинство (6 ≤ N ≤ 14) и M — масть карты
(1 ≤ M ≤ 4). Вывести название соответствующей карты вида «шестерка бу-
бен», «дама червей», «туз треф» и т. п.*/

int case_15()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Case15. Мастям игральных карт присвоены порядковые номера:" << endl;
	cout << "1 — пики, 2 — трефы, 3 — бубны, 4 — червы." << endl;
	cout << "Достоинству карт, старших десятки, присвоены номера : 11 — валет, 12 — дама, 13 — король, 14 — туз." << endl;
	cout << "Даны два целых числа : N — достоинство(6 ≤ N ≤ 14) и M — масть карты (1 ≤ M ≤ 4)." << endl;
	cout << "Вывести название соответствующей карты вида «шестерка бубен», «дама червей», «туз треф» и т.п." << endl;	
	cout << "Масть:" << endl;
	cout << " 1 — пики,\n 2 — трефы,\n 3 — бубны,\n 4 — червы.\n";
	cin >> m;
	cout << "\nДостоинство:" << endl;
	cout << " 6 - шестерки,\n 7 - семерки,\n ...\n 11 — валет,\n 12 — дама,\n 13 — король,\n 14 — туз.\n";
	cin >> n;
	cout << endl;
	switch (m)
	{
	case 1: {
		if (n == 6) cout << "Пиковая шестерка" << endl;
		if (n == 7) cout << "Пиковая семерка" << endl;
		if (n == 8) cout << "Пиковая восьмерка" << endl;
		if (n == 9) cout << "Пиковая девятка" << endl;
		if (n == 10) cout << "Пиковая десятка" << endl;
		if (n == 11) cout << "Пиковый валет" << endl;
		if (n == 12) cout << "Пиковая дама" << endl;
		if (n == 13) cout << "Пиковый король" << endl;
		if (n == 14) cout << "Пиковый туз" << endl;
	}; break;
	case 2: {
		if (n == 6) cout << "Шестерка треф" << endl;
		if (n == 7) cout << "Семерка треф" << endl;
		if (n == 8) cout << "Восьмерка треф" << endl;
		if (n == 9) cout << "Девятка треф" << endl;
		if (n == 10) cout << "Десятка треф" << endl;
		if (n == 11) cout << "Валет треф" << endl;
		if (n == 12) cout << "Дама треф" << endl;
		if (n == 13) cout << "Король треф" << endl;
		if (n == 14) cout << "Туз треф" << endl;
	}; break;
	case 3: {
		if (n == 6) cout << "Шестерка бубен" << endl;
		if (n == 7) cout << "Семерка бубен" << endl;
		if (n == 8) cout << "Восьмерка бубен" << endl;
		if (n == 9) cout << "Девятка бубен" << endl;
		if (n == 10) cout << "Десятка бубен" << endl;
		if (n == 11) cout << "Валет бубен" << endl;
		if (n == 12) cout << "Дама бубен" << endl;
		if (n == 13) cout << "Король бубен" << endl;
		if (n == 14) cout << "Туз бубен" << endl;
	}; break;
	case 4: {
		if (n == 6) cout << "Шестерка червей" << endl;
		if (n == 7) cout << "Семерка червей" << endl;
		if (n == 8) cout << "Восьмерка червей" << endl;
		if (n == 9) cout << "Девятка червей" << endl;
		if (n == 10) cout << "Десятка червей" << endl;
		if (n == 11) cout << "Валет червей" << endl;
		if (n == 12) cout << "Дама червей" << endl;
		if (n == 13) cout << "Король червей" << endl;
		if (n == 14) cout << "Туз червей" << endl;
	}; return 0;
	}
	return 0;
}

/*Case7. Единицы массы пронумерованы следующим образом: 1 — килограмм,
2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер. Дан номер единицы
массы (целое число в диапазоне 1–5) и масса тела в этих единицах (веще-
ственное число). Найти массу тела в килограммах.*/

int case_7()
{
	setlocale(LC_ALL, "Russian");
	int ed;
	float m;
	cout << "Case7. Единицы массы пронумерованы следующим образом: 1 — килограмм, 2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер.\nДан номер единицы массы(целое число в диапазоне 1–5) и масса тела в этих единицах(вещественное число).\nНайти массу тела в килограммах.\n";	
	cout << "Еденица массы:\n";
	cout << " 1 — килограмм,\n 2 — миллиграмм,\n 3 — грамм,\n 4 — тонна,\n 5 — центнер.\n";
	cin >> ed;
	cout << "Масса в указанных единицах:\n";
	cin >> m;
	switch (ed)
	{
	case 1: cout << "Масса в килограммах: " << m; break;
	case 2: cout << "Масса в килограммах: " << m * 0.000001; break;
	case 3: cout << "Масса в килограммах: " << m * 0.001; break;
	case 4: cout << "Масса в килограммах: " << m * 1000; break;
	case 5: cout << "Масса в килограммах: " << m * 100; return 0;
	}
	return 0;
}

/*Case14. Элементы равностороннего треугольника пронумерованы следующим
образом: 1 — сторона a, 2 — радиус R1 вписанной окружности (R1 =
= a 3 / 6), 3 — радиус R2 описанной окружности (R2 = 2·R1), 4 — площадь
S = a2 3 / 4. Дан номер одного из этих элементов и его значение. Вывести
значения остальных элементов данного треугольника (в том же порядке).*/

int case_14()
{
	setlocale(LC_ALL, "Russian");
	int n;
	double a;
	cout << "Case14. Элементы равностороннего треугольника пронумерованы следующим образом:\n1 — сторона a,/n2 — радиус R1 вписанной окружности(R1 = a sqrt(3) / 6),\n3 — радиус R2 описанной окружности(R2 = 2·R1),\n4 — площадь S = a^2 sqrt(3) / 4.\nДан номер одного из этих элементов и его значение. Вывести значения остальных элементов данного треугольника(в том же порядке).\n\n";
	cout << "Что дано?\n 1 - сторона а,\n 2 - радиус R1 вписанной окружности,\n 3 - радиус R2 описанной окружности,\n 4 - площадь S\n";
	cin >> n;
	cout << "Значение: " << endl;
	cin >> a;
	switch (n)
	{
	case 1:
	{
		cout << "R1 = " << a * (sqrt(3) / 6) << endl << "R2 = " << 2 * (a * (sqrt(3) / 6)) << endl << "S = " << a * a * (sqrt(3) / 4);
	}; break;
	case 2:
	{
		a = (6 * a) / sqrt(3);
		cout << "a = " << a << endl << "R2 = " << 2 * (a * (sqrt(3) / 6)) << endl << "S = " << a * a * (sqrt(3) / 4);
	}; break;
	case 3:
	{
		a = (a = (6 * a) / sqrt(3)) / 2;
		cout << "a = " << a << endl << "R1 = " << a * (sqrt(3) / 6) << endl << "S = " << a * a * (sqrt(3) / 4);
	}; break;
	case 4:
	{
		a = sqrt((4 * a) / sqrt(3));
		cout << "a = " << a << endl << "R1 = " << a * (sqrt(3) / 6) << endl << "R2 = " << 2 * (a * (sqrt(3) / 6));
	}; return 0;;
	}
	return 0;
}
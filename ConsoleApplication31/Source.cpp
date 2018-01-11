#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{

	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "Введите номер задания: " << endl;
		cout << " Что бы выйти введите 1'" << endl;
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			/* Известны результаты двух спортсменов-пятиборцев в каждом из пяти 
			видов спорта в баллах. Определить сумму баллов, полученных каждым спортсменом*/
			int vidsport, bal = 0, res = 0, res1 = 0;

			for (int i = 1; i <= 2; i++)
			{
				system("cls");
				res = 0;
				res1 = 0;
				cout << "Боец № " << i << ". Введите количество балов в армрестлинге: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "Боец № " << i << ". Введите количество балов в боксе: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "Боец № " << i << ". Введите количество балов в дзюдо: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "Боец № " << i << ". Введите количество балов в самбо: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "Боец № " << i << ". Введите количество балов в ДЖИ?У-ДЖИ?ТСУ: ";
				cin >> bal;
				res += bal;
				res1 += bal;
			}
			cout << "Боец № " << 1 << " набрал " << res << " баллов" << endl;
			cout << "Боец № " << 2 << " набрал " << res1 << " баллов" << endl;
			system("pause");
		}
		break;

		case 2:
		{
			/* Известны оценки по физике каждого ученика двух классов.
			Определить среднюю оценку в каждом классе. Количество учащихся в каждом классе одинаковое.*/
			int n = 10;
			int classA[] = { 4, 5, 4, 4, 3, 5, 3, 5, 3, 5 };
			int classB[] = { 4, 5, 5, 4, 3, 5, 5, 4, 5, 5 };
			float sumA = 0, sumB = 0;

			for (int i = 0; i < n; i++)
			{
				sumA += classA[i];
				sumB += classB[i];
			}

			cout << "В классе A: " << (sumA / n) << endl;
			cout << "В классе B: " << (sumB / n) << endl;
			system("pause");

		}
		break;

		case 3:
		{
			/*В области 12 районов. Известны количество жителей (в тысячах человек) и 
			площадь (в км2) каждого района. Определить среднюю плотность населения по области в целом.*/
			int nas, s;
			cout << "Введите плотность населения людей ";

			cin >> nas;
			cout << "Введите площадь государста ";
			cin >> s;
			cout << s / nas;
			system("PAUSE > NULL");
		}
		break;

		case 4:
		{
			/*В спортзал ежедневно приходит какое-то количество посетителей. Необходимо предложить пользователю ввести такие данные:
			сколько человек посетило спортзал за день, ввести возраст каждого посетителя и в итоге показать возраст самого старшего и самого молодого из них,
			а так же посчитать средний возраст посетителей.*/
			int age = 0;
			int maxAge = 0;
			int minAge = 100;
			int sum = 0;
			int average = 0;
			int amount = 0;

			cout << "Введите количество людей посетивший в спортзал  : ";
			cin >> amount;

			for (int i = 0; i < amount; i++)
			{
				cout << "Введите возраст " << i + 1 << "-го посетителя: ";
				cin >> age;

				if (age > maxAge)
					maxAge = age;
				if (age < minAge)
					minAge = age;

				sum += age;
			}

			average = sum / amount;

			cout << "Средний возраст всех посетителей: " << average << endl;
			cout << "Самый взрослый: " << maxAge << endl;
			cout << "Самый молодой: " << minAge << endl;
			cout << endl;
			system("pause");
		}
		break;

		case 5:
		{
			/* На складе имеется определённое количество ящиков с яблоками (в нашем примере 15). Когда подъезжает машина для погрузки,
			попросить пользователя ввести, сколько ящиков загрузить в первую машину, во вторую и так далее, пока не закончатся ящики с яблоками.
			Предусмотреть тот случай, когда пользователь введёт количество ящиков больше, чем есть на складе.*/
			int boxWithApples = 15;
			int amountBoxesForSale = 0;

			cout << "Сейчас на складе сколько  " << boxWithApples << " ящиков с яблоками.\n\n";
			for (int i = 1; ; i++)
			{
				cout << "Сколько ящиков загрузить в " << i << "-ю машину? ";
				cin >> amountBoxesForSale;

				if (amountBoxesForSale > boxWithApples)
				{
					cout << "На складе недостаточно товара!"<<endl;
					cout << "Осталось только " << boxWithApples << " ящиков\n\n";
					i--;
				}
				else
				{
					boxWithApples -= amountBoxesForSale;
					cout << "Осталось " << boxWithApples << " ящиков.\n";
				}

				if (boxWithApples == 0)
				{
					cout << "Яблоки закончились! Давай до свидания!\n";
					break;
				}
			}
			system("pause");
		}
		break;

		}


	} while (tm != 1);



}
#include <iostream>
using namespace std;
bool IsKPeriodic(string str, int K) //Функция для проверки строки на кратность числу К
{
	for (int i = 0; i < str.size();) //Внешний цикл, который идёт по всей строке
	{
		for (int j = 0; j < K; j++) //Внутренний цикл, который сравнивает участки строки, кол-во символом в которых равно числу К с первым участком, равным числу К
		{
			if (str[i++] != str[j]) //Если символ не совпадает - значит строка не кратна числу К
			{
				return false; //Возвращаем false, если строка не картна числу К
			}
		}
	}
	return true; //Если все участки строки, равные по длине числу К и слудющие друг за другом между собой одинаковые, то возвращаем true
}
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите строку для проверки на кратность: " << endl;
	string stroka;
	cin >> stroka;
	int K;
	while (true)  //Цикл для поддержания условия, что К больше 0
	{
		cout << "Введите число для проверки строки на кратность этому числу: " << endl;
		cin >> K;
		try
		{
			if (!(K > 0))
			{
				throw "Ошибка, число кратности должно быть больше 0!";
			}

		}
		catch (const char* exception)
		{
			cout << exception << endl;
			continue;
		}
		break;
	}
	if (IsKPeriodic(stroka, K))
	{
		cout << "Строка " << stroka << " кратна числу " << K << endl;
	}
	else
	{
		cout << "Строка " << stroka << " не кратна числу " << K << endl;
	}
}
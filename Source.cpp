#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	system("chcp 1251");
	int i, max = 0, chislo = 1, sum = 0, otn = 0, chislo_buff = 0, max_chislo = 0;
	while (chislo != 0)
	{
		cout << "������� 3-� ������� ����� (��� ���������� ������� 0): "; cin >> chislo;
		if (chislo == 0) break;
		chislo_buff = chislo;
		for (i = 0; i < 3; i++)
		{
			sum += chislo % 10;
			chislo = chislo / 10;
		}
		otn = chislo_buff / sum;
		if (otn > max)
		{
			max = otn;
			max_chislo = chislo_buff;
		}
		chislo++;
	}
	cout << "����� � ������������ ����������: " << max_chislo << " ���������: " << max << endl;
}
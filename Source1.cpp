#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	system("chcp 1251");
	int n, i, count = 0, chislo = 1, l = 0, count_u = 0, count_v = 0, voz = 0, ub = 0;
	cout << "������� ���������� ������� �� ������� �����: "; cin >> n;
	for (i = 0; i < n; i++)
	{
		chislo = 1;
		count = 0;
		l = 0;
		count_v = 0;
		count_u = 0;
		while (chislo != 0)
		{
			count++;
			cout << "������� ������� ������������������: "; cin >> chislo;
			if (count != 1)
			{
				if (chislo < l && chislo != 0)
				{
					count_u++;
					l = chislo;
				}
				else if (chislo > l && chislo != 0)
				{
					count_v++;
					l = chislo;
				}
			}
			else 
			{
				l = chislo;
			}
		}
		if (count_v != 0 && count_u == 0)
		{
			voz++;
		}
		if (count_u != 0 && count_v == 0)
		{
			ub++;
		}
		
		if (chislo == 0)
		{
			cout << "����� ������������������" << endl;
		}
	}
	cout << "�������������������, ������� �������: " << ub << " �������������������, ������� ����������: " << voz << endl;
}
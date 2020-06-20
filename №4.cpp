//4.В целочисленной последовательности есть нулевые элементы. Создать вектор из номеров этих элементов.

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, v=0;
	cout << "Enter n: "; cin >> n;
	vector<int> Vector1(n);
	vector<int> Vector2(100);
	for (int i = 0; i < n; i++)
	{
		cin >> Vector1[i];
		if (Vector1[i] == 0)
		{
			Vector2[v] = i+1;
			v++;
		}
	}

	cout << "Vector iz 0 nomerov elementov: ";
	for (int i = 0; i < v; i++)
	{
		cout << Vector2[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
//3.Дан вектор натуральных чисел. Найти первый четный элемент

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cout << "Enter n: "; cin >> n;
	vector<int> m;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		m.push_back(temp);
	}

	int u = 0;
	for (int i = 0; i < n; i++)
	{

		if (m[i] % 2 == 0) {
			u = m[i]; 
		}
	}
	cout << "Pervoe chetnoe: " << u << endl;

	system("pause");
}
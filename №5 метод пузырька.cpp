//5.Сортировать элементы вектора по возрастанию

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, v;
	cout << "Enter n: "; cin >> n;
	vector<int> m;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		m.push_back(temp);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++) {
			if (m[i] > m[j]) {
				v =m[i];
				m[i] = m[j];
				m[j] = v;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout <<m[i] <<" ";
	}
	cout<<endl;

	system("pause");
	return 0;
}
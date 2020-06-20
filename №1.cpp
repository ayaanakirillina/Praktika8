//1.Дан вектор целых чисел. Найти номер минимального элемента 

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
	cout << "Min element: " << *min_element(m.begin(), m.end()) << endl; 
	cout << "Nomer: " << min_element(m.begin(), m.end()) - m.begin() + 1 << endl; 
	cout << endl;

	system("pause");
	return 0;
}
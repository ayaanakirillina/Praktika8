//5.Сортировать элементы вектора по  возрастанию

#include <iterator>
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
	sort(m.begin(), m.end()); //сортируем вектор по возрастанию
	copy(m.begin(), m.end(), ostream_iterator<int>(cout, " ")); //выводим вектор на экран

	cout << endl;

	system("pause");
	return 0;
}
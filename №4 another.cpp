//4.В целочисленной последовательности есть нулевые элементы. Создать вектор из номеров этих элементов.

#include <iostream>
#include <iterator>
#include <algorithm>
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
	struct FindZeroIndex
	{
		FindZeroIndex() : m_counter(0) {}
		void operator()(const int& element)
		{
			if (element == 0)
				indexs.push_back(m_counter);
			++m_counter;
		}
		vector<size_t> indexs;
	private:
		size_t m_counter;
	};

	auto find = for_each(m.begin(), m.end(), FindZeroIndex());
	for_each(find.indexs.begin(), find.indexs.end(), [](const size_t& index)
	{
		cout << index + 1 << ' ';
	});
	cout << endl;

	system("pause");
	return 0;
}
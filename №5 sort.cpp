//5.����������� �������� ������� ��  �����������

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
	sort(m.begin(), m.end()); //��������� ������ �� �����������
	copy(m.begin(), m.end(), ostream_iterator<int>(cout, " ")); //������� ������ �� �����

	cout << endl;

	system("pause");
	return 0;
}
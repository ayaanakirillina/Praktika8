//2.ƒан вектор целых чисел. ѕроверить, €вл€етс€ ли он упор€доченным по возрастанию

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, z=0, v=0;
	cout << "Enter n: ";  cin >> n;
	vector<int> m;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		m.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		if (m[i] >= z)
		{
			z = m[i];
			v++;
		}
	}
	if (v == n)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl;


	system("pause");
	return 0;
}
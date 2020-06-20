//2.ƒан вектор целых чисел. ѕроверить, €вл€етс€ ли он упор€доченным по возрастанию

#include <iostream>
#include <vector>
#include <ctime>
#include "stdlib.h"

using namespace std;

int main()
{
	int n, z, v;
	v = 0;
	z = 0;
	srand(time(0));
	cin >> n;
	vector<int> vector(n);
	for (int i = 0; i < vector.size(); i++)
	{
		vector[i] = rand() % 50;
		cout << "vector " << i << " = " << vector[i] << endl;
		//cin >> vector[i];
		if (vector[i] >= z)
		{
			z = vector[i];
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
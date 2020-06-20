//6. Отсортировать текст по длине слов. 

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	vector<string> a(100);
	vector<int> b(20);
	fstream myfile1("input.txt");
	int n = 0, k = 0;

	string w;
	while (!myfile1.eof())
	{
		myfile1 >> w;
		n++;

	}

	myfile1.seekg(0, ios::beg);
	while (!myfile1.eof())
	{
		getline(myfile1, w);
		k++;
	}

	myfile1.seekg(0, ios::beg);
	int l = 0;
	while (l != k)
	{
		getline(myfile1, w);
		b[l] = 1;
		for (int i = 0; i < w.length(); i++)
		{
			if (w[i] == ' ')
			{
				b[l] = b[l] + 1;
			}
		}
		l++;
	}
	b.shrink_to_fit();

	myfile1.seekg(0, ios::beg);
	for (int i = 0; i < n; i++)
	{
		myfile1 >> a[i];
	}
	a.shrink_to_fit();

	for (int j = 0; j < n - 1; j++)
	{
		for (int g = j; g < n; g++)
		{
			if (a[j].size() > a[g].size())
			{
				a[j].swap(a[g]);
			}
		}
	}

	ofstream myfile2("output.txt");
	int s = 0;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < b[i]; j++)
		{
			myfile2 << a[s] << ' ';
			s++;
		}
	}

	myfile1.close();
	myfile2.close();

	system("pause");
	return 0;

}
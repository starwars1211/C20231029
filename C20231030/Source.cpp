#include <iostream>

using namespace std;


int Number[9][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0 ,1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0 ,1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0 ,1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0 ,1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0 ,1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0 ,1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

void Print()
{
	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			cout << Number[j][i] << " ";
		}
		cout << endl;
	}
}

void Change()
{
	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			Number[j][i] = (Number[j][i] == 0) ? 1 : 0;
			//if else Ãà¾à
		}
	}
}
int main()
{
	Print();
	Change();
	Print();

	return 0;
}
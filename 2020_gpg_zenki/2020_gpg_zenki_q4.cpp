/*
#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student
{
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreSociety;
	int scoreMath;
};

void Show(const Student* pointer)
{
	cout << "名前：" << pointer->name << endl
		<< " 国語： " << pointer->scoreJapanese << "点"
		<< " 社会：" << pointer->scoreSociety << "点"
		<< " 数学：" << pointer->scoreMath << "点" << endl;
	cout << " 合計点：" << pointer->scoreJapanese + pointer->scoreSociety + pointer->scoreMath << endl;
}

int main()
{
	Student student[] =
	{
		{ "木下航" , 80, 69, 88, },
		{ "小鳥遊凛" , 77, 59, 90, },
		{ "山田咲" , 64, 76, 92, },
	};
	int size = sizeof student / sizeof *student;
	
	for (int i = 0; i < size; ++i)
	{
		Show(&student[i]);
	}
}
*/
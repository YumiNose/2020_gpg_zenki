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
	cout << "���O�F" << pointer->name << endl
		<< " ����F " << pointer->scoreJapanese << "�_"
		<< " �Љ�F" << pointer->scoreSociety << "�_"
		<< " ���w�F" << pointer->scoreMath << "�_" << endl;
	cout << " ���v�_�F" << pointer->scoreJapanese + pointer->scoreSociety + pointer->scoreMath << endl;
}

int main()
{
	Student student[] =
	{
		{ "�؉��q" , 80, 69, 88, },
		{ "�����V�z" , 77, 59, 90, },
		{ "�R�c��" , 64, 76, 92, },
	};
	int size = sizeof student / sizeof *student;
	
	for (int i = 0; i < size; ++i)
	{
		Show(&student[i]);
	}
}
*/
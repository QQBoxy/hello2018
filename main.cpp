//Example1 - argcargv

//�ޥΨ禡�w�A�ϥμзǨ禡�w
#include <iostream>

//�зǨ禡�w���R�W�Ŷ�
using namespace std;

//�D�禡�g�k
int main(const int argc, char *argv[]) //��o�~���Ѽ�
{
	//�~���ѼƭӼ�
	cout << "argc: " << argc << endl;

	//�~���ѼƤ��e
	cout << "rgv[0]" << argv[0] << endl;

	//�e�XCommand�R�O: pause
	system("pause");

	//�^�ǲפ�
	return 0;
}
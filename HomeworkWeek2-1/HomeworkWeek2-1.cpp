using namespace std;
#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
	for (size_t i = 10; i > 0; i--)
	{
		cout << i << endl;
		Sleep(1000);
	}
	cout << "Thunderbirds are go!" << endl;
}



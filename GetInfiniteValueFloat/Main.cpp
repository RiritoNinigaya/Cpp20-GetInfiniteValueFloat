#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
	float infinite_value = std::numeric_limits<float>::infinity();
	cout << "Infinite Value in Float: " << infinite_value << endl;
	return 0;
}
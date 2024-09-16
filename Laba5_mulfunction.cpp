// Напишіть функцію cubeVolume, яка приймає 
// довжину ребра куба і повертає його об'єм. 

#include <iostream>
#include <math.h>

using namespace std;

int cubeVolume(int side);

int main()
{
	int side;
	cout << "Введіть довжину ребра куба: ";
	cin >> side;
	int result = cubeVolume(side);
	cout << "Об'єм куба становить " << result << " метрів кубічних.";
	return 0;
}

int cubeVolume(int side) {
	return pow(side, 3);
}
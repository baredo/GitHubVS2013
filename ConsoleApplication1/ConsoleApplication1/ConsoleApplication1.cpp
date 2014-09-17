// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "iostream"
#include <ctime>

using namespace std;
int const arraySize = 100000;

void metodoBurbuja(int* intArray){
	int buffer=0;
	for (int i = 0; i < arraySize-1; i++){
		for (int j = 0; j < arraySize -i-1; j++){
			if (intArray[j] > intArray[j + 1]){
				buffer = intArray[j];
				intArray[j] = intArray[j + 1];
				intArray[j + 1] = buffer;
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int intArray[arraySize];
	//cout.precision(8);
	//cout.setf(std::ios::fixed, std::ios::floatfield);

	srand(5);
	for (int i = 0; i < arraySize; i++){
		intArray[i] = rand() % 10;
	}
	
	cout << "Array sin ordenar:" << endl;

	for (int i = 0; i < arraySize; i++){
		cout << intArray[i] << "\t";
	}
	
	
	clock_t t = clock();
	metodoBurbuja(&intArray[0]);
	cout << endl << (float)(clock() - t)/CLOCKS_PER_SEC << "s" << endl;

	cout << endl << endl << "Array ordenado:" << endl;
	for (int i = 0; i < arraySize; i++){
		//cout << intArray[i] << "\t";
	
	}

	cin.get();
	
	return 0;
}


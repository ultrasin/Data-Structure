#pragma once

#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstdlib>

#define ASK_FOR_CONTAINER_SIZE "Type your container size: "
#define ADD_USER_INPUT_VALUES "Add those values to this container: "
#define CONDITION_TO_STOP "Add possitive values; cancels with negative values: "
#define MESSAGE_RESULT "Operation result: "
#define N 5

using namespace std; 

/*adds a size to a vector to add elements and print them afterwards*/
int addIntegerToArrayAndPrint() {

	int size;
	cout << ASK_FOR_CONTAINER_SIZE;
	cin >> size;
	int* array = new int[size];
	int value = 0;

	cout << ADD_USER_INPUT_VALUES << endl;
	for (int i = 0; i < size; ++i) {
		cin >> value;
		if (value >= 0) {
			array[i] = value;
		}
	}

	cout << MESSAGE_RESULT << endl;
	for (int i = 0; i < size; ++i) {
		cout << array[i] << ' ';
	}
		//memory will be allocated once user gives input
		//rule of thumb: assume user is dumb. Do not give user redimension. 
		//Also, delete once used and you don't need it.
	delete array;
	return 0;
} //1
float functMediaDeDiez() {

	float size = 10;
	float value;
	float accumulate = 0;
	vector<float> items;

	for (int i = 0; i < size; ++i) {
		cout << "Introduce un valor: ";
		cin >> value;
		items.push_back(value);
		accumulate += items[i];
	}
	float average = accumulate / size;
	cout << "La media es de: " << average;
	return 0;
} //3
int functMultiples() {

	int total;
	int number;
	vector<int> multiples;

	cout << "Escribe la cantidad de elementos a desplegar: ";
	cin >> total;
	cout << "Escribe el valor a trabajar: ";
	cin >> number;
	int accumulator = 0;
	for (int i = 0; i < total; ++i) {
		multiples.push_back(number);
		accumulator += number;
		multiples[i] = accumulator;
	}
	cout << endl << "Los valores son: ";
	for (int i = 0;  i < multiples.size(); ++i) {
		cout << multiples[i] << ' ';
	}
	return 0;
} //4
void functDosArray() {

	int vectorSize;
	vector<string> vectorNames;
	vector<string> vectorLength;

	cout << "Ingrese el tamano del vector: ";
	cin >> vectorSize;

	for (int i = 0; i < vectorSize; ++i) {
		string name;
		cout << endl << "Ingresa un nombre: ";
		cin >> name;
		vectorNames.push_back(name);
	}

	cout << endl << "Los valores son: " << endl;
	for (int i = 0; i < vectorNames.size(); ++i) {
		cout << vectorNames[i] << ' ';
	}
	cout << endl << "Los tamanos respectivos son: " << endl;
	for (int i = 0; i < vectorNames.size(); ++i) {
		cout << vectorNames[i].length() << ' ';
	}
} //5
int functSquareAndCube() {

	const int size = 10;
	int arrNumberList[size]{};
	int arrNumberSquare[size]{};
	srand(unsigned(time(NULL)));

	cout << "El cuadrado del arreglo: ";
	for (int i = 0; i < size; ++i) {
		arrNumberList[i] = (rand() % 10);
		arrNumberSquare[i] = arrNumberList[i];
		cout << pow(arrNumberList[i], 2) << " ";
	}

	cout << endl << "El cubo del arreglo: ";
	for (int i = 0; i < size; ++i) {
		cout << pow(arrNumberSquare[i], 3) << " ";
	}
	
	return 0;
} //6
void functInverse() {

	const int size = 5;
	string stringArray[size];
	string reverseString[size];

	for (int i = 0; i < size; i++) {
		string word;
		cin >> word;
		stringArray[i] = word;
		cout << "La palabra es: " << "<" << stringArray[i] << ">";
		string reversedWord = word;
		reverse(reversedWord.begin(), reversedWord.end());
		reverseString[i] = reversedWord;
		cout << " Su inverso es: " << "<" << reverseString[i] << ">" << endl;
	}

} //7
void functGrades() {

	const int size = 5;
	float arrGrades[size]{};
	float accumulate = 0;
	cout << "Ingrese 5 notas: " << endl;
	for (float &i : arrGrades){
		cin >> i;
		accumulate += i;
	}
	cout << endl << "Todas las notas son: ";
	for (float i : arrGrades) {
		cout << i << " ";
	}

	float minimum = arrGrades[0];
	float maximum = arrGrades[0];

	for (float i : arrGrades) {
		if (i < minimum) {
			minimum = i;
		}
		else if (i > maximum) {
			maximum = i;
		}
	}
	float average = accumulate / size;
	cout << endl << "Elemento minimo es: " << minimum << endl;
	cout << endl << "Elemento maximo es: " << maximum << endl;
	cout << endl << "El promedio es: " << average << endl;
}
int functMenosUno() {

	int arrayGrades[10]{};
	
	for (int i = 0; i < sizeof(arrayGrades) / sizeof(int); i++) {
		cin >> arrayGrades[i];
		if (arrayGrades[i] < 0) {
			break;
		}
	}
	
	cout << "Contiene los numeros: " << endl;
	for (int i = 0; i < sizeof(arrayGrades) / sizeof(int); i++) {
		cout << arrayGrades[i] << ' ';
	}
	return 0;
}
int functOrder() {
	
	const int size = 15;
	int randomizedArray[size]{};
	srand(unsigned(time(NULL)));

	cout << "Arreglo arbitrario: " << endl;
	for (int i = 0; i < size; ++i) {
		randomizedArray[i] = (rand() % 10);
		cout << randomizedArray[i] << ' ';
	}

	cout << endl << endl;

	cout << "Arreglo ordenado: " << endl;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (randomizedArray[i] > randomizedArray[j]) {

				int auxiliary = randomizedArray[j];
				randomizedArray[j] = randomizedArray[i];
				randomizedArray[i] = auxiliary;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << randomizedArray[i] << " ";
	}
	cout << endl;

	return 0;
}
void functMonths() {
	
}
int functPointerExtra() {
	int numero[5]{};

	for (int i = 0; i < 5; i++) {
		cout << "Ingresa numero: " << endl;
		cin >> numero[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << "La direccion de memoria " << & numero[i] << " tiene un valor de: " << numero[i] << ' ';
	}
	return 0;
}
void dynamicMemoryAtRuntime() {

	int size;
	cout << ASK_FOR_CONTAINER_SIZE;
	cin >> size;
	int* array = new int [size];
	int value = 0;

	cout << ADD_USER_INPUT_VALUES << endl;
	for (int i = 0; i < size; ++i) {
		cin >> value;
		if (value >= 0) {
			array[i] = value;
		}
	}
	
	cout << MESSAGE_RESULT << endl;
	for (int i = 0; i < size; ++i) {
		cout << array[i] << ' ';
	}
		//memory will be allocated once user gives input
		//rule of thumb: assume user is dumb. Dont give user chance to redimension
		//Also, delete once you won't need it anymore.

	delete array;
}


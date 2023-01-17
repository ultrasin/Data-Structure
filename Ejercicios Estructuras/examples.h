#pragma once

using std::string; using std::cout; using std::cin; using std::vector; using std::endl; using std::accumulate;

constexpr auto ASK_USER_SIZE = "Add a size: ";
constexpr auto ASK_TYPE_ELEMENT_SIZE = "Add a total size: ";
constexpr auto USER_INPUT_VALUE = "Add possitive values; cancels with negative values: ";
constexpr auto MESSAGE_RESULT = "Result is: ";

int functPrimerosDos() {

	int vectorSize;
	vector<int> vector;
	cout << ASK_TYPE_ELEMENT_SIZE;
	cin >> vectorSize;

	if (vectorSize < 1)
		cout << "Incorrect value";
	
	for (int i = 0; i < vectorSize; ++i) {
		int value;
		cout << endl << "Add value in position(" << i + 1 << "): " << endl;
		cin >> value;
		vector.push_back(value);
	}
	cout << endl << MESSAGE_RESULT;
	for (int i = 0; i < vector.size(); ++i) {
		cout << vector[i] << ' ';
	}
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
	for (int i = 0; i < multiples.size(); ++i) {
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
int functSquareCube() {

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
void functAllocMemory() {

	int size;
	cout << ASK_TYPE_ELEMENT_SIZE << endl;
	cin >> size;
	int* array = new int [size];
	int value = 0;

	cout << USER_INPUT_VALUE << endl;
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
}


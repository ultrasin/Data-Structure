#pragma once

using std::string; using std::cout; using std::cin; using std::vector; using std::endl; using std::accumulate;

int functPrimerosDos() {

	int vectorSize;
	vector<int> vector;
	cout << "Digite un tamano total de numeros a ingresar: ";
	cin >> vectorSize;

	if (vectorSize < 1)
		cout << "Valor no admitido";
	
	for (int i = 0; i < vectorSize; ++i) {
		int value;
		cout << endl << "Ingresa el valor " << i + 1 << ": " << endl;
		cin >> value;
		vector.push_back(value);
	}
	cout << endl << "Los valores son: ";
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
	srand(time(0));

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
float functOrder() {
	
	const int size = 15;
	int arrayContainer[size]{};
	int arrayToOrder[size]{};
	srand(time(0));

	cout << "El arreglo arbitrariamente contiene: ";
	for (int i : arrayContainer) {
		i = (rand() % 10);
		arrayToOrder[i] = i;
	}
	cout << endl;

	cout << "Ordenado: ";
	for (int i : arrayToOrder) {
		cout << i << ' ';
	}
	cout << endl;

	return 0;
}
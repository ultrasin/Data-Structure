#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include "graphs.h"

using std::cout; using std::cin; using std::string; using std::endl;

int edgeMatrix[9][9]{};

void PrintGraphMatrix(){
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << edgeMatrix[i][j] << '\t';
		}
		cout << endl;
	}
}	

void addEdge(int _row, int _column, int _value) {
	edgeMatrix[_row][_column] = _value;
	edgeMatrix[_column][_row] = _value;
}

void BFS(){

}

void DFS(){

}

void MST(){

}

void GetWeight(){

}

/****GIVEN MATRIX*****/
//		A	B	C	D	E	F	G	H	I
//	A	0	4	0	0	0	0	0	8	0
//	B	4	0	8	0	0	0	0	11	0
//	C	0	8	0	7	0	4	0	0	2
//	D	0	0	7	0	9	14	0	0	0
//	E	0	0	0	9	0	10	0	0	0
//	F	0	0	4	14	10	0	2	0	0
//	G	0	0	0	0	0	2	0	1	6
//	H	8	11	0	0	0	0	1	0	7
//  I	0	0	2	0	0	0	6	7	0

/*int edgeMatrix[9][9] = {
		0,	4,	0,	0,	0,	0,	0,	8,	0,
		4,	0,	8,	0,	0,	0,	0,	11,	0,
		0,	8,	0,	7,	0,	4,	0,	0,	2,
		0,	0,	7,	0,	9,	14, 0,	0,	0,
		0,	0,	0,	9,	0,	10,	0,	0,	0,
		0,	0,	4,	14,	10,	0,	2,	0,	0,
		0,	0,	0,	0,	0,	2,	0,	1,	6,
		8,	11,	0,	0,	0,	0,	1,	0,	7,
		0,	0,	2,	0,	0,	0,	6,	7,	0
	};*/
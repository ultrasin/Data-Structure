#pragma once

#define ASK_FOR_CONTAINER_SIZE "Type your container size: "
#define ADD_USER_INPUT_VALUES "Add those values to this container: "
#define CONDITION_TO_STOP "Add possitive values; cancels with negative values: "
#define MESSAGE_RESULT "Operation result: "
#define N 7

using namespace std;

int swappingNeighbors(int _array[]) {
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {

			if (_array[i] > _array[j]) {
				int auxiliary = _array[j];
				_array[j] = _array[i];
				_array[i] = auxiliary;
			}
		}
	}
	return 0;
}

void bubbleSortAscending(int _array[]) {
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (_array[j] > _array[j+1]) {
				int temp = _array[j];
				_array[j] = _array[j+1];
				_array[j+1] = temp;
			}
		}
	}

}

void bubbleSortDescending(int _array[]) {


}
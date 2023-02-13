#ifndef SORTING_H
#define SORTING_H

#define ASK_FOR_CONTAINER_SIZE "Type your container size: "
#define ADD_USER_INPUT_VALUES "Add those values to this container: "
#define CONDITION_TO_STOP "Add possitive values; cancels with negative values: "
#define MESSAGE_RESULT "Operation result: "
#define N 5

int swappingNeighbors(int _array[]);
void bubbleSortAscending(int _array[]);
void bubbleSortDescending(int _array[]);
void insertionSort(int _array[]);

#endif // !SORTING_H
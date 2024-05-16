#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

void displayArray(int array[],int size);
int* enterDataIntoArray(int *array,int *s);
int findMaximumValue(int array[],int size);
int findMinimumValue(int array[],int size);
float calculateAverege(int array[],int size);
int saveArrayToFile(int array[],int size);
void displayFromFile(int array[],int size);
int* deleteValues(int *array, int *s);
#endif //ARRAY_ARRAY_H

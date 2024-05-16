#include <iostream>


void displayArray(int array[], int s) {
    for (int i = 0; i < s; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
int* enterDataIntoArray(int *array,int *s) {
    int element;
    (*s)++;
    array = (int *)realloc(array, (*s) * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation error!");
        exit(1);
    }
    printf("Enter number to add: ");
    scanf("%d", &element);
    array[(*s) - 1] = element;
    return array;
}


int findMaximumValue(int array[],int size) {
    int max = array[0];
    for (int i = 0; i < size; ++i) {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int findMinimumValue(int array[],int size) {
    int min = array[0];
    for (int i = 0; i < size; ++i) {
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

float calculateAverege(int array[],int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i){
        sum += array[i];
    }
    float average = (float) sum / size;
    return average;
}

int saveArrayToFile(int array[],int s){
    FILE *fptr = NULL;
    fptr = fopen("array.txt","w");
    if (fptr == NULL){
        return 1;
    }
    for (int i = 0; i < s; ++i){
        fprintf(fptr, "array[%d] = %d\n",i, array[i]);
    }
    fclose(fptr);
    return 0;
}

void displayFromFile(int array[],int size){
    FILE * fptr;
    char fileLine[100];
    fptr = fopen("array.txt", "r");
    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\nError with file opening!\n");
    }
    fclose(fptr);
}

int* deleteValues(int *array, int *s) {
    if (*s == 0) {
        printf("Array is already empty!\n");
        return array;
    }
    (*s)--;
    array = (int *)realloc(array, (*s) * sizeof(int));
    if (array == NULL && *s > 0) {
        printf("Memory allocation error!");
        exit(1);
    }
    return array;
}

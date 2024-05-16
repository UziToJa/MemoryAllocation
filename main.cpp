#include <iostream>
#include "array.h"


void menu(){
    printf("Select an option:\n");
    printf("1. Enter the values into array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the minimum value\n");
    printf("4. Determine the maximum value\n");
    printf("5. Determine the average value\n");
    printf("6. Save to file\n");
    printf("7. Restore from file\n");
    printf("8. Delete the value from array\n");
    printf("0. Exit\n");
    printf("Select an option: \n\n");
}

int main() {
    int *array = NULL;
    int size=0;
    printf("Simple array\n\n");

    int option = 0;
    float average = calculateAverege(array, size);

    do{
        menu();
        scanf("%d", &option);
        switch (option){
            case 0 :
                break;
            case 1 :
                printf("Entering the values into array\n\n");
                array = enterDataIntoArray(array, &size);
                break;
            case 2 :
                displayArray(array, size);
                break;
            case 3 : {
                int min = findMinimumValue(array, size);
                printf("Minimum value = %d\n", min);
                break;
            }
            case 4 : {
                int max = findMaximumValue(array, size);
                printf("Maximum value = %d\n", max);
                break;
            }
            case 5 :
                printf("Average value = %f\n", average);
                break;
            case 6:
                printf("Saving data to the file\n\n");
                if (!saveArrayToFile(array,size)){
                    printf("Array saved to the file\n\n");
                } else {
                    printf("Something went wrong...\n\n");
                }
                break;
            case 7 :
                displayFromFile(array,size);
                break;
            case 8 :
                deleteValues(array,&size);
                break;
            default:
                printf("Pick the right number\n");
        }
    }
    while(option !=0);
    printf("THE END\n");
    free(array);
    return 0;
}

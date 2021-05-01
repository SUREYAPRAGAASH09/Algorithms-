#include<stdio.h>

int main()
{
    int Arr[9] = {169, 14, 13, 11, 6, 3, 2, 1, 9};
    //int Arr[5] = {64, 25, 12, 22, 11};
    int loopMaintainer, iterator, lenght, temp, sortUpto;

    lenght = sizeof(Arr)/sizeof(Arr[0]);
    
    printf("Sorting using bubble Sort Algorithm");
    printf("\n Lenght of the Array : %d", lenght);
    printf("\n Before Sorting : ");
    for ( loopMaintainer=0; loopMaintainer < lenght; loopMaintainer++) printf("%d \t", Arr[loopMaintainer]);
    
    sortUpto = lenght;

    for (loopMaintainer=0; loopMaintainer < lenght; loopMaintainer++)
    {
        for (iterator=0; iterator < sortUpto; iterator++)
        {
            if (Arr[iterator] > Arr[iterator + 1]) 
            {
                temp = Arr[iterator + 1];
                Arr[iterator + 1] = Arr[iterator];
                Arr[iterator] = temp;
            }
        }
        sortUpto = sortUpto - 1;
    }

    printf("\n After Sorting : ");
    //lenght = sizeof(Arr)/sizeof(Arr[0]);
    for (loopMaintainer=0; loopMaintainer < lenght; loopMaintainer++) printf("%d \t", Arr[loopMaintainer]);
    
    return 0;
}

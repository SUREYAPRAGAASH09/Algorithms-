#include<stdio.h>

int main()
{
    int Arr[9] = {17, 14, 13, 11, 6, 3, 2, 1, 9};; 
    //int Arr[5] = {64, 25, 12, 22, 11};
    int loopMaintainer, iterator, NextEle, lenght, temp, sortUpto;

    lenght = sizeof(Arr)/sizeof(Arr[0]);
    
    printf("Sorting using Bubble Sort Algorithm ");
    printf("\n Lenght of the Array : %d", lenght);
    printf("\n Before Sorting : ");
    for ( loopMaintainer=0; loopMaintainer < lenght; loopMaintainer++) printf("%d \t", Arr[loopMaintainer]);
    
    sortUpto = lenght;

    for (loopMaintainer=0; loopMaintainer < lenght; loopMaintainer++)
    {
        for (iterator=0; iterator < sortUpto; iterator++)
        {
            NextEle = iterator + 1;
            if (Arr[iterator] > Arr[NextEle])
            {
                temp = Arr[NextEle];
                Arr[NextEle] = Arr[iterator];
                Arr[iterator] = temp;  
            }
        }
        sortUpto = sortUpto - 1;
    }

    printf("\n After Sorting : ");

    for (loopMaintainer=0; loopMaintainer < lenght; loopMaintainer++) printf("%d \t", Arr[loopMaintainer]);
    
    return 0;
}

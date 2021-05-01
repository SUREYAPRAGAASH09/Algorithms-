#include<stdio.h>
void swap(int Arr[], int i, int j)
{
    int temp = 0;
    temp = Arr[i];
    Arr[i] = Arr[j];
    Arr[j] = temp;
}
int main()
{
    int Arr[9] = {169, 14, 13, 11, 6, 3, 2, 1, 9};
    int unSortedIterator, sortedIterator, temp, lenght, iterator;
    
    lenght = sizeof(Arr)/sizeof(Arr[0]);
    
    printf("Sorting using insertion Sort Algorithm");
    printf("\n Lenght of the Array : %d", lenght);
    printf("\n Before Sorting : ");
    for ( iterator = 0; iterator < lenght; iterator++) printf("%d \t", Arr[iterator]);
    
    for (unSortedIterator = 1; unSortedIterator < lenght; unSortedIterator++)
        for (sortedIterator = 0; sortedIterator < unSortedIterator; sortedIterator++)
            if (Arr[sortedIterator] > Arr[unSortedIterator]) 
                swap(Arr, unSortedIterator, sortedIterator);            
    
    printf("\n After Sorting : ");
    for (iterator = 0; iterator < lenght; iterator++) printf("%d \t", Arr[iterator]);
    
    return 0;
}

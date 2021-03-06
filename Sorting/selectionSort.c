#include<stdio.h>

int main()
{
    int Arr[9] = {17, 14, 13, 11, 6, 3, 2, 1, 9};
    int i,j,jIndex, lenght, smallEle, temp;

    i = j = jIndex = 0;
    lenght = sizeof(Arr)/sizeof(Arr[0]);
    
    printf("Sorting using Selection Sorting Algorithm");
    printf("\n Lenght of the Array : %d", lenght);
    printf("\n Before Sorting : ");

    for (i=0;i<lenght;i++)
    {
        printf("%d \t", Arr[i]);
    }

    for (i=0;i<lenght-1;i++)
    {
        smallEle = Arr[i];
        jIndex = -1;
        for (j=i+1; j<lenght;j++)
        {
            if (smallEle > Arr[j])
            {
                smallEle = Arr[j];
                jIndex = j;
            }
        }

        if (jIndex >= 0 )
        {
            temp = Arr[jIndex];
            Arr[jIndex] = Arr[i];
            Arr[i] = temp;  
        }
    }

    printf("\n After Sorting : ");

    for (i=0;i<lenght;i++)
    {
        printf("%d \t", Arr[i]);
    }

    return 0;
}

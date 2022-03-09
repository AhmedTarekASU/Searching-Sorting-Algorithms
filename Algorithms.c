int jumpSearch(int const *array, int const *arraySize, int const *RequiredElement)
{
    int jumpSize = sqrt(*arraySize); //include math.h header file
    for(int i = 0; i<*arraySize; i+=(jumpSize-1))
    {
        if(array[i]==*RequiredElement)
            return i;
        else if(array[i]>*RequiredElement)
        {
            int j=i;
            while(j>(i-(jumpSize-1)))
            {
                j--;
                if(array[j]==*RequiredElement)
                    return j;
            }
            break;
        }
    }
    return -1; //Element Does Not Exist

}

void insertionSort(int *array, int const *arraySize)
{
    int i,key,j;
    for(i=1; i<*arraySize; i++)
    {
        key = array[i];
        j = i-1;
        while(array[j]>key && j>=0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

void selectionSort(int *array, int const *arraySize)
{
    int i,j,Min_Idx;
    for(i=0; i<*arraySize-1; i++)
    {

        for(j=i+1; j<*arraySize; j++)
        {
            Min_Idx = i;
            if(array[j]<array[Min_Idx])
                Min_Idx = j;
            int temp = array[i];
            array[i] = array[Min_Idx];
            array[Min_Idx] = temp;
        }
    }
}

int binarySearch(int *array, int const *arraySize, int const *requiredNumber)
{
    int left = 0;
    int right = *arraySize - 1;
    while(left<=right)
    {
        int midPoint = (left+right)/2;
        if(array[midPoint]==*requiredNumber)
            return midPoint;
        else if(*requiredNumber < array[midPoint])
            right = midPoint - 1;
        else
            left = midPoint + 1;
    }
    return -1;
}
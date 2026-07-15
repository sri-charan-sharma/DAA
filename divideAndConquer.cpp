#include <iostream>
using namespace std;

void MaxMin(int arr[], int i, int j, int &max, int &min)
{
    if(i == j)
    {
        max = min = arr[i];
        return;
    }

    if(i == j - 1)
    {
        if(arr[i] > arr[j])
        {
            max = arr[i];
            min = arr[j];
        }
        else
        {
            max = arr[j];
            min = arr[i];
        }
        return;
    }

    int mid = (i + j) / 2;

    int max1, min1, max2, min2;

    MaxMin(arr, i, mid, max1, min1);
    MaxMin(arr, mid + 1, j, max2, min2);

    max = (max1 > max2) ? max1 : max2;
    min = (min1 < min2) ? min1 : min2;
}

int main()
{
    int max, min;
    int arr[] = {1,4,2,3,5,6};

    MaxMin(arr, 0, 5, max, min);

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;

    return 0;
}
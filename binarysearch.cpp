#include <iostream>
using namespace std;

int BinarySearch(int arr[], int key, int l, int r){
    if(l>r){
        return -1;
    }

    else{
        int mid = l + (r-l)/2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] > key){
            return BinarySearch(arr, key, l, mid);
        }

        else if(arr[mid] < key){
            return BinarySearch(arr, key, mid + 1, r);
        }
    }

    if(BinarySearch(arr, key, l, r) == -1){
        cout << "no.";
        return -1;
    }

    else{
        cout << "yes.";
        return 0;
    }

}

int main(){
    int arr[5] = {1,2,3,4,5,};
    int ans = BinarySearch(arr, 3, 0, 4);

    if(ans == -1){
        cout << "no.";
    }

    else{
        cout << "yes.";
    }
}
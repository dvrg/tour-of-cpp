#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int x;
    cout << "Masukan data yg dicari : \n";
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);
   (result == -1)? cout<<"Element tidak ditemukan"
                 : cout<<"Element ditemukan pada index " <<result;
   return 0;
}

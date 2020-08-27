#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void swap(char *xp, char *yp)
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSortAscending(string arr, int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}

void bubbleSortDescending(string arr, int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] < arr[j+1])
        {
          swap(&arr[j], &arr[j+1]);
          swapped = true;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}
/* Function to print an array */
void printArray(string arr, int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    string arr;
    int n;
    bool start = true;
    while (start != false){
    int choice;
    cout << "*******************************\n";
    cout << " 1 - inputkan text.\n";
    cout << " 2 - urutkan ascending.\n";
    cout << " 3 - urutkan descending.\n";
    cout << " 4 - keluar.\n";
    cout << " masukan pilihan dan tekan enter: ";

    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Masukan Data Kata:";
        cin >> arr;
        n = arr.length();
      break;
      case 2:
        bubbleSortAscending(arr, n);
        printf("Ascending Sorted Array: \n");
        printArray(arr, n);
        break;
      case 3:
        bubbleSortDescending(arr, n);
        printf("Descending Sorted Array: \n");
        printArray(arr, n);
        break;
      case 4:
        cout << "Program berakhir.\n";
        start =  false;
        break;
      default:
      cout << "Pilihan tidak ditemukan. \n";
      cout << "Pilih lagi.\n";
      cin >> choice;
      break;
    }
  }
    return 0;
}

#include <iostream>
#include <algorithm>
Using namespace std;

Class SortAnalyser {
Public:
    Void bubbleSort(int arr[], int n, long long& counter) {
        For (int I = 0; I < n – 1; i++) {
            For (int j = 0; j < n – 1 – I; j++) {
                Counter++; // count comparison
                If (arr[j] > arr[j + 1])
                    Swap(arr[j], arr[j + 1]);
            }
        }
    }

    Void selectionSort(int arr[], int n, long long& counter) {
        For (int I = 0; I < n – 1; i++) {
            Int minIndex = I;
            For (int j = I + 1; j < n; j++) {
                Counter++; // count comparison between arr[j] and arr[minIndex]
                If (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            If (minIndex != i) {
                Swap(arr[i], arr[minIndex]);
            }
        }
    }

    Void insertionSort(int arr[], int n, long long& counter) {
        For (int I = 1; I < n; i++) {
            Int key = arr[i];
            Int j = I – 1;
            While (j >= 0) {
                Counter++; // count comparison between arr[j] and key
                If (arr[j] > key) {
                    Arr[j + 1] = arr[j];
                    j--;
                } else {
                    Break; // comparison evaluated to false; position found
                }
            }
            Arr[j + 1] = key;
        }
    }
};

// Helper: copy array

Void copyArr(int src[], int dst[], int n) { for(int i=0;i<n;i++) 

Dst[i]=src[i]; }

// Helper: print array

Void printArr(int a[], int n) { for(int i=0;i<n;i++) cout<<a[i]<<(i<n-1?” 

“:”\n”); }

int main() {
 SortAnalyser sa;
 long long c;
 int tmp[10];
 // -- Random array --
 int rand10[] = {64,34,25,12,22,11,90,45,7,80};
 int n=10;
 c=0; copyArr(rand10,tmp,n); sa.bubbleSort(tmp,n,c);
 cout<<"TC1 bubble sorted: "; printArr(tmp,n);
 cout<<"TC1 comparisons: "<<c<<endl;
 c=0; copyArr(rand10,tmp,n); sa.selectionSort(tmp,n,c);
 cout<<"TC2 selection sorted: "; printArr(tmp,n);
 cout<<"TC2 comparisons: "<<c<<endl;
 c=0; copyArr(rand10,tmp,n); sa.insertionSort(tmp,n,c);
 cout<<"TC3 insertion sorted: "; printArr(tmp,n);
 cout<<"TC3 comparisons: "<<c<<endl;
 // -- Already sorted --
 int sorted10[] = {1,2,3,4,5,6,7,8,9,10};
 c=0; copyArr(sorted10,tmp,n); sa.bubbleSort(tmp,n,c);
 cout<<"TC4 bubble on sorted, comparisons: "<<c<<endl;
 c=0; copyArr(sorted10,tmp,n); sa.insertionSort(tmp,n,c);
 cout<<"TC5 insertion on sorted, comparisons: "<<c<<endl;
 // -- Reverse sorted --
 int rev10[] = {10,9,8,7,6,5,4,3,2,1};
 c=0; copyArr(rev10,tmp,n); sa.bubbleSort(tmp,n,c);
 cout<<"TC6 bubble on reverse, comparisons: "<<c<<endl;
 c=0; copyArr(rev10,tmp,n); sa.insertionSort(tmp,n,c);
 cout<<"TC7 insertion on reverse, comparisons: "<<c<<endl;
 return 0;
}

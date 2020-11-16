/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	date: 07/12/2017
	description: Selection Sort		*/

#include <iostream>
#include <chrono>
void selectionSort(int arr[], int size);
void selectionSort_rec(int arr[], int size, int minElement=0, int minIndex=0, int i=0, int j=0, int temp=0);
void printArray(int arr[], int size);
using namespace std;

int main(){
    int arr[] = {5, 64, 34, 25, 12, 22, 11, 90, 2, 3, 2, 2, 2};
    int sizeOfArr =sizeof(arr)/sizeof(arr[0]);
    chrono::time_point<chrono::system_clock> start;
    chrono::time_point<chrono::system_clock> end;
    start = chrono::system_clock::now();
    selectionSort(arr, sizeOfArr);
    end = chrono::system_clock::now();
    cout << "Normaler selectionSort: nanoseconds: " << chrono::duration_cast<chrono:: nanoseconds>(end - start).count() << endl;
    printArray(arr, sizeOfArr);

    int arr2[] = {5, 64, 34, 25, 12, 22, 11, 90};
    sizeOfArr =sizeof(arr2)/sizeof(arr2[0]);
    start = chrono::system_clock::now();
    selectionSort_rec(arr2, sizeOfArr);
    end = chrono::system_clock::now();
    cout << "Rekursiv selectionSort: nanoseconds: " << chrono::duration_cast<chrono:: nanoseconds>(end - start).count() << endl;
    printArray(arr2, sizeOfArr);
}

//---------------------------
void selectionSort(int arr[], int size){
	int temp;
	int minIndex;
	for(int i=0; i < size; i++){
		minIndex = i;
		for(int j=i; j < size; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

}
//---------------------------
void selectionSort_rec(int arr[], int size, int minElement, int minIndex, int i, int j, int temp){
	if(j==0){minElement = arr[i];}
	if(i == size){
        return;
    }else if(j == size){
	temp = arr[i];
	arr[i] = minElement;
	arr[minIndex] = temp;
	i += 1;
        j = i;
        return selectionSort_rec(arr, size, minElement, minIndex, i , j);
    }else{
        if(arr[j] < minElement){
		minElement = arr[j];
		minIndex = j;
        }
        j += 1;
        return selectionSort_rec(arr, size, minElement, minIndex, i, j);
    }

}
//---------------------------
void printArray(int arr[], int size){              //Gibt das Array aus
    for(int i{}; i < size; i++){
        cout << arr[i] << "   ";
    }
    cout << endl;
}

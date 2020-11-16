/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	description: Sorts
	date: 11/01/2018			*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void checkCmd(int argc, char** argv);
void bubble(int arr[], int size);
void selection(int arr[], int size);
void insertion(int arr[], int size);
const int lenArr(string fn);
void buildList(string fn, int* arr,const int size);
void printArray(const int size, int arr[]);
void writeArray(string fn, const int size, int arr[]);

int main(int argc, char* argv[]){
	try{
		checkCmd(argc, argv);
	}catch(logic_error& e){
		cout << e.what() << endl;
		return 1;
	}
	string sort = argv[1];
	string fn = "numbers.txt";
	string des = "sorted_numbers.txt";
	const int len = lenArr(fn);
	int arr[len];
	buildList(fn, arr, len);
	if(sort == "bubble"){
		bubble(arr, len);
	}
	if(sort == "selection"){
		selection(arr, len);
	}
	if(sort == "insertion"){
		insertion(arr, len);
	}
	writeArray(des, len, arr); 
}
//-------------------------
//------------------------
void checkCmd(int argc, char** argv){
	string zw;
	if(argc != 2){
		throw logic_error("Bitte beachten sie eine Eingabe der Form: ./programmname [sort]");
	}
	zw = argv[1];
	if(zw != "bubble" and zw != "selection" and zw != "insertion"){
		throw logic_error("Sie haben einen ungültigen Sortieralgorithmus gewählt! Bitte wählen Sie, -bubble -selection -insertion ,aus");
	}
}
//---------------------------
void bubble(int arr[], int size){
	bool changed;
	while(size > 0) {
		changed = false;
		for(int i = 0; i + 1 < size; i++) {
			if(arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				changed = true;
			}
		}
		if(!changed) return;
		size--;	
	}	
}
//--------------------------
void selection(int arr[], int size){
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
//--------------------------
void insertion(int arr[], int size){
	int j, temp;
	for(int i=0; i < size; i++){
		j = i;
	while(j > 0 && arr[j] < arr[j-1]){
		temp = arr[j];
		arr[j] = arr[j-1];
		arr[j-1] = temp;
		j--;
	}
	}
}
//---------------------------
const int lenArr(string fn){
	ifstream src;
	src.open(fn);
	int i = 0;
	string s;
	while(!src.eof()){
		getline(src, s);
		i += 1;
	}
	src.close();
	const int len = i-1;
	return len;
}
//--------------------------
void buildList(string fn, int* arr,const int size){
	ifstream src;
	src.open(fn);
	int j =0;
	string zws;
	int zw;
	while(j < size){
		getline(src, zws);
		zw = stoi(zws);
		arr[j] = zw;
		j += 1;
	}		
	src.close();
}
//--------------------------
void printArray(const int size, int arr[]){
	for(int i=0; i < size; i++){
		cout << arr[i] << endl;
	}
}
//------------------------
void writeArray(string fn, const int size, int arr[]){
	ofstream dest;
	dest.open(fn);
	int i=0;
	while(i < size){
		dest << arr[i] << endl;
		i += 1;
	}
	dest.close();

}

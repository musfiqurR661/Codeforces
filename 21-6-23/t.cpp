#include<bits/stdc++.h>
using namespace std;
int findMin(int array[], int size, int start){
    int min=array[start];
    int index=start;
    for(int i=start;i<size;i++){
        if(min>array[i]){
            min=array[i];
            index=i;
        }
    }

    return index;
}

void selectionSort(int array[], int size){
    int currentPosition=0;
    int minIndex;

    for(int i=0;i<size-1;i++){
        minIndex=findMin(array,size,i);

        swap(array[minIndex],array[currentPosition]);
        currentPosition++;
    }
}

#include <iostream>
using namespace std;
int n;
int arr[100];
void arraycreation(){
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){ 

        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    // hello
}
void swap(int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void display(){
    cout<<"The elements of the array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(){
    bool sorted=0;
    for(int i=0;i<n-1;i++){
        sorted=1;
        cout<<"working on Pass "<<i+1<<endl;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(j,j+1);
                sorted=0;
            }
        }
    if(sorted==1){
        cout<<"The array is already sorted"<<endl;
        return;
    }
    }
}
int main(){
    arraycreation();
    cout<<"The array before sorting: ";
    display();
    cout<<"The array after sorting: ";
    bubblesort();
    display();
    return 0;

    
}
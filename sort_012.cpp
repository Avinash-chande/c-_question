#include<iostream>
#include<string>
using namespace std; 

 void printarray (int arr[] ,int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 void sortone (int arr[] ,int n){

    int low =0;
    int mid=0;                                             //dutch flag algo
    int high=n-1;
    while (mid<=high)
    {
        if ((arr[mid]==0) && (arr[low]==1))
        {
           swap(arr[mid] ,arr[low]);
           mid++;
           low++;
        }
        else if ( arr[mid]==1){
            mid++;
        }
        else {
            swap (arr[mid] ,arr[high]);
            high--;
        }
    }
 }

int main (){

 int arr[8]={1,2,1,2,0,0,0,1};
        sortone(arr,8);
        printarray(arr,8);
        
 return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;

// int binarysearch( int arr[] , int size , int key) {
//         int start=0;
//         int end=size-1;
//         int mid =start + (end-start)/2 ;

//         while (start<=end)
//         {
//                 if (arr[mid] ==key)
//                 {
//                        return mid;
//                 }
//                  else if (key >  arr[mid])
//                  {                                                      //binary search 
//                         start=mid+1;
//                  }
//                 else {
//                         end=mid-1;
//                 }
//                         mid=start +(end-start)/2 ;
//         }
//         return -1;
// }

// int main(){

//         int even[6] ={2,3,4,5,6,8};
//         int odd[5]={2,3,4,5,6};

//         int evenindex = binarysearch( even ,6 , 4) ;
//         int oddindex = binarysearch( odd ,  5 ,3 ) ;

//     cout<<"the indes of 4 is :"<<evenindex;
//     cout<<endl;
//     cout<<"the indes of 3 is :"<<oddindex;


// return 0;
// }   


#include<iostream>
#include<string>
using namespace std;                                                             //binary sorted 

int firstocc( int arr[] , int n ,int key){

         int s=0 , e=n-1 ;
         int mid = s+ (e-s)/2;
         int ans=-1;

        while (s<=e){

         if (arr[mid]==key)
         {
                ans=mid ;
                e=mid-1;
         }
         else if(arr[mid]<key)
         {
                s=mid+1;
         }
         else if ( arr[mid]>key)
         {
                e=mid-1;
            }
                   mid=s+(e-s)/2;
       }
      return ans;
   }


int lastocc(int arr[] , int n ,int key){

         int s=0 , e=n-1 ;
         int mid = s+ (e-s)/2;
         int ans=-1;

        while (s<=e){

         if (arr[mid]==key)
         {
                ans=mid ;
                s=mid+1;
         }
         else if(arr[mid]<key)
         {
                s=mid+1;
         }
         else if ( arr[mid]>key)
         {
                e=mid-1;
            }
                   mid=s+(e-s)/2;
       }
      return ans;
   }
                  
int main(){
  
 int arr[13] ={ 1,2,3,3,3,3,3,3,3,3,3,3,5};

        

 cout<<"the first ocurness of 3 in index :"<<firstocc(arr , 15,3)<<endl;
 cout<<"the last ocurness of 3 in index :"<<lastocc(arr , 15 ,3)<<endl;


return 0;
}
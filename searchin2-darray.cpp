#include<iostream>
using namespace std;
int search2darray(int arr[][4],int target,int row,int col)
{
           int start=0;
           int end=row*col-1;
           while(start<=end)
           {
               int mid=(start+end)/2;
               int element=arr[mid/col][mid%col];
                 if(element==target)
                 return element;
                 else if(element<target)
                 start=mid+1;
                 else
                 end=mid-1;
           }
           return 0;
}
int main()
{
         int arr[3][4];
          cout<<"enter array elemnets row wise"<<endl;
     for(int i=0;i<3;i++)
     {
           for(int j=0;j<4;j++)
           {
               cin>>arr[i][j];
           }
     }
     int target;
     cout<<"enter value you want to search"<<endl;
     cin>>target;
     int ele=search2darray(arr,target,3,4);
     cout<<ele<<endl;
}
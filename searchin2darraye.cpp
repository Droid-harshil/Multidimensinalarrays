#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target)
{
    for(int i=0;i<3;i++)
     {
           for(int j=0;j<4;j++)
           {
               if(arr[i][j]==target)
               return 1;
           }
           
     }
     return 0;

}
int main()
{
    //creating 2 - array
    int arr[3][4];
    //taking input row wise
    //   cout<<"enter array elemnets row wise"<<endl;
    //  for(int i=0;i<3;i++)
    //  {
    //        for(int j=0;j<4;j++)
    //        {
    //            cin>>arr[i][j];
    //        }
    //  }
     //taking input coloum wise
     cout<<"enter array elemnets coloum wise"<<endl;
     for(int i=0;i<4;i++)
     {
           for(int j=0;j<3;j++)
           {
               cin>>arr[j][i];
           }
     }
     for(int i=0;i<3;i++)
     {
           for(int j=0;j<4;j++)
           {
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
     }
     int target;
     cout<<"enter non to be searched"<<endl;
     cin>>target;
     if(ispresent(arr,target))
     {
         cout<<" element found"<<endl;
     }
     else cout<<"not found"<<endl;

}
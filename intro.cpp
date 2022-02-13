#include<iostream>
using namespace std;
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

}
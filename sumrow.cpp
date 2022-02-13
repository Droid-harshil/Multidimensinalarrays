 #include<iostream>
using namespace std;
void sumrowwise(int arr[][3])
{
    int sum=0;
        for(int i=0;i<3;i++)
     { int sum=0;
           for(int j=0;j<3;j++)
           {
               sum=sum+arr[i][j];
           }
           cout<<"sum = "<<sum<<endl;
         
     }
}

int main()
{
 //creating 2 - array
    int arr[3][3];
    //taking input row wise
      cout<<"enter array elemnets row wise"<<endl;
     for(int i=0;i<3;i++)
     {
           for(int j=0;j<3;j++)
           {
               cin>>arr[i][j];
           }
     }
     cout<<"array elements are"<<endl;
       for(int i=0;i<3;i++)
     {
           for(int j=0;j<3;j++)
           {
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
     }
    sumrowwise(arr);
    
}

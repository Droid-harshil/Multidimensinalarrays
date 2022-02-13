 #include<iostream>
using namespace std;
int maxsumindex(int arr[][3])
{
    int maxi=INT32_MIN;
    int rowindex=-1;
     for(int i=0;i<3;i++)
     {    int sum;
           for(int j=0;j<3;j++)
           {
               sum+=arr[i][j];
           }
           if(sum>maxi)
           {
               maxi=sum;
               rowindex=i;
           }
     }
     return rowindex;

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
    
    cout<<"rowindex with max sum is ="<<maxsumindex(arr);
}

#include <iostream>
void sortarr(int arr1[],int sizo)
{
    for(int i=0;i<sizo;i++)
    {
        for (int j=i+1;j<sizo;j++)
        {
            if (arr1[i]>arr1[j]) {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
}
using namespace std;
int main()
{
  int n,m; 
  cin>>n>>m;
  int arr[m];
  for (int i=0;i<m;i++)
  {
      cin>>arr[i];
  }
  sortarr(arr,m);
  int bestgift=100000000;
  for(int i=n-1;i<m;i++)
  {
      if ((arr[i]-arr[i-n+1])<bestgift)
      {
          bestgift=(arr[i]-arr[i-n+1]);

      }
  }
  cout<<bestgift<<endl;
}
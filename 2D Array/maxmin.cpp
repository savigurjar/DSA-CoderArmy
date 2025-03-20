#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
      int maxi = INT16_MIN;
    int mini = INT16_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(arr[i][j]>maxi)
           {
            maxi=arr[i][j];
           }
           if(arr[i][j]<mini)
           {
            mini=arr[i][j];
           }
         
        }
    }
  
    cout<<"max element "<<maxi<<" min element "<<mini<<endl;

    return 0;
}
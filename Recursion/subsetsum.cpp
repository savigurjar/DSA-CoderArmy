<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;
void print(int arr[],int index,int n,int sum,vector<int>&ans)
{
    if(index==n)
    {
        // cout<<sum<<endl;
        ans.push_back(sum);
        return;
    }
    // not included
    print(arr,index+1,n,sum,ans);

    // included
    print(arr,index+1,n,sum+arr[index],ans);
}
int main()
{
int arr[] = {1,2,3,4};
vector<int>ans;
 print(arr,0,4,0,ans);
 for(int i=0;i<ans.size();i++)
 {
    cout<<ans[i]<<" ";
 }
=======
#include <iostream>
#include <vector>
using namespace std;
void print(int arr[],int index,int n,int sum,vector<int>&ans)
{
    if(index==n)
    {
        // cout<<sum<<endl;
        ans.push_back(sum);
        return;
    }
    // not included
    print(arr,index+1,n,sum,ans);

    // included
    print(arr,index+1,n,sum+arr[index],ans);
}
int main()
{
int arr[] = {1,2,3,4};
vector<int>ans;
 print(arr,0,4,0,ans);
 for(int i=0;i<ans.size();i++)
 {
    cout<<ans[i]<<" ";
 }
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}
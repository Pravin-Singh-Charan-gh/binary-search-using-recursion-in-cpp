#include <iostream>
using namespace std;
int bs_helper(int *arr,int &s,int &e,int &key)
{
    int mid=s+(e-s)/2;
    if(s>e)return -1;
    if(arr[mid]==key)return mid;
    else if(arr[mid]>key)e=mid-1;
    else if(arr[mid]<key)s=mid+1;

    return bs_helper(arr,s,e,key);
}
int bs(int arr[],int &n,int &key)
{
    int s=0,e=n-1,mid=s+(e-s)/2;
    return bs_helper(arr,s,e,key);
}
int main()
{
    int n;
    cout<<"size : ";
    cin>>n;
    int *arr=new int[n];
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Enter key : ");
    int key;
    scanf("%d",&key);

    cout<<bs(arr,n,key);
    return 0;
}

#include<iostream>
using namespace std;

template<class p>
void sort(p arr[],p n)
{
cout<<"enter element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

cout<<"array before sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
for(int i=0;i<n-1;i++)
{
    int small =i;
    for(int j=i+1;j<n;j++)
    {
        if (arr[j]<arr[small])
        small=j;
    }
    p temp = arr[small];
    arr[small] =arr[i];
    arr[i]=temp;

}
    cout<<"sorted array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int arri[n];
    float arrf[n];
    cout<<"for int"<<endl;
    sort(arri,n);
    cout<<"for float"<<endl;
    sort(arrf,float (n));
    cout<<endl;
    return 0;
}
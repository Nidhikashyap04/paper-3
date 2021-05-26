#include <iostream>

using namespace std;

void rotateArray(int arr[],int n,int d)
{
    d = d%n;

    for(int i=0;i<d;i++)
    {
        int a = arr[0];
        for(int j=1;j<n;j++)
        {
            arr[j-1] = arr[j];
        }
        arr[n-1] = a;
    }
}

int main()
{
     int n;
     cout<<"Enter the size of array"<<endl;
    cin >> n;

    int* arr = new int[n];
     cout<<"array Elements"<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int d;
    cout<<"Enter the degree of rotation"<<endl;
    cin>>d;
    rotateArray(arr,n,d);
    cout<<"rotated array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[] arr;
}

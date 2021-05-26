#include <iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr1[], int arr2[], int n1, int n2)
{
    set<int> hs;

    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);

    for (int i = 0; i < n2; i++)
        hs.insert(arr2[i]);

    set<int>::iterator it;
    for (it = hs.begin(); it != hs.end(); it++)
    {
        cout << *it<<" ";
    }
    cout << endl;
}

void printIntersection(int arr1[], int arr2[], int n1,
                       int n2)
{
    set<int> hs;

    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);

    for (int i = 0; i < n2; i++)

        if (hs.find(arr2[i]) != hs.end())
            cout << arr2[i] << " ";
}

int main()
{
    int n,m;
    cout<<"Enter the size of 1st Array"<<endl;
    cin>>n;
    cout<<"Enter the size of second Array"<<endl;
    cin>>m;
    int arr1[10000];
    int arr2[10000];
    cout<<"Enter elements of 1st array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second Array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }


    cout<<"Union is:"<<endl;
    printUnion(arr1,arr2,n,m);
    cout<<"Intersection is"<<endl;
    printIntersection(arr1,arr2,n,m);
}

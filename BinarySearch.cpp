#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[] , int low , int high , int key);
int main()
{
    int n{};
    cout << "enter the no of elements\n";
    cin >> n;
    int arr[n];
    cout << "enter the elements\n";
    for(int i=0 ; i < n ; i++)
    cin >> arr[i];
    int key{};
    cout << "enter the element to search\n";
    cin >> key;
    int index = BinarySearch(arr, 0 , n-1 , key);
    if(index == -1)
    cout << "element is not present in the array" << endl;
    else
    cout << "element is available at index = " << index << endl;
    return 0;
}

int BinarySearch(int arr[] , int low , int high , int key)
{
    if(low<=high)
    {
    int mid = (low+high)/2;
    if(arr[mid] == key)
    return mid;
    if(key > arr[mid])
    return BinarySearch(arr ,mid+1 , high,key);
    if(key < arr[mid])
    return BinarySearch(arr ,low , mid-1,key);
    }

    return -1;
}
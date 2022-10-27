#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int m){
    int start=0;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(mid==m){
            return mid;
        }else if(mid<m){
            end= mid - 1;
        }else if(mid>m){
            start= mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array in ascending order"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }

    cout<<"Enter value you want to search"<<endl;
    int m;
    cin>>m;
    cout<<binarySearch(arr,n,m)<<endl;
    return 0;
}

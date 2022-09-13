// Complexity of this prblem is O(n) & Space Complexity is O(1) or O(n)

void Heapify(long *arr,int n,int i){
     long largest=i;
     long left=2*i+1;
     long right=2*i+2;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    // checking the parent Node of its right position
    if(largest!=i){
        swap(arr[largest],arr[i]);
        Heapify(arr,n,largest);
    }
}
void minHeapToMaxHeap(long *arr, int n)
{
   for(int i=n/2;i>=0;i--){
           Heapify(arr,n,i);
       }
}

// Second varient of its problem
#include<bits/stdc++.h>
using namespace std;
class Solution {
 void Heapify(int *arr,int n,int i){
     int largest=i;
     int left=2*i+1;
     int right=2*i+2;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    // checking the parent Node of its right position
    if(largest!=i){
        swap(arr[largest],arr[i]);
        Heapify(arr,n,largest);
    }
}
public:
    vector<int> convertToMaxHeap(vector<int>& arr) {
        int n=arr.size();
        int Arr[n];
        int j=0;
        for(int i:arr){
            Arr[j++]=i;
        }
   	    for(int i=n/2;i>=0;i--){
           Heapify(Arr,n,i);
       }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(Arr[i]);
        }
        return ans;
    }
};

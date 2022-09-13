 #include<bits/stdc++.h>

 using namespace std;

// Building Heapify algorihtm
// Time Complexity is O(n)
void Heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
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
int main(){
    int n=6;
   int arr[6]={-1,54,53,55,52,50};
   for(int i=n/2;i>0;i--){
       Heapify(arr,n,i);
   }
   for(int i=1;i<n;i++){
       cout<<arr[i]<<" ";
   }
    
}

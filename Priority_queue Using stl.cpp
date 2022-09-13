 #include<bits/stdc++.h>


 using namespace std;
 int main(){
    // creating Max-> Heap
     priority_queue<int>pq;
     pq.push(4);
     pq.push(5);
     pq.push(8);
     cout<<pq.top()<<endl;
     // creating min Heap
     priority_queue<int,vector<int>,greater<int> >minpq;
     minpq.push(4);
     minpq.push(5);
     minpq.push(8);
     cout<<minpq.top()<<endl;

 }

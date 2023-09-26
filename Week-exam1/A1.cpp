#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
    queue <int> q1;
    
   while(t--){
    int n;
    cin>>n;
   deque <int> d;
    for(int i=n;i>0;i--){
     d.push_front(i);
    //d.push_back(i);
    int counter = i;
    while(counter--){
        
        d.push_front(d.back());

        d.pop_back();
    }
}
for(auto i : d){
cout<<i<<" ";
}
cout<<endl;

 }

}
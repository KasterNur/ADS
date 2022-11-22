#include <iostream>

#include <cmath>

#include <list>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[6] = {7, 8, 10, 4, 2, -1};

    int k;

   

    list<int> link;

    for (int i = 0; i < n; i++)
    {

       // int offset = abs(abs(arr[i]) - k);
       int val;
        cin>>val;
        link.push_front(val);
    }

     cin >> k;//find the element 
    int ans = 10;
     int index=0;
     int found_index=0;
    for (list<int>::iterator it = link.begin(); it != link.end(); it++)
    {
        
        int offset = abs(abs(*it) - k);
        if (ans > offset){
            ans = *it;
            found_index=index;
        }
        index++;
    }

    cout << "the answer was:" << ans<<" the index is ="<<found_index;

    
}
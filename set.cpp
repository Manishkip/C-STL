// set functions in stl
#include <iostream>
#include<set>
using namespace std;

int main() {
    set<int>s;
   s.insert(5);
   s.insert(5);
   s.insert(5);
   s.insert(1);
   s.insert(6);
   s.insert(6);
   s.insert(0);
   s.insert(0);
   for(auto i: s){    //Does not prints the duplicates
       cout<<i<<" ";
   }
   cout<<endl;
   
   set<int> :: iterator it = s.begin();
   it++;
   s.erase(it);    //erases the first element since it++
   for(auto i: s){
       cout<<i<<" ";
   }
   cout<<"\n";
   
   cout<<s.count(5)<<endl;   //checks if element is present in set or not
   
   set<int> :: iterator itr = s.find(5);
   
   for(auto it = itr; it!= s.end(); it++){
       cout<<*it<<" ";
   }
   cout<<endl;
   
    
    

    return 0;
}

// map functions in stl
//map is a DS which stores data in key: value pairs
#include <iostream>
#include<map>
using namespace std;

int main() {
    map<int, string>m;  //created map of key: int and value: string
    m[1] = "Babbar";
    m[13] = "Kumar";
    m[2] = "Love";
    
    m.insert({5, "Bheem"});  //another method to insert into map
    
    cout<<"Before erase "<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;  //printing the key value pairs inserted in map
    }
    cout<<endl;
    
    cout<<"Finding 13 -> "<<m.count(13)<<endl;
    
    cout<<"After erase "<<endl;
    
    m.erase(13);
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    auto it = m.find(5);       
    for(auto i = it; i != m.end(); i++){
        cout<<(*i).first<<endl;
    }
    

    return 0;
}

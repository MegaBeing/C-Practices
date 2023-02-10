#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> mymap;
    // insert 
    // 1
    pair<string,int> p("abc",1);
    mymap.insert(p);
    // 2
    mymap["def"]=2;
   
    // access elements
    cout<<mymap["abc"]<<endl; // it gives zero if the value of the key is not defined

    cout<<mymap.at("abc")<<endl; // it throughs exception when no value exists in the key

    // check the key-value pair is present or not
    if(mymap.count("ghi")>0)
        cout<<"ghi"<<" is present"<<endl;
    else
        cout<<"ghi"<<" is not present"<<endl;
    
    // updating the keys 
    mymap["abc"]=20;
    cout<<mymap.at("abc")<<endl;

    // Size
    cout<<"Size:\t"<<mymap.size()<<endl;

    //erase
    cout<<"Erasing"<<endl;
    mymap.erase("def");
    cout<<"Size:\t"<<mymap.size()<<endl;

    return 0;

}
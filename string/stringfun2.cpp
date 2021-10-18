#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="vibhu pandey";
    cout<<s.append("Bye")<<endl;
    cout<<s.insert (3,"kk")<<endl;
    s.replace(0,12,"b");
    cout<<s<<endl;
    //s.erase();
    cout<<s<<endl;
    s.push_back('2');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    string v="Vibhu";
    s.swap(v);
    cout<<s<<endl;
    return 0;
}

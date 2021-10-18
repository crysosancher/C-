#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Vibhu Pandey"; 
    cout << s.length() << endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(50);
    cout<<s.capacity()<<endl;
    cout<<s.max_size()<<endl;//shows the max size of a compiler.
    s.clear();
    cout<<s.capacity()<<endl;
    if(s.empty())
    cout<<"The string is empty"<<endl;
    else 
    cout<<"The string is"<<s<<endl;
    return 0;
}
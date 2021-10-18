#include <iostream>
using namespace std;

int main() {
    string s,s1;
    cin>>s;
    cout<<s1.length()<<endl;
    for(int j=s.length()-1;j>=0;j--){
        s1.push_back(s[j]);
    }
    cout<<s1<<endl;
    cout<<s1.length()<<endl;
    return 0;
}
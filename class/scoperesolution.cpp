#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();              //constructor
    rectangle(int l,int b);//constructor
    rectangle(rectangle &r);//constructor
    int getlength();//accessor
    int getbreadth();//accessor
    void  setlength(int l);//mutator
    void setbreadth(int b);//mutator
    int area();//actual funtion
    int perimeter();//actual funtion
    bool issquare();//inquiry 
    ~rectangle();//destructor

};
int main()
{
    rectangle r1(10,8);
    cout<<"Area="<<r1.area()<<endl;
    if(r1.issquare())
    cout<<"yes"<<endl;
    else cout<<"No"<<endl;

}
rectangle::rectangle(){
    length=1;
    breadth=1;
}
rectangle::rectangle(int l,int b){
    length=l;
    breadth=b;
}
rectangle::rectangle(rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
int rectangle::getlength(){
    return length;
}
int rectangle::getbreadth(){
    return breadth;
}
void rectangle::setbreadth(int b){
    breadth=b;

}
void rectangle::setlength(int l){
    breadth=l;

}
int rectangle::area(){
    return length*breadth;
}
int rectangle::perimeter(){
    return 2*(length+breadth);
}
bool rectangle::issquare(){
    return length==breadth;
}
rectangle::~rectangle(){
    cout<<"rectangle destroyed";
}
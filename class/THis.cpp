#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int length,int breadth){
        this->length=length;//this .length=length;Here after this length is an object
        this->breadth=breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    rectangle r1(10,5);
    cout<<"area="<<r1.area();
}

#include <bits/stdc++.h>
#include<string>
using namespace std;
#define max 100
int main()
{
    char c;
    cout <<"Please enter the type of purchase"<<endl<<"'L'for laptops"<<endl<<"'D' for desktop";
    cin >> c;
    switch (c)
    {
    case 'L':{
                string name,add;
		int amt;
                float dis,final;
		cin.ignore();
		cout<<"Enter the address of customer"<<endl;
                getline (cin,add);
                cout<<"Enter the name of customer"<<endl;
                getline (cin,name);
		cout<<"Enter the amount of purchase";
                cin >> amt;
		
                
                

                if(amt>0 && amt<=25000)
                {
                    cout<<"Sorry the amount is less for eligible discount";
                }
                if(amt>25000 && amt<=57000)
                {
                    dis = (0.05/100)*amt;
                    final = amt-dis;
                    cout<<"Name of customer is:"<<name;
                    cout<<"Address of customer is:"<<add;
                    cout<<"Total amount to be paid:"<<final;
                }
                if(amt>57000 && amt<=100000)
                {
                    dis = (0.075/100)*amt;
                    final = amt-dis;
                    cout<<"Name of customer is:"<<name;
                    cout<<"Address of customer is:"<<add;
                    cout<<"Total amount to be paid:"<<final;
                }
                if(amt>100000)
                {
                    dis = (0.10/100)*amt;
                    final = amt-dis;
                    cout<<"Name of customer is:"<<name;
                    cout<<"Address of customer is:"<<add;
                    cout<<"Total amount to be paid:"<<final;
                }
             }
        
        break;
    
    default:
        break;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

void timeConversion(string s) {
    int h1= s[0]- '0';
    int h2= s[1]- '0';
    //cout<<h1<<h2;
    int hr=(h1*10)+(h2);
    if(s[8]=='P'){
        hr=hr+12;
        cout<<hr;
        for(int i=2;i<=7;i++){
            cout<<s[i];
            
        }
    }
    else if(s[8]=='A' && hr==12){
	    hr=00;
	     cout<<hr;
        for(int i=2;i<=7;i++){
            cout<<s[i];
            
        }


    }
    else{
        for(int i=0;i<=7;i++){
            cout<<s[i];
        }
    }
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    timeConversion(s);

    //fout << result << "\n";

    //fout.close();

    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// /*
//  * Complete the 'timeConversion' function below.
//  *
//  * The function is expected to return a STRING.
//  * The function accepts STRING s as parameter.
//  */

// void timeConversion(string str) {
//     // Get hours
//     int h1 = (int)str[1] -'0';
//     int h2 = (int)str[0] - '0';
//     int hh = (h2 * 10 + h1 % 10);
//     cout<<"h1="<<h1<<"h2="<<h2<<"hh"<<hh;
 
//     // If time is in "AM"
//     if (str[8] == 'A')
//     {
//         if (hh == 12)
//         {
//             cout << "00";
//             for (int i=2; i <= 7; i++)
//                 cout << str[i];
//         }
//         else
//         {
//             for (int i=0; i <= 7; i++)
//                 cout << str[i];
//         }
//     }
 
//     // If time is in "PM"
//     else
//     {
//         if (hh == 12)
//         {
//             cout << "12";
//             for (int i=2; i <= 7; i++)
//                 cout << str[i];
//         }
//         else
//         {
//             hh = hh + 12;
//             cout << hh;
//             for (int i=2; i <= 7; i++)
//                 cout << str[i];
//         }
//     }
// }

// int main()
// {
//     //ofstream fout(getenv("OUTPUT_PATH"));

//     string str;
//     getline(cin, str);

//     timeConversion(str);

//     //fout << result << "\n";

//     //fout.close();

//     return 0;
// }

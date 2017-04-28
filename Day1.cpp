#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
     int s1=0;
double s2=0.0;
string str;
cin>>s1;
cin>>s2;
getline(cin>>ws,str);
s1=s1+i;
s2=s2+d;
str=s+str;
cout<<s1<<endl;
cout<<fixed<<setprecision(1)<<s2<<endl;
cout<<str;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}

#include <iostream>
#include <algorithm> //begin and end functions are in this
#include <string>
using namespace std;
int main()
{
    // string str(5,'v'); //it will print 'v' for 5 times
    // cout<<str;
    //--------------------------------------------------------------
    // string str="VrajParekh";
    // cout<<str;
    //--------------------------------------------------------------
    // string str;
    // getline(cin, str); //if i am use cin then it will print only those characters who before the space
    // cout << str;
    //---------------------------------------------------------------
    // string str;
    // cin>>str;
    // cout<<endl<<str;
    //---------------------------------------------------------------
    // Two strings append
    // string s1="fam",s2="ily";
    // s1.append(s2);  //1st method
    // s1=s1+s2;       //2nd method
    // cout<<s1;

    // cout<<s1[0]<<' '<<s1[2]; //foe access the string members
    //---------------------------------------------------------------
    // string abc="varj is a good person";
    // abc.clear();  //for clear the string
    // cout<<abc;
    //---------------------------------------------------------------
    // string s1="abc";
    // string s2="abc";
    // cout<< s2.compare(s1); //s2-s1 //if s1 and s2 are equal then op is 0

    // if (!s1.compare(s2))  //!0=1 then it will run
    // {
    // cout<<"Strings are equal";
    // }
    //---------------------------------------------------------------
    // Empty function
    // s1.clear();
    // if (s1.empty())  //s1.empty()=0
    // {
    //     cout<<"String is empty";
    // }
    //---------------------------------------------------------------
    //Erase Function
    // string s1="vrajparekh"; //here 10th character is NULL

    // s1.erase(4,6); //str_name.erase(x,y) x=kaya num ni index thi char erase karva te num
    // cout<<s1;      // y=ketla char erase karva che em
    //---------------------------------------------------------------
    //Find function
    // cout<<s1.find("pa"); //4th index thi chalu thay che etle output 4
    //---------------------------------------------------------------
    // insert function
    // s1.insert(10,"isgoodperson");//(x,y) x=kaya number ni index ma insert karvu che te
    // cout<<s1;
    //---------------------------------------------------------------
    //length/size function
    // cout<<s1.length(); //cout<<s1.size();
    //---------------------------------------------------------------
    //SubString function
    // string s=s1.substr(4,6);//x=je index thi aagadni string joti hoy te number
    // cout<<s;                //y=jetla character jota hoy tetli total sankhya
    //---------------------------------------------------------------
    //'string to integer' and 'to string' function
    // string s="786";
    // int x=stoi(s);
    // cout << x+2; //786+2 thase
    // -------------
    // int x=786;
    // cout<<to_string(x)+"2"; //it will append
    //---------------------------------------------------------------
    // Sorting the string
    // string s1="xyzabjdhf";

    // sort(s1.begin(),s1.end());
    // cout<<s1;
    //---------------------------------------------------------------
    // .at(i) function for know which is on ith index
    // string s="122322";
    // cout<<s.at(3);
    return 0;
}
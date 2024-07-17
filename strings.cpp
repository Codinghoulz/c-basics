#include  <iostream>
using namespace std;
#include<string.h>
int main(){
// 101declaration
// char x='A';
// char S[10]="Hello";//hello
// char S[]={'H','e','l','l','o','\0'};//Hello
// char S[]={'H','e','l','l','o','\0','p'};//hello
// char S[]={65,66,67,68,0,69,70};//ABCD
// char *S="HELLO";// didnt understand flaw in it
// string s="Hello";//right way to do it
// cout<<S<<endl;


//102get , getline and ignore

//get
// char s[20];
// char s2[100];
// cout<<"enter your name";
// cin.get (s,20);//if we use cin then it can take steve bt not steve jobs as input
// cout<<"welcome "<<s<<endl;
// cout<<"enter name again";
// cin.get (s2,100);//this code will take enter as the next input bcoz we didnt use ignore 

// // to fix this
// char s[20];
// char s2[100];
// cout<<"enter your name";
// cin.get (s,20);
// cin.ignore();//ignores anything that remINS AFTER STRING
// cout<<"welcome "<<s<<endl;
// cout<<"enter name again";
// cin.get (s2,100);

 char*s = "hello";
 cout<<*s;
return 0;
}
#include<iostream>
#include<string>
using namespace std;
string uppercase(string f){
     for(int i=0;i<f.size();i++)
		f[i]=toupper(f[i]);

   return f;
 }
 string lowercase(string f){
    for(int j=0;j<f.size();j++)
		f[j]=tolower(f[j]);

    return f;
 }
bool isUpper(char a){
    if(a>='A' && a<='Z')
    return true;
    return false;
}
int main(){

    string s,a,b;
    int countUpper=0,countLower=0;
    cin>>s;
    for(char i:s){
         if(isUpper(i))
            countUpper++;
         else
           countLower++;
    }
    
    if(countUpper>countLower)
    {a = uppercase(s);cout<<a;}
    else
    b = lowercase(s);cout<<b;

}
#include<bits/stdc++.h>
using namespace std;
void consonent(string s) 
{
    for(int i=1;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<s[0]<<"ay"<<endl;
}
void vowel(string s)
{
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<"yay"<<endl;
}
int main()
{
    string s;
    cout<<"ENTER STRINGS::"<<endl;
    cin>>s;
    if(s.size()==1) 
    {
         cout<<s<<endl;
    }
    if(s[0]=='u'&&s[1]=='q') 
    {
        consonent(s);
    }
    else if((s[0]=='y')&&(s[1]!='a'||s[1]!='e'||s[1]!='i'||s[1]!='o'||s[1]!='u'))
    {
        vowel(s);
    }
    else
    {
        if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u') 
        {
            vowel(s);
        }
        else  
        {
            consonent(s);
        }
    }
}

#include <iostream>
using namespace std;
int main()
{
    int t,len,ternaryno;
    cin>>t;
    string s="";
    string s1="1";
    string s2="1";
    
    for(int i=0;i<t;i++)
    {
        cin>>len;
        cin>>s;
        for(int i=1;i<s.length();i++)
        {
            
            if(int j=1 && j<i && s[j]!='1')
            {
                if (s[i]=='2')
                {
                    s1[i]=1;
                    s2[i]=1;
                }
                if(s[i]=='0')
                {
                    s1[i]=0;
                    s2[i]=0;
                }
            }   
            if(int j=1;j<i && s[j]=='1')
            {
                s1+="0";
                s2+=s[i];

            }
            if(s[i]=='1')
            {
                s1[i]=1;
                s2[i]=0;             
            }

        }


    }
    cout<<s1<<endl<<s2;
    
    return 0;

}

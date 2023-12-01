#include<bits/stdc++.h>
using namespace std;
int main()
{
 fstream file;
 file.open("inputf.in",ios::in);
 long long ans=0;
 if(file.is_open())
 {
    string data;
    while(getline(file,data))
        {   
            int first=-1,last=-1;
            for(int i=0;i<data.size();i++)
            {
                if(data[i]>='0'&&data[i]<='9')
                    { 
                   last=(data[i]-'0');
                   if(first==-1)
                     first=(data[i]-'0'); 
                    }
                else if(i<data.size()-2&&data[i]=='o'&&data[i+1]=='n'&&data[i+2]=='e')
                {
                    if(first==-1)
                    first=1;
                    last=1;
                   
                }
                else if(i<data.size()-2&&data[i]=='t'&&data[i+1]=='w'&&data[i+2]=='o')
                {if(first==-1)
                    first=2;
                    last=2;
                    
                }
                else if(i<data.size()-4&&data[i]=='t'&&data[i+1]=='h'&&data[i+2]=='r'&&data[i+3]=='e'&&data[i+4]=='e')
                {
                    if(first==-1)
                    first=3;
                last=3;
                   
                }
                else if(i<data.size()-3&&data[i]=='f'&&data[i+1]=='o'&&data[i+2]=='u'&&data[i+3]=='r')
                {
                    if(first==-1)
                    first=4;
                last=4;
                  
                }
                else if(i<data.size()-3&&data[i]=='f'&&data[i+1]=='i'&&data[i+2]=='v'&&data[i+3]=='e')
                {
                    if(first==-1)
                    first=5;
                last=5;
                    
                }
                else if(i<data.size()-2&&data[i]=='s'&&data[i+1]=='i'&&data[i+2]=='x')
                {
                    if(first==-1)
                    first=6;
                last=6;
                    
                }
                else if(i<data.size()-4&&data[i]=='s'&&data[i+1]=='e'&&data[i+2]=='v'&&data[i+3]=='e'&&data[i+4]=='n')
                {
                    if(first==-1)
                    first=7;
                last=7;
                   
                }
                else if(i<data.size()-4&&data[i]=='e'&&data[i+1]=='i'&&data[i+2]=='g'&&data[i+3]=='h'&&data[i+4]=='t')
                {
                    if(first==-1)
                    first=8;
                last=8;
                   
                }
                else if(i<data.size()-3&&data[i]=='n'&&data[i+1]=='i'&&data[i+2]=='n'&&data[i+3]=='e')
                {
                    if(first==-1)
                    first=9;
                    last=9;
                   
                }


            }
            cout<<first<<last<<"\n";
            //cout<<(first*10+last)<<"\n";
            ans+=(first*10+last);
        }
 }
 cout<<ans<<"\n";
 file.close();

return 0;

}

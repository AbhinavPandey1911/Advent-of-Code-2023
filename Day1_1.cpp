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
            }
           // cout<<first<<last<<"\n";
            //cout<<(first*10+last)<<"\n";
            ans+=(first*10+last);
        }
 }
 cout<<ans<<"\n";
 file.close();

return 0;

}

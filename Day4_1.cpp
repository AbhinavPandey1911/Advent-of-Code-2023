#include<bits/stdc++.h>
using namespace std;
int main()
{
 fstream file;
 file.open("inputf.in",ios::in);
 string data;
  vector<string> input;
 unsigned long long ans=0;
 while(getline(file,data))
 { 
    int i=0;
  while(i<data.size()&&data[i]!=':')
    i++;
  while(i<data.size()&&(data[i]<'0'||data[i]>'9'))
    i++;
  //cout<<data[i]<<"\n";
  
  map<long long,long long>mm;
  string nums="";
    while(i<data.size()&&data[i]!='|')
    {
        if(data[i]==' ')
            {
                if(nums.size()>0)
                mm[stoi(nums)]++; 
                nums="";
            }
        else 
          nums+=data[i];
        i++;
    }
    if(nums.size()>0)
    {
        mm[stoi(nums)]++;
        nums="";
    }
   // for(auto it:mm)
   //     cout<<it.first<<" "<<it.second<<"\n";

    while(i<data.size()&&(data[i]<'0'||data[i]>'9'))
        i++;
    vector<long long> vs;
    nums="";
    while(i<data.size())
    {
        if(data[i]==' ')
        {
            if(nums.size()>0)
            vs.push_back(stoi(nums));
            nums="";
        }
        else 
        nums+=data[i];
        i++;
    }
    if(nums.size()>0)
    {
        vs.push_back(stoi(nums));
        nums="";
    }
    /*for(auto it:vs)
        cout<<it<<" ";
    cout<<"\n";
    */
    
    long long ft=0;
    for(int j=0;j<vs.size();j++)
    {
        if(mm[vs[j]]>0)
            {ft++; mm[vs[j]]--;}
    }
   if(ft>0)
   {
    long long temp=1;
    for(int j=0;j<ft-1;j++)
        temp*=2;
    ans+=temp;
   }
 }
 cout<<ans<<"\n";
 file.close();

 

return 0;

}

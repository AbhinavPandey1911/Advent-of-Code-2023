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
   input.push_back(data);
 }
 map<pair<int,int>,vector<int>> mm;
 for(int i=0;i<input.size();i++)
 {  string ints="";
    int fl=0;
    map<pair<int,int>,int>gears;
    for(int j=0;j<input[i].size();j++)
    {
        
       if(input[i][j]>='0'&&input[i][j]<='9')
            { ints+=input[i][j];
            if(i>0&&input[i-1][j]!='.'&&(input[i-1][j]=='*'))
                    {fl=1; gears[{i-1,j}]++;}
            else if(i<input.size()-1&&input[i+1][j]!='.'&&(input[i+1][j]=='*'))
              {fl=1; gears[{i+1,j}]++;}
            else if(j>0&&input[i][j-1]=='*')
                {fl=1; gears[{i,j-1}]++;}
            else if(j<input[i].size()-1&&input[i][j+1]=='*')
              {fl=1; gears[{i,j+1}]++;}
            else if(i<input.size()-1&&j<input[i].size()-1&&input[i+1][j+1]=='*')
               {fl=1; gears[{i+1,j+1}]++;}
            else if(i>0&&j<input[i].size()-1&&input[i-1][j+1]=='*')
             {  fl=1; gears[{i-1,j+1}]++; }
            else if(i>0&&j>0&&input[i-1][j-1]=='*')
                {fl=1; gears[{i-1,j-1}]++;}
            else if(i<input.size()-1&&j>0&&input[i+1][j-1]=='*')
                { fl=1; gears[{i+1,j-1}]++;}

            }
        else
        {
            //cout<<ints<<"\n";
            if(fl==1)
                {    
                    for(auto it:gears)
                    {
                        mm[it.first].push_back(stoll(ints));
                    }
                    gears.clear();
                    cout<<ints<<"\n";
                }
            ints=""; fl=0;

        }


    }
    if(fl==1)
    {
        for(auto it:gears)
                    {
                        mm[it.first].push_back(stoll(ints));
                    }
                gears.clear();

        ints="";
        fl=0;
    }
 }
 ans=0;
 for(auto it:mm)
    {cout<<it.first.first<<" "<<it.first.second<<" ---";
    for(auto ii:it.second)
        cout<<ii<<" ";
    if(it.second.size()==2)
        ans+=(it.second[0]*it.second[1]);
      cout<<"\n";}
 cout<<ans<<"\n";
 file.close();

 

return 0;

}

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
 for(int i=0;i<input.size();i++)
 {  string ints="";
    int fl=0;
    for(int j=0;j<input[i].size();j++)
    {
        
       if(input[i][j]>='0'&&input[i][j]<='9')
            { ints+=input[i][j];
            if(i>0&&input[i-1][j]!='.'&&(input[i-1][j]<'0'||input[i-1][j]>'9'))
                fl=1;
            else if(i<input.size()-1&&input[i+1][j]!='.'&&(input[i+1][j]<'0'||input[i+1][j]>'9'))
              fl=1;
            else if(j>0&&input[i][j-1]!='.'&&(input[i][j-1]<'0'||input[i][j-1]>'9'))
                fl=1;
            else if(j<input[i].size()-1&&input[i][j+1]!='.'&&(input[i][j+1]<'0'||input[i][j+1]>'9'))
              fl=1;
            else if(i<input.size()-1&&j<input[i].size()-1&&input[i+1][j+1]!='.'&&(input[i+1][j+1]<'0'||input[i+1][j+1]>'9'))
              fl=1;
            else if(i>0&&j<input[i].size()-1&&input[i-1][j+1]!='.'&&(input[i-1][j+1]<'0'||input[i-1][j+1]>'9'))
              fl=1;
            else if(i>0&&j>0&&input[i-1][j-1]!='.'&&(input[i-1][j-1]<'0'||input[i-1][j-1]>'9'))
                fl=1;
            else if(i<input.size()-1&&j>0&&input[i+1][j-1]!='.'&&(input[i+1][j-1]<'0'||input[i+1][j-1]>'9'))
                fl=1;

            }
        else
        {
            //cout<<ints<<"\n";
            if(fl==1)
                {    
                    ans+=stoi(ints);
                    cout<<ints<<"\n";
                }
            ints=""; fl=0;

        }


    }
    if(fl==1)
    {
        ans+=stoi(ints);
        ints=""; fl=0;
    }
 }
 cout<<ans<<"\n";
 file.close();

 

return 0;

}

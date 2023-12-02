#include<bits/stdc++.h>
using namespace std;
int main()
{
 fstream file;
 file.open("inputf.in",ios::in);
 string data;
 long long ans=0;
 while(getline(file,data))
 {
    string input="";
    int i=0;
    int fl=0;
    map<string,int> mm;
    mm["green"];
    mm["red"];
    mm["blue"];
    string game_no="";
    while(i<data.size()&&data[i]!=':')
        {if(data[i]>='0'&&data[i]<='9')
            game_no+=data[i];
        i++; //to skip till the game number
        } 
    cout<<game_no<<"==\n";
    i+=2; //to skip the space
    //cout<<data[i]<<"\n";
  while(i<data.size())
  { input="";
    while(i<data.size()&&data[i]<='9'&&data[i]>='0')
        {input+=data[i]; i++;}
     i++;
     if(data[i]=='g')
        {mm["green"]+=stoi(input);  cout<<"green "; i+=5;}
    else if(data[i]=='r')
        {mm["red"]+=stoi(input); cout<<"red "; i+=3;}
    else if(data[i]=='b')
        {mm["blue"]+=stoi(input); cout<<"blue "; i+=4;}

    if(data[i]==',')
        i+=2;
    else 
    {
        //cout<<data[i]<<" ";
        i+=2;
        for(auto it:mm)
        {
            if(it.first=="green"&&it.second>13)
                {fl=1; cout<<"green oob\n"; break;}
            else if(it.first=="red"&&it.second>12)
                {fl=1; cout<<"red oob\n"; break;}
            else if(it.first=="blue"&&it.second>14)
                { fl=1;  cout<<"blue oob\n"; break; }
        } 
       
        mm.clear();
        cout<<input<<"\n\n";
        continue;
    }
   cout<<input<<"\n";
    }
    if(fl==0)
        {
            ans+=stoll(game_no);
            //cout<<ans<<"--ans\n\n";
           // cout<<game_no<<"--gaaaaameno\n";
        }




 }
 cout<<"\n"<<ans<<"\n";
 file.close();

 

return 0;

}

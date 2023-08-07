#include<iostream>
using namespace std;
int main(){
    string mun;
    string mune[]={"j","e","r","o","m","e"};
    string munez[]={"_","_","_","_","_","_"};
    string j;
    int r=1;
    int b=0;
while (r<=9)
{
    bool match=true;
    bool correctgues=false;
    cout<<"\n\n\tenter the character\t:";
    cin>>j;
    for(int i = 0; i <= 5;i++){
        if(j == mune[i]){
            munez[i] = j;
            correctgues=true;
        }    
    }
    if(correctgues){
        cout<<"\n\tcorrectgues"<<endl;
    }
    else{
        cout<<"incorrect"<<endl;
        b += 1;
    }
    if(b==3){
        cout<<"\n\tyou are out of the game\n\n";
        break;
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<munez[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        if (mune[i] != munez[i]){
            match = false;
        }
        
    }
    if (match)
    {
        cout<<"\n\n\tWow u did it\n\n"<<endl;
        for (int c = 0; c < 6; c++){
            cout<<"\t"<<munez[c];
        }
         cout<<"\n\n";
        break;
    }
   
    r++;

    
}
return 0;

}


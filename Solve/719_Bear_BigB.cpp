//***************************Bismillahhir Rahmanir Rahim********************//
//****************************Md Musfiqur Rahman****************************//
//****************************musfiqurm661*********************************//
//***************************try to make my next step clear***************//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Limak,Bob,count=0;

    cin>>Limak>>Bob;
    
    if(Limak>Bob)
        count=0;
    else
        while(Limak<=Bob)
        {
            Limak=Limak*3;
            Bob=Bob*2;
            count++;
        }
    cout<<count<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        int n;

        cin>>n;

        int array[n];
        
        for(int i=0;i<n;i++){
            cin>>array[i];
        }

        int maxsum=0;
        int operations=0;


        for(int i=0;i<n;i++){
            if(array[i]<0){
                array[i]*=-1;

                operations++;
            }

            maxsum+=abs(array[i]);

        }


        cout<<maxsum<<" "<<operations<<endl;


    }

}

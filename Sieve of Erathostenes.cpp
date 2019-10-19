//Program To generate Prime Numbers
#include <iostream>
int P[1000000]={0};
void prime(){
    for(int i=2;i<1000000;i++){
        P[i]=1;
    }
    for(int i=2;i*i<1000000;i++){
        for(int j=2;j*i<1000000;j++){
            P[i*j]=0;
        }
    }
}
using namespace std;

int main()
{   prime();
    int N;
    cout<<"Enter How many Primes you want to generate..."<<endl;
    cin>>N;
    int c=0;
    for(int i=1;c<N;i++){
        if(P[i]==1){
           cout<<i<<" ";
           c++;
        }
    }
}

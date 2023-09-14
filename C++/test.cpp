include <iostream>
#include <string.h>
using namespace std;
struct census{
    char city[20];
    long int population;
    float l_rate;
    void display();
    void read();
    void sort1(int, struct census[]);
};
struct census c[20];
int main()
{
    int n,i;
    cout<<"Enter the Number of Cities";
    cin>>n;
    cout<<"Enter the Det+ails of the Cities:"<<endl;
    for(i=0;i<n;i++){
        c[i].read();
    }
    struct census p;
    p.sort1(n,c);
    cout<<"Sorted Details of the City"<<endl;
    cout<<"CITY NAME"<<"\t"<<"POPULTION"<<"\t"<<"LITERACY RATE"<<endl;
    for(i=0;i<n;i++){
        c[i].display();
    }
    return 0;
    
}

void census::read(){
    cout<<"Enter the City Name:";
    cin>>city;
    cout<<"Enter the Population of the City:";
    cin>>population;
    cout<<"Enter the Literacy Rate of the City:";
    cin>>l_rate;
}

void census::sort1(int n,struct census c[]){
    struct census temp;
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(c[j].city,c[j+1].city)>0){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}

void census::display(){
    cout<<city<<"\t"<<"\t"<<population<<"\t"<<l_rate<<endl;
}
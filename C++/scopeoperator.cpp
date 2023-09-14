#include<iostream>
using namespace std;

int glo = 6; 
int a,b;

getData(){
    cout<<"enter data";
    cin>>a;
    cin>>b;
}
void sum() {
    a+b;
    cout<<a+b;
}

int main()
{
   int glo = 7;
   glo = 68;
    int a = 4;
    int b = 5;
    float pi=3.14;
    char c='H';

    cout<< ::glo<<endl;
    cout<<glo;

    cout<<"\n";
    getData();
    sum();

}
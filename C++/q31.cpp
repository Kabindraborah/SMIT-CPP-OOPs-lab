#include<iostream>
#include<string>
using namespace std;

class STUDENT{
    string usn,name;
    int marks[3];
    float avg;
public:
    void read();
    void calculate();
    void display();
};

void STUDENT::read(){
    cout<<"Enter USN: ";
    cin>>usn;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter marks in 3 tests: ";
    for(int i=0;i<3;i++)
        cin>>marks[i];
}

void STUDENT::calculate(){
    int sum=0,min1=100,min2=100;
    for(int i=0;i<3;i++){
        sum+=marks[i];
        if(marks[i]<min1){
            min2=min1;
            min1=marks[i];
        }
        else if(marks[i]<min2)
            min2=marks[i];
    }
    avg=(float)(sum-min1)/2;
}

void STUDENT::display(){
    cout<<usn<<"\t"<<name<<"\t"<<avg<<endl;
}

int main(){
    STUDENT s[10];
    int n;
    cout<<"Enter the number of students: ";
    cin>> n;
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of student "<<i+1<<endl;
        s[i].read();
        s[i].calculate();
    }
    cout<<"\nUSN\tName\tAverage Marks\n";
    for(int i=0;i<n;i++)
        s[i].display();
    return 0;
}
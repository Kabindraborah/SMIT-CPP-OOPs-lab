#include<iostream>
#include<string>
using namespace std;

class Employee{
    string name;
    int empCode;
    float grossSalary;
public:
    void read();
    void display();
    float getGrossSalary();
};

void Employee::read(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Employee Code: ";
    cin>>empCode;
    cout<<"Enter Gross Salary: ";
    cin>>grossSalary;
}

void Employee::display(){
    cout<<name<<"\t"<<empCode<<"\t\t"<<grossSalary<<endl;
}

float Employee::getGrossSalary(){
    return grossSalary;
}

int main(){
    Employee e[10];
    
     int n;
    cout<<"Enter the number of employee: ";
    cin>> n;

    for(int i=0;i<n;i++){
        cout<<"\nEnter details of employee "<<i+1<<endl;
        e[i].read();
    }
    cout<<"\nName\tEmployee Code\tGross Salary\n";
    for(int i=0;i<n;i++)
        e[i].display();
    
    // Finding employee with highest and lowest gross salary
    int maxIndex=0,minIndex=0;
    for(int i=1;i<n;i++){
        if(e[i].getGrossSalary()>e[maxIndex].getGrossSalary())
            maxIndex=i;
        if(e[i].getGrossSalary()<e[minIndex].getGrossSalary())
            minIndex=i;
    }
    
    cout<<"\nEmployee with highest gross salary:\n";
    e[maxIndex].display();
    
    cout<<"\nEmployee with lowest gross salary:\n";
    e[minIndex].display();
    
    return 0;
}
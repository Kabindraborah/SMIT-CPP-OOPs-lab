#include<iostream>
using namespace std;

class DM; //forward declaration

class DB
{
    private:
        int feet, inches;
    public:
        void getdata()
        {
            cout<<"Enter distance in feet and inches: "<<endl;
            cin>>feet>>inches;
        }
        friend void add(DB, DM);
};

class DM
{
    private:
        int meters, centimeters;
    public:
        void getdata()
        {
            cout<<"Enter distance in meters and centimeters: "<<endl;
            cin>>meters>>centimeters;
        }
        friend void add(DB, DM);
};

void add(DB d, DM m)
{
    int total_inches = (d.feet*12) + d.inches;
    float total_meters = (float)total_inches/39.37 + (float)m.meters + (float)m.centimeters/100;
    cout<<"Total distance is: ";
    if(total_meters>1)
        cout<<int(total_meters)<<" meters "<<total_meters-int(total_meters)*100<<" centimeters"<<endl;
    else
        cout<<total_meters*100<<" centimeters"<<endl;
}

int main()
{
    DB d;
    DM m;
    d.getdata();
    m.getdata();
    add(d,m);
    return 0;
}
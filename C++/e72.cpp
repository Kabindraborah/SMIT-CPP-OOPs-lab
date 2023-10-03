#include<iostream>
using namespace std;

class TwoValues; //forward declaration

class Min_Max
{
    public:
        void find_min_max(TwoValues);
};

class TwoValues
{
    private:
        int value1, value2;
    public:
        void read_values()
        {
            cout<<"Enter two values: ";
            cin>>value1>>value2;
        }
        friend void Min_Max::find_min_max(TwoValues);
};

void Min_Max::find_min_max(TwoValues obj)
{
    if(obj.value1>obj.value2)
        cout<<"Maximum value is: "<<obj.value1<<endl<<"Minimum value is: "<<obj.value2<<endl;
    else
        cout<<"Maximum value is: "<<obj.value2<<endl<<"Minimum value is: "<<obj.value1<<endl;
}

int main()
{
    TwoValues obj;
    obj.read_values();
    Min_Max m;
    m.find_min_max(obj);
    return 0;
}
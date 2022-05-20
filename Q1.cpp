#include <iostream>
using namespace std;
class Employee
{
    private:
        int empid;
        char empname[20];
        int bsalary;
        int allowance;
    public:
        Employee()
        {
            bsalary = 1000;
        }
        void GetData();
        void DispData();
};
void Employee::GetData()
{
    cout<<"Enter employee id: ";
    cin>>empid;
    cout<<"Enter employee name: ";
    cin>>empname;
    cout<<"Enter employee allowance: ";
    cin>>allowance;
}
void Employee::DispData()
{
    cout<<endl<<empid<<"\t"<<empname<<"\t"<<bsalary<<"\t"<<allowance;
}
int main()
{
    Employee e[3];
    cout<<"Enter employee information:"<<endl;
    for(int i=0;i<3;i++)
{
    e[i].GetData();
}
cout<<endl<<"The emloyee information is:";
cout<<endl<<"empid \t Name \t bsalary \t allowance";
    for(int i=0;i<3;i++)
{
    e[i].DispData();
}
}

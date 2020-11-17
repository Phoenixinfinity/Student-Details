#include <iostream>

using namespace std;
class Student
{
private:
    char name[20];
    int rollno;
    char branch[10];
    int total;
    float percentage;
public:
    void getDetails(void);
    void showDetails(void);
};
void Student::getDetails(void)
{
    cout<<"Enter Name:- ";
    cin>>name;
    cout<<"Enter Roll.no:- ";
    cin>>rollno;
    cout<<"Enter Branch:- ";
    cin>>branch;
    cout<<"Enter Total Marks (/500):- ";
    cin>>total;
    percentage = (float)total/500*100;
}
void Student::showDetails(void)
{
    cout<<"Students Details:\n";
    cout<<"Name: "<<name<<"\nRoll.no: "<<rollno<<"\nTotal Marks: "<<total<<"\nPercentage: "<<percentage;
}
int main()
{
    Student std[10];

    int n,i;
    cout<<"Enter Total no.of Students: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the Details of Student:- "<<(i+1)<<"\n";
        std[i].getDetails();
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n\nDetails of Student:- "<<(i+1)<<"\n";
        std[i].showDetails();
    }
    cout<<"\n";
    return 0;
}

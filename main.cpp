#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    ofstream f1("C:/Users/Windows/Desktop/New folder (2)/student.txt");
    cout<<"how many students:";
    cin>>n;
    int a[n],b[n],c[n],d[n],avg[n],total[n];
    string name[n];
    for( int i=0;i<n;i++)
    {
        cout<<"student name:";
        cin>>name[i];
        cout<<"enter the tamil mark:";
        cin>>a[i];
        cout<<"enter the eng mark:";
        cin>>b[i];
        cout<<"enter the science mark:";
        cin>>c[i];
        cout<<"enter the java mark:";
        cin>>d[i];
        total[i]=(a[i]+b[i]+c[i]+d[i]);
        avg[i]=total[i]/4;

    }
    for( int i=0;i<n;i++)
    {
        cout<<"the name is:"<<name[i]<<endl;
        cout<<"the total is:"<<total[i]<<endl;
        cout<<"the average is:"<<avg[i]<<endl;
        f1<<"the name is:"<<name[i]<<endl;
        f1<<"the total is:"<<total[i]<<endl;
        f1<<"the average is:"<<avg[i]<<endl;
        if((a[i]>=35)&&(b[i]>=35)&&(c[i]>=35)&&(d[i]>=35))
        {
            cout<<"\n==================================pass================================\n";
            cout<<"passed students is:"<<name[i]<<endl;
            f1<<name[i]<<" : Pass"<<endl;

        }
        else{

            cout<<"/n===============================Fail================================="<<endl;
            cout<<"Failed students is:"<<name[i]<<endl;
            f1<<name[i]<<" : Fail"<<endl;
        }

    }
}

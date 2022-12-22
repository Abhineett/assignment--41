#include<iostream>
using namespace std;

class Stack
{
private:


    int a[5];
    int tos;
public:
    Stack()
    {
        tos=-1;
    }
    ~Stack()
    {
        tos=-1;
    }
    void Insert(int value)
    {
        if(tos==4)
        {
            cout<<"stack is overflow.";

        }
        else
        {
            tos++;
            a[tos]=value;
        }
    }
    void print()
    {
        if(tos==-1)
        {
            cout<<"No value to print.";

        }
        else
        {
            cout<<a[tos];
            tos--;
        }

    }
};
int main()
{
    Stack p;
    int value;
    int x=5;
    while(x)
    {
        cout<<"Enter value to push."<<endl;
        cin>>value;
        p.Insert(value);
        x--;

    }
    cout<<endl;
    cout<<"value is.  "<<endl;
    for(int i=1;i<=5;i++)
    {
        p.print();
cout<<" ";
    }
    return 0;

}

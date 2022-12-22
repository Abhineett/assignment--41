#include<iostream>
using namespace std;

class Stack
{

    int s[5];
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
            s[tos]=value;
        }
    }
    int top()
    {
        return s[tos];
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
    cout<<"top most element is."<<endl;
    cout<<p.top();





}

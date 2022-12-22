#include<bits/stdc++.h>
using namespace std;

class Stack1
{
  int ary[30] ;
  int tos;
  public:
      Stack1()
       {
           tos=-1;
       }
       ~Stack1()
       {
           tos=-1;
       }
       void push(int value)
       {

           if(tos==29)
           {

               cout<<" Stack overflow.";
           }
           else
           {
              tos++;
              ary[tos]=value;
           }
       }
       int pop()
       {
           if(tos==-1)
           {
               cout<<" stack underflow.";
           }
           else
           {
               int p=ary[tos];
               tos--;
               return p;
           }
       }
       void peek()
       {
           cout<<"peek value"<<" "<<ary[tos]<<endl;
       }
       void Size()
       {
           cout<<"size is"<<" "<<tos<<endl;
       }

};
int main()
{
    int value;
    Stack1 s1;
    cout<<"Push 5 value  in stack."<<endl;
    cout<<endl;
    cout<<"Enter value one by one."<<endl;

    for(int i=0;i<5;i++)
    {
        cin>>value;
        s1.push(value);
    }
    cout<<"value pushed."<<endl;
    s1.peek();
    s1.Size();
    int v=s1.pop();
    cout<<"poped value is"<<" "<<v<<endl;
    s1.Size();
    s1.peek();
    return 0;

}

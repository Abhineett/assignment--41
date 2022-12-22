#include<bits/stdc++.h>
using namespace std;

class Stack1
{

   int ar[20];
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
       int Insert(int value)
       {
           if(tos==19)
           {
               cout<<"stack overflow.";
           }
           else
           {
               tos++;
               ar[tos]=value;
               return value;
           }

       }
       void print()
           {
               while(tos!=-1)
               {
                   if(tos==-1)
                   {
                     cout<<"Stack underflow.";
                   }
                   else
                   {
                    cout<<ar[tos]<<" "<<endl;
                    tos--;
                   }

               }

           }
};

class Stack2
{
   int arr[20];
   int toss;
   public:
       Stack2()
       {
           toss=-1;
       }
       ~Stack2()
       {
           toss=-1;
       }
       void Insert2(int value)
       {

           if(toss==19)
           {
               cout<<" stack full.";
           }
           else
           {
               toss++;
               arr[toss]=value;
           }
       }
       void print2()
           {
               while(toss!=-1)
               {
                   if(toss==-1)
                   {
                     cout<<"Stack underflow.";
                   }
                   else
                   {
                    cout<<arr[toss]<<" "<<endl;
                    toss--;
                   }

               }

           }


};
int main()
{
   Stack1 s1;
   Stack2 s2;


   int value;

   int choice;
   while(1)
   {
       ;
       //cin>>choice;
       cout<<"--------------------------------"<<endl;
       cout<<"1. puch value in Stack1."<<endl;
       cout<<"2. print value of Stack1."<<endl;
       cout<<"3. print copy value of stack2."<<endl;
       cout<<"4. Exit."<<endl;
       cout<<"--------------------------------"<<endl;
       cout<<"Enter your choice from above."<<endl;
       cin>>choice;
       switch(choice)
       {
       case 1 :
        {
            cout<<"Enter value to push in Stack1. ";
            cin>>value;
            int l=s1.Insert(value);
            s2.Insert2(l);
            break;
        }
       case 2:
        {
            s1.print();
            break;
        }
       case 3:
        {
            s2.print2();
            break;
        }
       case 4:
        {
            exit(0);
        }
       }



   }
   return 0;


}

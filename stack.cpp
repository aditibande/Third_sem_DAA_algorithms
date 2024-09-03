using namespace std;
#include<iostream>
#include<stdlib.h>
# define SIZE 5
int top=-1,inp_arr[SIZE],choice;
void push();
void pop();
void show();
int main()
{
   while(1)
   {
       cout<<"\nPerform operatons on stack";
       cout<<"\n Enter 1 for push \n enter 2 for pop \n enter 3 for show \n enter 4 for exit\n";
       cin>>choice;
       switch(choice)
       {
           case 1: push();
           break;
           case 2 : pop();
           break;
           case 3 : show();
           break;
           case 4: exit(0);
           default : cout<< "invalid choice";
       }}}
       void push()
       {
           int x;
           if(top==SIZE-1)
            cout<<"STACK OVERFLOW!";
           else
           {
               cout<<"enter the element to be added in the stack ";
               cin>>x;
               top=top+1;
               inp_arr[top]=x;
           }

       }
       void pop()
       {
           if (top ==-1)
            {
                cout<<"STACK UNDERFLOW!";
            }
            else
            {
                cout<<"popped element is "<<inp_arr[top];
                top=top-1;
            }

        }
        void show()
        {
            if(top==-1)
                cout<<"STACK UNDERFLOW";
            else
                {
                    cout<<"elements present in the stack are :";
                    for(int i=top; i>=0;i--)
                        cout<<inp_arr[i];
                }
            }


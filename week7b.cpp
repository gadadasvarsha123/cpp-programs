#include<iostream>
using namespace std;
class Node{
    public:
      int data;
      Node next;
      Node(int value)
      {
        data=value;
        next=NULL;
      }
};
class stack
{
    private:
     Node*temp;
    public:
     stack()
     {
        top=NULL;
     }
     void push(int value){
        Node*newNode=new Node(vaue);
        if(newNode==NULL)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        newNode->next=top;
        top=newNode;
        cout<<"ëlement inserted"<<endl;
     }
     void pop()
     {
        if(top==NULL)
        cout<<"stack underflow";
        else
        {
            Node*temp=top;
            cout<<"deleted"<<temp->data<<endl;
            top=top->next;
            delete temp;
        }
     }
     void display(){
        if(top==NULL)
        cout<<"stack is empty";
        else
        {
            Node*temp=top;
            cout<<"stack elements are:"<<endl;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
     }
     void peek()
     {
        if(top==NULL)
        cout<<"stack is empty";
    else
    cout<<"top element is"<<top->data<<endl;
     }
};
int main()
{
    stack s;
    int choice,value;
    do{
        cout<<"1.push\n 2.pop\n 3.display\n 4.peek\n 5.exit\n";
        cout<<"enter choice:";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter value";
            cin>>value;
            s.push(value);
            break;
            case 2:
            s.po();
            break;
            case 3:
            s.display();
            break;
            case 4:
            s.peek();
            break;
            case 5:
            cout<<"enter correct choice";
        }
    }while(choice!=5);
    return 0;
}
#include<iostream>
using namespace std;
#define MAX 5
class stack{
    private:
      int top=-1;
      int st[MAX];
    public:
      stack()
      {
        top=-1;
      }  
      void push(int value){
        if(isFULL())
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        st[top]=value;
        cout<<"element inserted"<<endl;
        return;
      }
      void pop(){
      {
        cout<<"stack underflow"<<endl;
        return;
      }
      cout<<"poped"<<st[top]<<endl;
      top--;
    }
    void display(){
        if(isempty()){
           cout<<"stack is empty"<<endl;
        }
        cout<<"stack elements are:"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<st[top]<<endl;
        }
    }
    void peek(){
        if(isempty)
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        cout<<"peek elements:"<<st[top];
        return;
    }
    int isFULL()
    {
        if(top=MAX-1)
        return 1;
    }
    int isempty()
    {
        if(top==-1)
        return 1;
    }
};
int main()
{
    stack st;
    int value;
    do{
        int choice;
        cout<<"operations of stack:"<<endl;
        cout<<"1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n"<<endl;
        cout<<"enter the choice";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter value:";
            cin>>value;
            st.push(value);
            break;
            case 2:
            st.pop();
            break;
            case 3:
            st.peek();
            break;
            case 4:
            st.dsplay();
            break;
            case 5:
            cout<<"exitig programm\n";
            break;
            default:
            cout<<"invalid choice";
        }
    }while(choice!=5)
    return 0;
}
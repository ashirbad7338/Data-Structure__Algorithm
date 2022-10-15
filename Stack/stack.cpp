#include <iostream>
using namespace std;
struct stack{
    int *arr;
    int top;
    int cap;
    stack(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    void push (int x){
        if(top==cap-1){cout<<"Error"<<endl;}
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top==-1){cout<<"Error"<<endl;}
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        if(top==-1){cout<<"Error"<<endl;}
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isempty(){
        return (top==-1);
    }

};
int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.peek();
    cout<<endl;
    cout<<s.size();
    cout<<endl;
    cout<<s.pop();
    cout<<endl;
    cout<<s.peek();
    cout<<endl;
    cout<<s.size(); 

}
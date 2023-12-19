#include<iostream>
using namespace std;
float calc(float x , float y , char op);
int main()

{
    float a,b;
    char op;
    cout<< " Enter the first number "<<endl;
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER "<<endl;
    cin>>b;
    cout<<" ENTER THE OPERATOR  + , - , * , / "<<endl;
    cin>>op;
    float d;
    d=calc(a,b,op);
    cout<<" THE RESULT IS : "<<d;
}

    float calc(float x , float y ,char op)
{
    float d;
switch(op)
{
    case'+':
    d=x+y;
    break;
        case'-':
    d=x-y;
    break;
        case'*':
    d=x*y;
    break;
     case'/':
    d=x/y;
    break;
}
return d;
}

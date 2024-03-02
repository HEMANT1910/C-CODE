#include<iostream>
using namespace std;
int main() {
   
 int a,b;
 cout<<"Enter The Value Of a"<<endl;
 cin>>a;
 cout<<"Enter The Value Of b"<<endl;
 cin>>b;
 char op;
 cout<<"Enter THe Operation You Want To Perform"<<endl;
 cin>>op;
 switch(op) {
    case'+' : cout << (a+b) <<endl;
    break;
      case'-' : cout << (a-b) <<endl;
      break;
        case'*' : cout << (a*b) <<endl;
        break;
          case'/' : cout << (a/b) <<endl;
          break;
            case'%' : cout << (a%b) <<endl;
            break;
            default: cout <<"Please Enter a Valid Operation"<<endl;
            return 0;
 }
 return 0;
 }
   
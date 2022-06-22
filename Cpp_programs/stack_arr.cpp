#include<iostream>
using namespace std;
class stack{
	        int st[50];
	        int top;
	        public:
	        	stack()
	        	{top=-1;
				}
	            void push(int ele)
	            {if(top>49)
	            cout<<"Stack overflow!\n";
	            else
	            {top++;
	            st[top]=ele;
				}
				}
				void pop()
				{if(top==-1)
				cout<<"Stack underflow!!";
				else
				{cout<<"Deleted"<<st[top];
				top--;
				}
				}
				void display()
				{int i;
				if(top==-1)
				cout<<"No stack\n";
				else
				{for(i=top;i>=0;i--)
				cout<<st[i]<<"--";
				}
				}
};

int main()
{stack s;int ch,ele;char c;
do{
cout<<"----------Stack operations------------\n";
cout<<"1-Add element\n";
cout<<"2-Pop an element\n";
cout<<"3-Display the stack\n";
cout<<"Input choice\n";
cin>>ch;
switch(ch)
{case 1:cout<<"input element to insert\n";
        cin>>ele;
		s.push(ele);
		break;
case 2:s.pop();
       break;		   
case 3:s.display();
       break;
default:cout<<"wrong choice\n";       
       break; 
}
cout<<"Do u want to continue?";
cin>>c;
}while(c=='y'||c=='Y');
return 0;
}
	


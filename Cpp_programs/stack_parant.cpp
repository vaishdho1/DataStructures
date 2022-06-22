#include<iostream>
using namespace std;
class stack{
	        char st[50];
	        int top;
	        public:
	        	stack()
	        	{top=-1;
				}
	            void push(char ele)
	            {if(top>49)
	            cout<<"Stack overflow!\n";
	            else
	            {top++;
	            st[top]=ele;
				}
				}
				int pos()
				{
				return st[top];
			}
				void pop()
				{if(top==-1)
				cout<<"Stack underflow!!";
				else
				{
				top--;
				}
				}
				void display()
				{int i;
				if(top==-1)
				cout<<"No stack\n";
				else
				{for(i=top;i>(top/2);i--)
				cout<<st[i]<<"--";
			}
				}
				int empty()
                {if(top==-1)
                return 1;
                else 
                return 0;
				 } 

}sh;
int charmatch(char c,char m)
{if((c=='['&&m==']')||(c=='{'&&m=='}')||(c=='('&&m==')'))
    return 1;
    else
    return 0;
};
int get(char s[],int l)
{int i;
for(i=0;i<l;i++)
{if(s[i]=='['||s[i]=='{'||s[i]=='(')
   sh.push(s[i]);
   else
   {if(sh.empty()||!charmatch(sh.pos(),s[i]))
    return 0;
	else
	sh.pop();	 
}
}
return sh.empty()?1:0;
}
int main()
{char str[6];int l,i,c;
cout<<"Input no. of characters\n";
cin>>l;
cout<<"Input array of characters\n";
for(i=0;i<l;i++)
cin>>str[i];
c=get(str,l);
if(get(str,l))
cout<<"balanced\n";
else
cout<<"unbalanced\n";
sh.display();
return 0;
}
	

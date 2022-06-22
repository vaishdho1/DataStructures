#include<iostream>
using namespace std;
struct node{
             int ele;
            node*next;

};
class queue{
	
            node*front,*rear;
            public:
			queue()
			{front=NULL;
			rear=NULL;
				}
			node*create(int x)	
			{node*temp;
			temp=new node;
			temp->ele=x;
			temp->next=NULL;
			return(temp);
		}
	        	void addqueue()
	        	{int x;node*ptr;
				cout<<"Input element to add \n";
	        	cin>>x;
	        	ptr=create(x);
	        	if(front==NULL)
	        	rear=front=ptr;
	        	else
	        	rear->next=ptr;
	        	rear=ptr;
	        	rear->next=NULL;
				}
	            void delqueue()
				{node *p=new node;
				if(front==NULL)
				cout<<"The queue is empty \n";
				else
				{p=front;
				front=front->next;
				cout<<"Deleted"<<p->ele;
				delete(p);
			}
		}
			void display()
			{if(front==NULL)
			cout<<"Empty list \n";
			else
			while(front!=NULL)
			{
			cout<<front->ele<<"->";
			front=front->next;
		}
			}
				
				 
	
};
int main()
{int x;char ch;queue q;
	do{
	cout<<"----------Queue menu---------\n";
	cout<<"Input choice \n";
	cout<<"1.Add element \n";
	cout<<"2.Delete element \n";
	cout<<"3.Display queue \n";
	cin>>x;
	switch(x)
{
	case 1: q.addqueue();
	        break;
	case 2:q.delqueue();
	        break;
	case 3:q.display();
	       break;
 default:cout<<"Wrong choice!!!";
                 break;
	
	
	
	}	
cout<<"Do you want to continue \n";
cin>>ch;	
}while(ch=='y'||ch=='Y');
return 0;
}

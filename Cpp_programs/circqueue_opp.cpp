#include<iostream>
using namespace std;
#define max 50
class circqueue{
	
                 int *arr;
				 int rear,front;
				 public:
				 circqueue()
				 {arr=new int[max];
				 rear=front=-1;
					 }
				void insert()
				{int x;
				cout<<"Input element to insert \n";
				cin>>x;
				if(front==rear+1||(front==max-1&&rear==0))
				cout<<"Overflow!!";
				if(front==-1)
				{
				front=0;
				rear=0;}
				else
				{
				if(rear==max-1)
				
					rear=0;	
					else
					rear=rear+1; 
					}
					arr[rear]=x;
				}
	            void del()
	            {if (front == -1)

            {

                cout<<"Queue Underflow\n";

                return ;

            }

            cout<<"Element deleted from queue is : "<<arr[front]<<endl;

            if (front == rear)

            {

                front = -1;

                rear = -1;

            }

            else

            {

                if (front == max - 1)

                    front = 0;

                else

                    front = front + 1;

            }
				}
				void display()
				{int front_pos=front;
				int rear_pos=rear;
				if(front==-1)
				cout<<"Empty queue \n";
				if(front_pos<=rear_pos)
				{while(front_pos<=rear_pos)
				{
				cout<<arr[front_pos];
				front_pos++;
			}
			}
			else
			{while(front_pos<max-1)
			{
			cout<<arr[front_pos];
			front_pos++;
		}
		front_pos=0;
		while(front_pos<=max)
		{
		cout<<arr[front_pos];
		front_pos++;}
				
				
				
			}
				}
				
	
	
	
};
int main()
{int x;char ch;circqueue q;
	do{
	cout<<"----------Circular Queue menu---------\n";
	cout<<"Input choice \n";
	cout<<"1.Add element \n";
	cout<<"2.Delete element \n";
	cout<<"3.Display queue \n";
	cin>>x;
	switch(x)
{
	case 1: q.insert();
	        break;
	case 2:q.del();
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


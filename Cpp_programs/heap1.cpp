#include<iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
using namespace std;
class Bheap
{ vector <int> heap;
  int left(int parent)
  {
  	int l=2*parent+1;
  	if(l<heap.size())
    return(l);
	else
	return -1;  	
  }
  int right(int parent)
  {int m=2*parent+2;
  if(m<heap.size())
   return m;
   else
   return -1;
  }
  int parent(int child)
  {
  	{
    int p = (child - 1)/2;
    if (child == 0)
        return -1;
    else
        return p;
}
  	
  }
  void heapifyup(int in)
  {
  	if(in>=0&&parent(in)>=0&&heap[in]>heap[parent(in)])
     {
     	int temp=heap[in];
     	heap[in]=heap[parent(in)];
     	heap[parent(in)]=temp;
     	heapifyup(parent(in));
     	
		   }  	
   }
  void heapifydown(int in)
  {
  	int lchild=left(in);
  	int rchild=right(in);
  	if(rchild>0&&lchild>0&&heap[lchild]<heap[rchild])
  	{lchild=rchild;
	  }
	  if(lchild>0)
	  {
	  	int temp=heap[in];
	  	heap[in]=heap[lchild];
	  	heap[lchild]=temp;
	  	heapifydown(lchild);
	  	
	  }
	  
	  }  	
  public:
  	Bheap(){};
  	void insert(int ele)
  	{
  	  heap.push_back(ele);
	  heapifyup(heap.size()-1);		
  		
	  }
  	void Deletemax()
  	{
  		if(heap.size()==0)
  		{cout<<"Heap is empty \n";
  		return;
		  }
  		heap[0]=heap.at(heap.size()-1);
  		heap.pop_back();
  		heapifydown(0);
  		cout<<"Element deleted \n";
  		
	  }
  	int Extractmax()
  	{
  	if(heap.size()==0)
	  return -1;
	  else
	  return heap.front();	
  		
	  }
  	void displayheap()
  	{vector <int>::iterator pos = heap.begin();
    cout<<"Heap -->  ";
    while (pos != heap.end())
    {
        cout<<*pos<<" ";
        pos++;
    }
    cout<<endl;
	  }
  	int size()
  	{return heap.size();
  	cout<<heap.size();
	  }
  };
  	
	int main()
	{
		Bheap h;
    while (1)
    {
        cout<<"------------------"<<endl;
        cout<<"Operations on Heap"<<endl;
        cout<<"------------------"<<endl;
        cout<<"1.Insert Element"<<endl;
        cout<<"2.Delete Minimum Element"<<endl;
        cout<<"3.Extract Minimum Element"<<endl;
        cout<<"4.Print Heap"<<endl;
        cout<<"5.Exit"<<endl;
        int choice, element;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the element to be inserted: ";
            cin>>element;
            h.insert(element);
            break;
        case 2:
            h.Deletemax();
            break;
        case 3:
            cout<<"Minimum Element: ";
            if (h.Extractmax() == -1)
            {
                cout<<"Heap is Empty"<<endl;
            }
            else
                cout<<"Maximum Element:  "<<h.Extractmax()<<endl;
            break;
        case 4:
            cout<<"Displaying elements of Hwap:  ";
            h.displayheap();
            break;
        case 5:
            exit(1);
        default:
            cout<<"Enter Correct Choice"<<endl;
        }
    }
    return 0;
	}

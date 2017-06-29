#include<iostream>
using namespace std;
struct node
{
	int value;
	node* next;
};
class stack{
	private:
		node* top;
		int max_size;
		int size;
	public:
		stack()
		{
			top=NULL;
			max_size=5;
			size=0;
			
		}
		void push(int val)
		{	if(size>=max_size)
				cout<<"stack overflow\n";
			else
			{
				node* nodeptr=new node;
				nodeptr->value=val;
				nodeptr->next=top;
				top=nodeptr;
				size=size+1;
				//cout<<"size is"<<size<<endl;
			}
		}
int pop()
		{
			node* nodeptr=top;
			int a;
			if(top==NULL)
			{cout<<"stack underflow occured can't be deleted\n";
				return -1;
			}
			else
			{
			top=nodeptr->next;
			a=nodeptr->value;
			delete(nodeptr);
			cout<<"value of deleted node is "<<a<<endl;
			size=size-1;
			return(a);
			
		}
		}
void printstack()
{
	if(top!=NULL)
	{node* nodeptr=top;
	while(nodeptr->next!=NULL)
	{cout<<nodeptr->value<<"   ";
		nodeptr=nodeptr->next;
	}
	cout<<nodeptr->value<<endl;
	}
	else
	cout<<"stack does not exist"<<endl;
} 
};
int main()
{	stack stack1;
	stack1.push(90);
	stack1.printstack();
	stack1.pop();
	stack1.printstack();
	stack1.pop();
	stack1.printstack();
	stack1.push(67);
	stack1.printstack();
	stack1.push(56);
	stack1.printstack();
	stack1.push(68);
	stack1.printstack();
	stack1.push(69);
	stack1.printstack();
	stack1.push(670);
	stack1.printstack();
	stack1.push(671);
	stack1.printstack();
	stack1.pop();
	stack1.printstack();
	stack1.pop();
	stack1.printstack();
	return 0;
}

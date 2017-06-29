#include<iostream>
using namespace std;
struct node
{	int value;
	node* next;
};
class Queue{
	private:
	node* head,*tail;
	public:
	Queue()
	{
		head=NULL;
		tail=NULL;
	}
	void insertnode(int val)
	{
		node* nodeptr=new node;
		nodeptr->value=val;
		nodeptr->next=NULL;
		if(head==NULL)
	{
		head=nodeptr;
		tail=nodeptr;
		}
		else
		{
		tail->next=nodeptr;
		//nodeptr->next=tail;
		tail=nodeptr;		
}
}
int deletequeue()
		{
			node* nodeptr=head;
			int a;
			if(head==NULL)
			{cout<<"underflow occured can't be deleted\n";
				return -1;
			}
			else
			{
			head=nodeptr->next;
			a=nodeptr->value;
			delete(nodeptr);
			cout<<"value of deleted node is "<<a<<endl;
			return(a);
		}
	}
void printqueue()
{
	if(head!=NULL)
	{node* nodeptr=head;
	while(nodeptr->next!=NULL)
	{cout<<nodeptr->value<<"   ";
		nodeptr=nodeptr->next;
	}
	cout<<nodeptr->value<<endl;
	}
	else
	cout<<"queue does not exist"<<endl;
}
};
int main()
{Queue queue1;
	queue1.deletequeue();
	queue1.printqueue();
	queue1.insertnode(34);
	queue1.printqueue();
	queue1.insertnode(346);
	queue1.printqueue();
	queue1.insertnode(3434);
	queue1.printqueue();
	queue1.deletequeue();
	queue1.printqueue();
	return 0;
}

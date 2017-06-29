#include<iostream>
using namespace std;
struct node
{
	int value;
	node* next;
};
class linkedlist{
	private:
		node* head;
	public:
		linkedlist()
		{head=NULL;
	}
void insertnode(int val)
{node* nodeptr=new node;
	(*nodeptr).value=val;
	nodeptr->next=NULL;
	node* nodeptr2=head;
	if(head==NULL)
	{
		head=nodeptr;
		}
	else
	{
	while(nodeptr2->next!=NULL)
	{nodeptr2=nodeptr2->next;
	}
	nodeptr2->next=nodeptr;
}
}
void printlist()
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
	cout<<"list does not exist"<<endl;
} 
void deletenode(int val)
{node* nodeptr=head;
	if(head==NULL)
	cout<<"no deletion possible"<<endl;
	else
	{
		while(nodeptr->value!=val && nodeptr->next!=NULL)
		{		nodeptr=nodeptr->next;
}
	node* nodeptr3=head;
	while(nodeptr3->next!=nodeptr)
	{
		nodeptr3=nodeptr3->next;
	}
	
	if(nodeptr->value==val)
{
	nodeptr3->next=nodeptr->next;
	delete(nodeptr);
}
else
	cout<<"value does not exist can't be deleted"<<endl;
}
}
void insertheadnode(int val)
{	node* nodeptr=new node;
	nodeptr->value=val;
	nodeptr->next=head;
	head=nodeptr;
}
			
};
int main()
{
	linkedlist list1;
	list1.printlist();
	list1.insertnode(67);
	list1.printlist();
	list1.insertnode(4);
	list1.printlist();
	list1.insertnode(56);
	list1.printlist();
	list1.insertnode(48);
	list1.printlist();
	list1.deletenode(50);
	list1.printlist();
	list1.insertnode(49);
	list1.printlist();
	list1.insertheadnode(34);
	list1.printlist();
	return 0;
	
}

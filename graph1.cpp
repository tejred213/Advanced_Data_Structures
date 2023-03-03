#include<iostream>
using namespace std;
class gnode
{
	int id;
	gnode *next;
	friend class graph;
};

class graph
{
	gnode *head[20];
	int n;
public:
	graph()
	{
		n=0;
		cout<<"Enter the number of friends: "<<endl;
		cin>>n;
		for(int id=0;id<n;id++)
		{
			head[id] = new gnode;
			head[id] -> id = id;
			head[id] -> next = NULL;
		}
	}
	void create();
	void display();
	void dfs();
	void dfs(int a[], int id);
	
};

void graph :: create()
{
	gnode *temp, *curr;
	char op;
	for(int id=0;id<n;id++)
	{
		temp = head[id];
		do
		{
			int v;
			cout<<"Enter the adjacent id: "<<id<<endl;
			cin>>v;
			if(v==id)
			{
				cout<<"Self loop not allowed!!"<<endl;
			}
			else
			{
				curr = new gnode;
				curr->id = v;
				temp->next = curr;
				temp = temp->next;
			}
			cout<<"Do you want to continue: (y/n)"<<endl;
			cin>>op;
		}
		while(op=='y');
	}
}

void graph :: display()
{
	gnode *temp;
	int id;
	for(int id=0;id<n;id++)
	{
		temp = head[id]->next;
		cout<<head[id]->id<<"->";
		while (temp!=NULL)
		{
			cout<<temp->id;
			cout<<"->";
			temp = temp->next;
		}
	cout<<endl;
	}
}
			
void graph :: dfs()
{
	int v;
	int visited[10];
	for(int id=0;id<n;id++)
	{
		visited[id]=0;
	}
	cout<<"Enter the starting Friend: "<<endl;
	cin>>v;
	dfs(visited, v);
}

void graph :: dfs(int visited[],int v)
{
	gnode *temp;
	temp=head[v]->next;
	cout<<v;
	visited[v]=1;
	while(temp!=NULL)
	{
		if(!visited[temp -> id])
			dfs(visited,temp->id);
			temp=temp->next;
	}
}
		

int main()
{
	graph a;
	a.create();
	a.display();
	a.dfs();
	return 0;
}										

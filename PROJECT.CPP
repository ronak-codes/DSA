#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
using namespace std;
long pass=7777;
class stack
{
	int a[20];
	int top;
	public:
	stack()
	{
			top=-1;
	}
	void push(int item);
	void pop();
	void display();
}s;
void stack::push(int item)
{
	if(top==10)
	{
		cout<<"SORRY STACK OVERFLOW:"<<endl;
	}
	else
	{
		top++;
		a[top]=item;
	}

}
void stack::pop()
{
	if(top==-1)
	{
		cout<<"SORRY  STACK UNDERFLOW ::"<<endl;

	}
	else
	{
		int n;
		n=a[top];
		top=top-1;
		cout<<"THE POPED ELEMENT IS:"<<n<<endl;
	}


}
void stack::display()
{
	if(top==-1)
	{
		cout<<"THERE IS NO ELEMENT IN THE STACK PLEASE TRY AGAIN:"<<endl;

	}
	else
	{
		cout<<"  THE CURRENT STACK LIST IS:";
		for(int i=0;i<=top;i++)
		{
			cout<<a[i]<<endl;
			cout<<"\t\t\t     ";
		 }
		cout<<endl;
	   }

}
class queue
{
	int front;
	int rear;
	int a[10];
	public:
	queue()
	{
		front=-1;
		rear=-1;
	}
	void enqueue(int item);
	void display();
	void dequeue();

}q;
void queue::enqueue(int item)
{
	if(front==-1&&rear==-1)
	{
		front++;
		rear++;
		a[rear]=item ;
	}
	else
	{
		rear++;
		a[rear]=item;
		cout<<"THE ENQUEUED ELEMENT IS:";cout<<a[rear]<<endl;
	}
}
void queue::dequeue()
{
	if(front==-1)
	{
		cout<<"QUEUE  UNDERFLOW:"<<endl;
		cout<<"FIRST ENTER THE ELEMENTS IN QUEUE:"<<endl;
	}
	else
	{
		int n;
		n=a[front];
		cout<<"THE DEQUEUED ELEMENT IS:";
		cout<<n<<endl;
		front++;

	}
}
void queue::display()
{
	if(rear==-1)
	{
		cout<<"QUEUE IS EMPTY:"<<endl;
		cout<<"ENTER THE ELEMENTS OF THE QUEUE:"<<endl;
	}
	else
	{
		// clrscr();
		cout<<"THE CURRENT ELEMENTS IN THE QUEUE ARE:"<<endl;
		for(int i=front;i<=rear;i++)
		{
			cout<<a[i]<<endl;
		}
	}
}
struct node
{
	char info;
	node *link;

}*top=NULL;
void push()
{
	node *t;
	t= new node();
	if(t=='\0')
	{
		cout<<"\t\t\tOVERFLOW:";

	}
	else
	{
		cout<<"\t\t\tINFO:";
		cin>>t->info;
		t->link=NULL;
	}
	if(top==NULL)
	{
		top=t;
	}
	else
	{
		t->link=top;
		top=t;
	}
}
void pop()
{
	node *t;
	if(top==NULL)
	{
		cout<<"\t\t\tUNDERFLOW:";
	}
	t= top;
	cout<<"\t\t\tDELETED ITEM IS:";
	cout<<t->info<<endl;
	top=t->link;
	delete t;
}
void display()
{
	if(top=='\0')
	{
		cout<<"\t\t\tSTACK IS EMPTY:";

	}
	node *t;
	t=top;
	int i=1;
	cout<<"\t\t\tELEMENTS ARE:\n";
	while(t!='\0')
	{

		cout<<"\t\t\t"<<i<<":"<<t->info<<endl;
		t=t->link;
		i++;
	}

}
struct nod
{
	nod *link;
	char info;

}*f=NULL,*r=NULL;
void Enqueue()
{
	nod *t;
	t= new nod();
	if(t==NULL)
	{
		cout<<"\t\t\tOVERFLOW:"<<endl;
		return;
	}
	cout<<"\t\t\tINFO:";
	cin>>t->info;
	t->link=NULL;
	if(f==NULL)
	{
		f=r=t;
	}
	else
	{
		r->link=t;
		r=t;
	}
}
void Dequeue()
{
	if(f==NULL)
	{
		cout<<"\t\t\tUNDERFLOW:::";
	}
	nod *t;
	t=f;
	cout<<"\t\tTHE DEQUEUED ELEMENT IS:";
	cout<<t->info<<endl;
	f=t->link;
	delete t;
}
void Display()
{
	if(f==NULL)
	{
		cout<<"\t\tQUEUE IS EMPTY:";
	}
	nod *t;
	t=f;
	int i=1;
	cout<<"\t\tTHE LINKED QUEUE IS:"<<endl;
	while(t!=NULL)
	{

		cout<<"\t\t\t"<<i<<":"<<t->info<<endl;
		t=t->link;
		i++;
	}
}
class circular
{
	int front,rear;
	int a[10];
	public:
	void enqueue(int r);
	void dequeue();
	void display();
	circular()
	{
		front=-1;
		rear=-1;
	}

};
void circular::enqueue(int r)
{
	if(front==0&&rear==9||rear==front-1)
	{
		cout<<"OVERFLOW:";
	}
	else if(front==rear==-1)
	{
		front++;
		rear++;
		a[front]=r;
	}
	else if(rear==9)
	{
		rear=0;
		a[rear]=r;
	}
	else
	{
		rear++;
		a[rear]=r;
	}
}
void circular::dequeue()
{
	if(front==rear==-1)
	{
		cout<<"UNDERFLOW:";
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==9)
		{
			front=0;
		}
		else
		{
			front++;
		}

	}
}
void circular::display()
{
	if(front==rear==-1)
	{
		cout<<"QUEUE IS EMPTY:"<<endl;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<a[i]<<endl;
		}
	}
}
int main()
{
	// clrscr();
	int r,c;
	int A[10][10];
	int B[10][10];
	int C[10][10];
	cout<<"ENTER YOUR CHOICE TO PERFORM OPERATION ON ANY OF THE FOLLOWING :"<<endl;
	cout<<"\t\t\t1.MATRICES :"<<endl;
	cout<<"\t\t\t2.ARRAYS :"<<endl;
	cout<<"\t\t\t3.STRINGS :"<<endl;
	cout<<"\t\t\t4.DATA STRUCTURE:"<<endl;
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"WHICH OF THE FOLLOWING OPERATION DO YOU WANT TO PERFORM ON MATRICES :"<<endl;
		cout<<"\t\t1.ADDITION OF MATRICES :"<<endl;
		cout<<"\t\t2.SUBTRACTION OF MATRICES :"<<endl;
		cout<<"\t\t3.MULTIPLICATION OF MATRICES :"<<endl;
		cout<<"\t\t4.TRANSPOSE OF MATRIX:"<<endl;
		int n1;
		cin>>n1;
		if(n1==1)
		{
		      //	int r,c;     //r=no of rows && c=no of columns
			cout<<"ENTER THE DIMENSION OF FIRST MATRIX :"<<endl;
			cout<<"ENTER THE NUMBER OF ROWS :";
			cin>>r;
			cout<<"ENTER THE NO OF COLUMNS :";
			cin>>c;
			cout<<endl;
			int r1,c1;
			cout<<"ENTER THE DIMENSION OF SECOND MATRIX :"<<endl;
			cout<<"ENTER THE NUMBER OF ROWS :";
			cin>>r1;
			cout<<"ENTER THE NO OF COLUMNS :";
			cin>>c1;
			if(r==r1&&c==c1)
			{
				int i,j;
			    //	int A[10][10];
			      //	int B[10][10];
				//int C[10][10];
				cout<<"ENTER THE ELEMENTS OF FIRST " <<r<<"*"<<c<<" MATRIX"<<endl;
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						cin>>A[i][j];

					}
				}
				cout<<"ENTER THE ELEMENTS OF SECOND " <<r1<<"*"<<c1<<" MATRIX"<<endl;
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						cin>>B[i][j];

					}
				}
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
					       C[i][j]=A[i][j]+B[i][j];

					}
				}
				cout<<"THE SUMMATION OF TWO MATRICES IS:"<<endl;
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						cout<<C[i][j]<<" ";

					}
					cout<<endl;
				}


			}
			else
			{
				cout<<"ONLY SQUARE MATRICES CAN BE ADDED:"<<endl;
			}


		}
		else if(n1==2)
		{
		       //	int r,c;     //r=no of rows && c=no of columns
			cout<<"ENTER THE DIMENSION OF FIRST MATRIX :"<<endl;
			cout<<"ENTER THE NUMBER OF ROWS :";
			cin>>r;
			cout<<"ENTER THE NO OF COLUMNS :";
			cin>>c;
			cout<<endl;
			int r1,c1;
			cout<<"ENTER THE DIMENSION OF SECOND MATRIX :"<<endl;
			cout<<"ENTER THE NUMBER OF ROWS :";
			cin>>r1;
			cout<<"ENTER THE NO OF COLUMNS :";
			cin>>c1;
			if(r==r1&&c==c1)
			{
				int i,j;
			       //	int A[10][10];
			       //	int B[10][10];
			      //	int C[10][10];
				cout<<"ENTER THE ELEMENTS OF FIRST " <<r<<"*"<<c<<" MATRIX"<<endl;
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						cin>>A[i][j];

					}
				}
				cout<<"ENTER THE ELEMENTS OF SECOND " <<r1<<"*"<<c1<<" MATRIX"<<endl;
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						cin>>B[i][j];

					}
				}
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
					       C[i][j]=A[i][j]-B[i][j];

					}
				}
				cout<<"THE SUBTRACTION OF TWO MATRICES IS:"<<endl;
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						cout<<C[i][j]<<" ";

					}
					cout<<endl;
				}


			}
			else
			{
				cout<<"ONLY SQUARE MATRICES CAN BE SUBTRACTED:"<<endl;
			}


		}
		else if(n1==3)
		{
			int r,c;     //r=no of rows && c=no of columns
			cout<<"ENTER THE DIMENSION OF FIRST MATRIX :"<<endl;
			cout<<"ENTER THE NUMBER OF ROWS :";
			cin>>r;
			cout<<"ENTER THE NO OF COLUMNS :";
			cin>>c;
			cout<<endl;
			int r1,c1;
			cout<<"ENTER THE DIMENSION OF SECOND MATRIX :"<<endl;
			cout<<"ENTER THE NUMBER OF ROWS :";
			cin>>r1;
			cout<<"ENTER THE NO OF COLUMNS :";
			cin>>c1;
			if(c==r1)
			{
				int i,j;
			      //	int A[10][10];
			       //	int B[10][10];
			       //	int C[10][10];
				cout<<"ENTER THE ELEMENTS OF FIRST " <<r<<"*"<<c<<" MATRIX"<<endl;
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						cin>>A[i][j];

					}
				}
				cout<<"ENTER THE ELEMENTS OF SECOND " <<r1<<"*"<<c1<<" MATRIX"<<endl;
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						cin>>B[i][j];

					}
				}
				for(i=0;i<r;i++)

					for(j=0;j<c1;j++)
					{
						C[i][j]=0;
						for(int k=0;k<c;k++)
						{
							C[i][j]+=A[i][k]+B[k][j];


						}

					}

				cout<<"THE MULTIPLICATION OF TWO MATRICES IS:"<<endl;
				for(i=0;i<r;i++)
				{
					for(j=0;j<c1;j++)
					{
						cout<<C[i][j]<<" ";

					}
					cout<<endl;
				}


			}
			else
			{
				cout<<"SINCE C1!=R2,MULTIPLICATION IS NOT POSSIBLE:"<<endl;
			}

		}
		else if(n1==4)
		{
			cout<<"ENTER THE DIMENSION OF THE MATRIX:"<<endl;
			cout<<"ROWS:";
			cin>>r;
			cout<<"COLUMNS:";
			cin>>c;
			cout<<"ENTER THE ELEMENTS OF MATRIX:"<<endl;
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cin>>A[i][j];
				}

			}
			for(int i=0;i<c;i++)
			{
				for(int j=0;j<r;j++)
				{
					B[i][j]=A[j][i];
				}


			}
			cout<<"THE TRANSPOSE OF MATRIX IS:"<<endl;
			for(int i=0;i<c;i++)
			{
				for(int j=0;j<r;j++)
				{
					cout<<B[i][j]<<" ";
				}
				cout<<endl;

			}


		}

	}
	else if(n==2)
	{
			int a[20],size;
			cout<<"ENTER YOUR CHOICE TO PERFORM OPERATION ON ANY OF THE FOLLOWING :"<<endl;
			cout<<"1.SUM OF ALL ELEMENTS OF ARRAY :"<<endl;
			cout<<"2.PRODUCT OF ALL THE ELEMENS OF ARRAY:"<<endl;
			cout<<"3.SORTING OF ARRAY:"<<endl;
			int n2;
			cin>>n2;
			if(n2==1)
			{
				cout<<"ENTER THE SIZE OF ARRAY;"<<endl;
				int sum=0;
				cin>>size;
				cout<<"ENTER THE ELEMENTS OF AN ARRAY:"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>a[i];
					sum+=a[i];
				}
				cout<<"THE SUM  OF ALL THE ELEMENTS IS:"<<sum<<endl;

			}
			else if(n2==2)
			{
				long product=1;
				cout<<"ENTER THE SIZE OF ARRAY;"<<endl;
				cin>>size;
				cout<<"ENTER THE ELEMENTS OF AN ARRAY:"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>a[i];
					product*=a[i];
				}
				cout<<"THE PRODUCT OF ALL THE ELEMENTS IS:"<<product<<endl;
			}
			else if(n2==3)
			{
				int temp;
				cout<<"ENTER THE SIZE OF ARRAY;"<<endl;
				cin>>size;
				cout<<"ENTER THE ELEMENTS OF AN ARRAY:"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>a[i];

				}
				cout<<"SELECT THE TYPE OF SORTING:"<<endl;
				cout<<"1.SELECTION SORTING:"<<endl;
				cout<<"2.BUBBLE SORTING:"<<endl;
				cout<<"3.INSERTION SORTING:"<<endl;
				int typ;
				cin>>typ;
				if(typ==1)
				{
					int pos;
					for(int i=0;i<size-1;i++)
					{
						temp=a[i];
						pos=i;
						for(int j=i+1;j<size;j++)
						{
							if(a[j]<temp)
							{
								temp=a[j];
								pos=j;
							}
						}
						a[pos]=a[i];
						a[i]=temp;
					}
					cout<<"THE ELEMENTS AFTER SORTING ARE:"<<endl;
					for(int i=0;i<size;i++)
					{
						cout<<a[i]<<" ";
					}

				}
				else if(typ==2)
				{

					for(int i=0;i<size;i++)
					{
						for(int j=0;j<size-1;j++)
						{
							if(a[j]>a[j+1])
							{
							    temp=a[j];
							    a[j]=a[j+1];
							    a[j+1]=temp;


							}
						}
					}
					cout<<"THE ELEMENTS AFTER SORTING ARE:"<<endl;
					for(int i=0;i<size;i++)
					{
						cout<<a[i]<<" ";
					}

				}
				else if(typ==3)
				{
					for(int i=0;i<size;i++)
					{
						for(int j=i;j>0;j--)
						{
							if(a[j]<a[j-1])
							{
								temp=a[j];
								a[j]=a[j-1];
								a[j-1]=temp;
							}
						}
					}
					cout<<"THE ELEMENTS AFTER SORTING ARE:"<<endl;
					for(int i=0;i<size;i++)
					{
						cout<<a[i]<<" ";
					}


				}



			}


	}
	else if(n==3)
	{
		char str[100],str1[100];
		// string str,str1;
		cout<<"ENTER YOUR CHPOICE TO PERFORM OPERATION ON THE STRING:"<<endl;
		cout<<"1.REVERSE STRING:"<<endl;
		cout<<"2.CONCATENATE TWO STRING:"<<endl;
		cout<<"3.COPY ONE STRING TO ANOTHER:"<<endl;
		cout<<"4.FIND LENGTH OF STRING:"<<endl;
		cout<<"5.COMPARE TWO STRINGS:"<<endl;
		int n3;
		cin>>n3;
		if(n3==1)
		{
			cout<<"ENTER THE  ORIGINAL STRING:";
			gets(str);
			strrev(str);
			cout<<"THE REVERSED STRING IS:"<<endl;
			cout<<str;
		}
		else if(n3==2)
		{
			cout<<"ENTER THE TWO STRINGS:"<<endl;
			cout<<"STRNG 1:";
			gets(str);
			cout<<"STRING 2:";
			gets(str1);
			strcat(str,str1);
			cout<<"THE CONCATENATED STRING IS:"<<endl;
			puts(str);

		}
		else if(n3==3)
		{
			cout<<"ENTER THE TWO STRINGS:"<<endl;
			cout<<"STRNG 1:";
			gets(str);
			cout<<"STRING 2:";
			gets(str1);
			strcpy(str,str1);
			cout<<"THE COPIED STRING ARE:"<<endl;
			puts(str);
		}
		else if(n3==4)
		{
			cout<<"ENTER THE STRING:"<<endl;
			gets(str);
			int l=strlen(str);
			cout<<"THE LENGTH OF THE STRING IS:";
			cout<<l;
		}
		else if(n3==5)
		{

			cout<<"ENTER THE TWO STRINGS:"<<endl;
			cout<<"STRING 1:";
			gets(str);
			cout<<"\n";
			// getline(cin,str);
			cout<<"STRING 2:";
			// getline(cin,str1);																																													cout<<"STRING 2:";
			gets(str1);
			if(strcmp(str,str1)==0)
			{
				cout<<"TWO STRING ARE IDENTICAL:"<<endl;
			}
			else
			{
				cout<<"TWO STRINGS ARE DIFFERENT:"<<endl;
			}
		}
	}
	else if(n==4)
	{
		int n4;
		cout<<"ENTER YOUR CHOICE:"<<endl;
		cout<<"1.STACKS:"<<endl;
		cout<<"2.QUEUES:"<<endl;
		cout<<"3.LINKED STACK:"<<endl;
		cout<<"4.LINKED QUEUE:"<<endl;
		cout<<"5.CIRCULAR QUEUE:"<<endl;
		cout<<"6.EXIT:"<<endl;
		cin>>n4;
		if(n4==1)
		{
			int ch,r;
			do
			{
				cout<<endl;
				cout<<"\tMENU TO PERFORM OPERATION ON THE STACK:"<<endl;
				cout<<"\t\t\t1.PUSH:"<<endl;
				cout<<"\t\t\t2.POP:"<<endl;
				cout<<"\t\t\t3.DISPLAY:"<<endl;
				cout<<"\t\t\t4.EXIT:"<<endl;
				cout<<"ENTER YOUR CHOICE TO PERFORM ANY OF THE ABOVE OPERATION ON THE STACK:"<<endl;
				cin>>ch;
				if(ch==1)
				{

					cout<<"ENTER THE ELEMENT YOU WANT TO PUSH IN THE STACK:";
					cin>>r;
					s.push(r);

				}

				else if(ch==2)
				{

					s.pop();
				}
				else if(ch==3)
				{

					s.display();
				}
				else if(ch==4)
				{
					exit(0);
				}
				else
				{
					cout<<"WRONG CHOICE PLEASE ENTER THE CORRECT CHOICE:"<<endl;
				}
			}while(ch!=4);
		}
		else if(n4==2)
		{
				int ch,r;
				do
				{
					cout<<endl;
					cout<<"\tMENU TO PERFORM OPERATION ON THE QUEUE:"<<endl;
					cout<<"\t\t\t1.ENQUEUE:"<<endl;
					cout<<"\t\t\t2.DEQUEUE:"<<endl;
					cout<<"\t\t\t3.DISPLAY:"<<endl;
					cout<<"\t\t\t4.EXIT:"<<endl;
					cout<<"ENTER YOUR CHOICE TO PERFORM ANY OF THE ABOVE OPERATION ON THE QUEUE:"<<endl;
					cin>>ch;
					if(ch==1)
					{

						cout<<"ENTER THE ELEMENT YOU WANT TO ENQUEUE IN THE QUEUE:";
						cin>>r;
						q.enqueue(r);
					}
					else if(ch==2)
					{
						// clrscr();
						q.dequeue();
					}
					else if(ch==3)
					{
						// clrscr();
						q.display();
					}
					else if(ch==4)
					{
						exit(0);
					}
					else
					{
						cout<<"WRONG CHOICE PLEASE ENTER THE CORRECT CHOICE:"<<endl;
					}
				}while(ch!=4);

		}
		else if(n4==3)
		{
			char ch;
			do
			{
				cout<<"ENTER YOUR CHOICE TO PERFORM THE FOLLOWING OPRATIONS ON STACK AS LINKED LIST:"<<endl;
				int n;
				cout<<"\t\t\t1.PUSH:"<<endl;
				cout<<"\t\t\t2.POP:"<<endl;
				cout<<"\t\t\t3.DISPLAY"<<endl;
				cout<<"\t\t\t4.EXIT:"<<endl;
				cin>>n;
				switch(n)
				{
					case 1:
					push();
					break;
					case 2:
					pop();
					break;
					case 3:
					display();
					break;
					case 4:
					exit(1);
					break;
					default:
					cout<<"! ENTER THE CORRECT CHOICE:"<<endl;
				}
				cout<<"\t\tO YOU WANNA CONTINUE:";
				cin>>ch;
			}while(ch=='y'||ch=='Y');

		}
		else if(n4==4)
		{
				char ch;
				do
				{

					cout<<"ENTER YOUR CHOICE TO PERFORM THE FOLLOWING OPRATION ON LINKED QUEUE :"<<endl;
					cout<<"\t\t\t1.ENQUEUE:"<<endl;
					cout<<"\t\t\t2.DEQUEUE:"<<endl;
					cout<<"\t\t\t3.DISPLAY"<<endl;
					cout<<"\t\t\t4.EXIT:"<<endl;
					int n;
					cin>>n;
					switch(n)
					{
						case 1:
						Enqueue();
						break;
						case 2:
						Dequeue();
						break;
						case 3:
						Display();
						break;
						case 4:
						exit(0);
						default:
						cout<<"\t\t! WRONG CHOICE:";
					}
					cout<<"\t\tDO YOU WANT TO CONTINUE:";
					cin>>ch;
					cout<<endl;
				}while(ch=='Y'||ch=='y');

		}
		else if(n4==5)
		{
				char ch;
				circular c;
				do
				{

					cout<<"ENTER YOUR CHOICE TO PERFORM THE FOLLOWING OPRATION ON CIRCULAR QUEUE :"<<endl;
					cout<<"\t\t\t1.ENQUEUE:"<<endl;
					cout<<"\t\t\t2.DEQUEUE:"<<endl;
					cout<<"\t\t\t3.DISPLAY"<<endl;
					cout<<"\t\t\t4.EXIT:"<<endl;
					int n;
					cin>>n;
					switch(n)
					{
						case 1:
						int e;
						cout<<"\t\tENTER THE ELEMENT :";
						cin>>e;
						c.enqueue(e);
						break;
						case 2:
						c.dequeue();
						break;
						case 3:
						c.display();
						break;
						case 4:
						exit(0);
						default:
						cout<<"\t\t! WRONG CHOICE:";
				}
				cout<<"\n\t\tDO YOU WANT TO CONTINUE:";
				cin>>ch;
				cout<<endl;
				}while(ch=='Y'||ch=='y');
		}
		else if(n4==6)
		{
			exit(2);
		}
		else
		{
			cout<<"INVALID CHOICE:"<<endl;
		}
	}
	getch();
}

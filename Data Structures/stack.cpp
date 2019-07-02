//stack using c++

#include<iostream>
using namespace std;

//creating a structure Node
struct Node{
		int data;
		Node *link;
};


/*
																KNOWLEDGE													

NULL is a “manifest constant” (a #define of C) that’s actually an integer that can be assigned to a pointer because of an implicit conversion.

nullptr is a keyword representing a value of self-defined type, that can convert into a pointer, but not into integers.

int i = NULL; // OK
int i = nullptr; // error - not a integer convertible value
int* p = NULL; //ok - int converted into pointer
int* p = nullptr; // ok
That, is important to solve an ambiguity that can arise in generic programming:

suppose you have two functions in overload:

void func(int x);
void func(int* x);
Now, if you call func(NULL), you are actually calling … the 1) variant, being NULL an int. But func(nullptr) will call the 2) variant, being nullptr not an int.


*/

Node *top = NULL;

int push(int n){	
		Node *temp = new Node;
		
		temp->data=n;
		temp->link=NULL;

		if(top==NULL){
			top=temp;
		}
		 else{
		 	temp->link=top;
		 	top=temp;
		 }
cout<<"An Element with Value "<<n<<" Inserted into stack!\n";
return 0;
}

void pop(){
	Node *temp=new Node;
	if(top!=NULL){
		temp=top;
		cout<<"Element with value "<<temp->data<<" popped!\n";
		top=temp->link;
		delete temp;
    }
	else{
			cout<<"No node Exists!";
        }
}


void showall(){
		if(top!=NULL){
			Node *temp=new Node;
			temp=top;
			while(temp!=NULL){
			cout<<"\nElement has value "<<temp->data<<"\n";
			temp=temp->link;
			}
		}
		else{
			cout<<"Stack is Empty\n";
		}
}

int main(){
	//enter 5 elements
	int i=0;
	for(i=0;i<5;i++){
		push(i);
	}

	pop();
	showall();
	return 0;
}
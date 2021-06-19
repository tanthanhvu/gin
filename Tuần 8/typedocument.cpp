#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Function to perform
// "WRITE X" operation
void WRITE(stack<char>& Undo,
		char X)
{
	// Push an element to
	// the top of stack
	Undo.push(X);
}

// Function to perform
// "UNDO" operation
void UNDO(stack<char>& Undo,
		stack<char>& Redo)
{
	// Stores top element
	// of the stack
	char X = Undo.top();

	// Erase top element
	// of the stack
	Undo.pop();

	// Push an element to
	// the top of stack
	Redo.push(X);
}

// Function to perform
// "REDO" operation
void REDO(stack<char>& Undo,
		stack<char>& Redo)
{
	// Stores the top element
	// of the stack
	char X = Redo.top();

	// Erase the top element
	// of the stack
	Redo.pop();

	// Push an element to
	// the top of the stack
	Undo.push(X);
}

// Function to perform
// "READ" operation
void READ(stack<char> Undo)
{
	// Store elements of stack
	// in reverse order
	stack<char> revOrder;

	// Traverse Undo stack
	while (!Undo.empty()) {
		// Push an element to
		// the top of stack
		
		revOrder.push(Undo.top());

		// Erase top element
		// of stack
		Undo.pop();
	}

	while (!revOrder.empty()) {
		// Print the top element
		// of the stack
		cout << revOrder.top();
	Undo.push(revOrder.top());

		// Erase the top element
		// of the stack
		revOrder.pop();
	}

}



// Driver Code
int main()
{
	cout << "Press '[' and Enter to UNDO";
	cout << "\nPress ']' and Enter to REDO";
	cout << "\nYour text here: " << endl;
	stack<char> Undo;
	stack<char> Redo;
	string  s;
	while(true){
		getline(cin,s);
		int n=s.length();
		for(int i=0;i<n;i++){
			WRITE(Undo,s[i]);	
		}
		if(s[n-1]==91){
			Undo.pop();
			UNDO(Undo,Redo);
			READ(Undo);
		}
		if(s[n-1]==93){
			Undo.pop();
			if(!Redo.empty()){
				REDO(Undo,Redo);
				READ(Undo);
			}
			else{
				READ(Undo);
			} 
		}
	}
	
	return 0;
}

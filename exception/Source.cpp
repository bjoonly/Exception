#include<iostream>
#include"Stack.h"
using namespace std;

int main() {
	Stack<int>st(2);
	try {
		cout<<st.Pop()<<endl;
	}
	catch (EmptyException& ex) {
		cout << ex.what() << endl;;
	}
	try {
		st.Push(3);
		cout << st.Peek() << endl;
		st.Push(10);
		cout << st.Peek() << endl;
		st.Push(100);
		cout << st.Peek() << endl;
	}
	catch (InvalidSizeException&ex) {
		ex.Message();
	}	
	catch (EmptyException& ex) {
		cout << ex.what()<<endl;
	}
	catch (OverflowException& ex) {
		cout << ex.what()<<endl;
	}
	return 0;
}
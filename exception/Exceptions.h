#pragma once
#include<stdexcept>
#include<iostream>
#include<string>
using namespace std;
class InvalidLengthException :public exception {
	int length;
public:
	InvalidLengthException(const char*message, int length):length(length),exception(message){}
	void Message()const {
		cout << what() << endl;
		cout << "Length: " << length << endl;
	}
};
class FileException :public exception {
	string fileName;
public:
	FileException(const char* message, string fileName) :fileName(fileName), exception(message) {}
	void Message()const{
		cout << "File name: " << fileName << endl;
		cout << what() << endl;	
	}
};
class InvalidSizeException :public invalid_argument {
	int size;
public:
	InvalidSizeException(const char* message, int size) :invalid_argument(message), size(size) {}
	void Message()const {
		cout << what() << endl;
		cout <<"Size = "<<size << endl;
	}
};
class InvalidIndexException :public out_of_range {
	int index;
public:
	InvalidIndexException(const char*message,int index):out_of_range(message),index(index){}
	void Message()const {
		cout << what() << endl;
		cout << "Index: " << index << endl;
	}
};
class InvalidArg :public invalid_argument {
public:
	InvalidArg(const char*message):invalid_argument(message){}
};
class MathException :public exception {
public:
	MathException(const char*message):exception(message){}
};
class OverflowException :public logic_error {
public:
	OverflowException(const char*message):logic_error(message){}
};
class EmptyException :public logic_error {
public:
	EmptyException(const char*message):logic_error(message){}
};

class DivideByZeroException :public exception {
public:
	DivideByZeroException():exception(){}
	const char* what()const override{
		return "Divide by zero.\n";
	}
};

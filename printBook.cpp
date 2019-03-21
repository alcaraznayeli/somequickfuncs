#include<iostream>

using namespace std;

struct person{
	string name;
	char gender;
};

struct book{
	string title;
	double cost;
	person author;
};

void printBook(const book &b){
// pre conditions; the address of a book b is passed in. book b is a const array and has a title, cost, and struct person(author).
	cout << b.title <<endl;
	cout<< "this book costs $"<< b.cost << endl;
	cout<< "and was written by" << b.author.name <<","<<b.author.gender<< endl;
	//post condition; the function has printed the title, cost and author of the book. it uses . because it is not a pointer in the struct
}
void printBooks(const book arr[], int size){
	for (int i=0; i<size; i++){
		printBook(arr[i]);
	}
}
int main(){
	book ourBook = { "Harry Potter and The Sorcerer's Stone", 15.50, {"J.K. Rowling", 'F'}};
	book theBook = { "The Hunger Games", 10.99, {"Suzanne Collins", 'F'}};
	book arr[2]= {ourBook, theBook};
	printBooks(arr,2);
	return 0;
}

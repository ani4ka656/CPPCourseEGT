#include "Book.h"
#include <vector>
int main() {
	Book b1("title1", "author1", 258);
	Book b2("title2", "author2", 412);
	Book b3("title3", "author3", 785);
	vector<Book> books;
	books.push_back(b1);
	books.push_back(b2);
	books.push_back(b3);
	for (int i = 0; i < books.size(); i++)
	{
		cout << "The info of book:" << i + 1<< endl;
		books[i].display();
		cout << "-----------END OF BOOK" << i + 1 << "-----------" << "\n\n";
	}
	return 0;
}
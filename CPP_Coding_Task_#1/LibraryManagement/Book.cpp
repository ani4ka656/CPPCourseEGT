#include "Book.h"

Book::Book(string title_, string author_, string ISBN_) : title(title_), author(author_), ISBN(ISBN_)
{
}

void Book::setTitle(string title_)
{
    this->title = title_;
}

void Book::setAuthor(string author_)
{
    this->author = author_;
}

void Book::setISBN(string ISBN_)
{
    this->ISBN = ISBN_;
}

string Book::getTitle() const
{
    return this->title;
}

string Book::getAuthor() const
{
    return this->author;
}

string Book::getISBN() const
{
    return this->ISBN;
}

void Book::display() const
{
    cout << "The Title of the book is: " << getTitle() << endl
         << "The Author of the book is: " << getAuthor() << endl
         << "The Title of the book is: " << getISBN() << endl;
    cout << "-------------------------------------------" << endl;

}

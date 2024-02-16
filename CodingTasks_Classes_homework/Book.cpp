#include "Book.h"

Book::Book(string title_, string author_, int pages_): title(title_), author(author_), pages(pages_)
{
}

string Book::getTitle() const
{
    return this->title;
}

string Book::getAuthor() const
{
    return this->author;
}

int Book::getPages() const
{
    return this->pages;
}

void Book::display() const
{
    cout << "The title of the book is: " << getTitle() << endl
        << "The author of the book is: " << getAuthor() << endl
        << "The pages of the book are: " << getPages() << endl;
}

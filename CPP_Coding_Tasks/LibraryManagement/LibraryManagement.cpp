
#include <vector>
#include "Book.h"
#include "Member.h"

int main()
{
    Book books[] = {
       Book("book1", "author1", "55557"),
       Book("book2", "author2", "44447")
    };

    Member members[] = {
        Member("member1", 20, "1"),
        Member("member2", 30, "2")
    };

  
    members[0].display();
    members[1].display();
    Book* borrowed = &books[0];
    
    members[1].borrowBook(borrowed);

    return 0;
}

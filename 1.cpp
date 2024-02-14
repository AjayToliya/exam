#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title,author;
    int publishedYear;

    Book(string t, string a, int y)
	{
		this->title = t ;
		this->author = a ;
		this->publishedYear = y ;
	}
};

int main() {
    int num = 3; 
    Book books[num]={
        Book("1", "1", 2022),
        Book("1", "1", 2023),
        Book("1", "1", 2024)
    };

    for (int i = 0; i < num; ++i)
	{
        cout << "Title = " << books[i].title << endl;
        cout << "Author = " << books[i].author << endl;
        cout << "Published Year = " << books[i].publishedYear<<endl;
        cout << endl;
    }

    return 0;
}


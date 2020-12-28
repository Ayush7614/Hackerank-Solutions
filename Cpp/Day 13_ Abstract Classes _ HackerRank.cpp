
class MyBook : public Book
{
    public:
    int price;
    MyBook(string title, string author, int price): Book(title,author)
    {
        this->price=price;
    }

    virtual void display()
    {
         cout << "Title: " <<Book::title << "\nAuthor: " << Book::author << "\nPrice: " << price << endl;
    }

};
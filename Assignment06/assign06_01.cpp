/*
Q1. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]
*/
#include<iostream>
using namespace std;
class invalidargument
{
    private:
        string message;
    public:
        invalidargument(void):message("")
        { }
        invalidargument(string message):message(message)
        { }
        string getmessage()
        {
            return message;
        }



};
class Product
{
    //id ,title,price
    protected:
    int id;
    string title;
    double price;
    public:
    Product(void):id(0) ,title(" "),price(0)
    { }
    Product(int id , string title, double price): id(id),title(title),price(price)
    { }
    virtual double calculateBill()=0;
    virtual void accept()
    {
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter title:";
        cin>>title;
        cout<<"enter price";
        cin>>price;
        if(price<=0)
        {
            throw invalidargument("invalid price");
        }
    }
    virtual ~Product()
    {

    } 

};
class Book:public Product
{
    private:
    string author;
    // author
    public:
    Book(void):author(" ")
    { }
    Book(string author):author(author)
    { }
    void accept()
    {
        Product::accept();
        cout<<"enter author";
        cin>>author;
    }
    double calculateBill()
    {
        return price -(price * 10/100);
    }

};
class Tape:public Product
{
    private:
    string artist;
    //artist
    public:
    Tape(void):artist(" ")
    { }
    Tape(string artist):artist(artist)
    { }
    void accept()
    {
        Product::accept();
        cout<<"Enter artist";
        cin>>artist;
    }
    double  calculateBill()
    {
        return  price-(price * 5/100);
    }

};
int menuList()
{
    int choice;
    cout<<"0.exit"<<endl;
    cout<<"1.Book"<<endl;
    cout<<"2.Tape"<<endl;
    cout<<"enter choice"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    try
    {
        int choice;
        Product* arr[3];
        for(int i=0;i<3;i++)
        {
            choice=menuList();
            switch(choice)
            {
                case 1:
                arr[i]=new Book();
                break;
                case 2:
                arr[i]=new Tape();
                break;
                default:
                    cout<<"invalid"<<endl;
                    continue;
            }
            arr[i]->accept();
            
        }
        double total;
        for(int i=0;i<3;i++)
        {
            total=total+arr[i]->calculateBill();
        }
        cout<<"final bill"<<total << endl;
        for(int i=0;i<3;i++)
        {
            delete arr[i];
            
        }

    }
    catch(invalidargument &e)
    {
        cout<<e.getmessage()<<endl;
    }
    return 0;
    
    
    
    
}
int main1()
{
    int choice;
    Product* arr[3];
    for(int i=0;i<3;i++)
    {
        choice=menuList();
        

            switch(choice)
            {
            case 1:
                arr[i]=new Book();
                break;

            case 2:
                arr[i]=new Tape();
                break;
            default:
            cout<<"invalid choice";
            i--;
                
            }
         arr[i]->accept();

        
       
    }

    double total=0;
        for(int i=0;i<3;i++)
        {
            total=total + arr[i]->calculateBill();
        }
        cout<<"\n Final Bill="<<total<<endl;
    for(int i = 0; i < 3; i++) 
    { 
        delete arr[i];
    }

    return 0;
}
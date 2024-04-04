#include <iostream>
#include <string>

using namespace std;

//Publication

class Publication
{
private:
	string title;
	float price;

public:
	//Constructor
	Publication()
	{
		title = "";
		price = 0.0;
	}

	//input data
	virtual void getData()
	{
		cout << "\t Enter Title of Publication : ";
		cin >> title;
		cout << "\t Enter Price of Publication : ";
		cin >> price;
		
	}

	//display data. 
	virtual void putData() const
	{
		cout << "\t Publication Title : " << title << endl;
		cout << "\t Publication Price: " << price << endl;
		
	}

	//Destructor
	~Publication()
	{

	}
};

//Book
class Book :public Publication
{
private:
	int pageCount;

public:

	//Constructor
	Book() 
	{
		pageCount = 0;
	}
	
	void getData()
	{
		Publication::getData(); 
		cout << "\t Enter Book Page_Count : "; 
		cin >> pageCount;
		cout << endl;
	}


	void putData() const
	{
		Publication::putData();  
		cout << "\t Book Page Count : " << pageCount << endl;
	}

	//Destructor
	~Book()
	{

	}
};


//Tape
class Tape :public Publication
{
private:
	float playingTime;

public:
	Tape() 
	{
		playingTime = 0.0;
	}
	
	void getData()
	{
		Publication::getData();
		cout << "\t Enter Tape Playing Time(in minutes) : ";
		cin >> playingTime;
		cout << endl;
	}

	void putData()
	{
		Publication::putData();
		cout << "\t Tape Playing Time : " << playingTime <<" minutes " << endl;
	}

	//Destructor
	~Tape() 
	{

	}
};

//Main function
int main(void) 
{
	Book B1;
	Tape T1;

	cout << endl << endl;
	cout << "\t\t*Publications*" << endl << endl;

	cout << "\t\t Enter Book Details" << endl << endl;
	B1.getData();
	cout << endl;
	cout << "\t\t Enter Tape Details" << endl << endl;
	T1.getData();
	cout << endl << endl;

	cout << "\t\t *Book Details*" << endl << endl;
	B1.putData();
	cout << endl << endl;
	
	cout << "\t\t *Tape Details*" << endl << endl;
	T1.putData();
	cout << endl << endl;

	return 0;
}
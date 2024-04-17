#include <iostream>
#include <string>
#include<fstream>
#include <cstdlib> 
#include <ctime>
#include<windows.h>

using namespace std;
int totalfood,totalmovie;
class Cinema
{
protected:
	string movie_name;
	int tickets_available;
	double ticket_price;
public:
	Cinema();
	Cinema(string x, int y, double z);
	~Cinema();

	string get_name_of_movie();

	int get_available_tickets();

	double get_price();

	void set_movie_name(string new_movie_name);

	void set_tickets_available(int new_tickets_available);

	void set_ticket_price(double new_ticket_price);

	double PurchaseTicket(int new_tickets_available);

	void Display();
};


class Movie
{
protected:
	Cinema * p_MovieList;
	string theater_name;
	string theater_location;
public:
	//default constructor setting pointer to NULL
	Movie(){
		p_MovieList =NULL;
	};
	
	
	//setting variables using constructor
	Movie(string a, string b){
			theater_name = a;
         	theater_location = b;
        	p_MovieList = NULL;
	};
		
	~Movie();
	
	void Init(Cinema * MovieList, int array_size);
	
	void Run();
	
	void DisplayMenu();
	
	void ViewMovies();
	
	Cinema * SearchMovie();
	
	Cinema * FindMovie(string find_movie_name);
	
	void PurchaseTicket();
};

const int array_size = 8;				// number of movies that will be available at our theater

class Person {
	private:
		string name;
		long long cell;
	public:
		void setName (string n) {
			name = n; }
		string getName () {
			return name; }
		void setCell (long long ce) {
			cell = ce; }
		long long getCell () {
			return cell; }  
		void inputDetails () {
			cout<<"\t\t\t====================================================="<<endl;
			cout<<"\t\t\t\t\tPersonal Info"<<endl;
			cout<<"\t\t\t====================================================="<<endl;
			cout<<"\t\t\t\t\t**************"<<endl;
			cout<<"\t\t\t\t\tInput Details"<<endl;
			cout<<"\t\t\t\t\t**************"<<endl;
			cout<<"\t\t\t\t\tEnter Your Name : ";
			getline(cin,name);
			setName(name);
			cout<<"\t\t\t\t\tEnter Your Phone Number : ";
			cin>>cell;
			setCell(cell);
			cout<<endl;
	}
		void displayDetails() {
	
	}
};
class Customer : public Person {
	private:
		string un;
		string pass;	
	public:
		void displayDetails () {
			std::ofstream out;
			out.open("Booking Reservation Details.txt",ios::app);
			out<<"\t\t\t\tDisplaying Personal Details"<<endl;
			out<<"\t\t\t\t*******************"<<endl;
			out<<"Name         : "<<getName()<<endl;
			out<<"Phone Number : "<<getCell()<<endl;
			out.close();   }
		void admin () {  
		cout<<endl;                                 
		cout<<"\t\t\t*********************************************************"<<endl;
		cout<<"\t\t\t\tWelcome To Theatre Booking Management System"<<endl;
		cout<<"\t\t\t*********************************************************"<<endl;
		cout<<"\t\t\t\t\t======================"<<endl;
		cout<<"\t\t\t\t\t\tLogin"<<endl;
		cout<<"\t\t\t\t\t======================"<<endl;
		
		for (int i=0;i<1000;i++){
		cout<<"\t\t\t\t\tEnter UserName : ";
		cin>>un;
		if (un == "admin" || un == "Admin") {
		    break;}
		    else {
		    	cout<<"\t\t\t\t\tInvalid Username !!!"<<endl;
			}}
			
			for (int i=0;i<1000;i++){
				cout<<"\t\t\t\t\tEnter Password : ";
			cin>>pass;
		if (pass == "admin" || pass == "Admin") {
			
			cin.sync();
			break;
		} else {
			cout<<"\t\t\t\t\tInvalid Password !!!"<<endl;
		}
		}
		system ("cls");
	}
};

class Seating: public Customer {
	public:
	void displayseats(){
    cout<<"\n\t\t\t\t\t::Screening::"<<std::endl<<std::endl;
	int row,col,i,j=1,k;
	for(k=0;k<=2;k++){
	cout<<"\t\t\t\t   -------------------------"<<endl;
	if(k==0){
	cout<<endl<<"\t\t\t\t\t  ::Silver::"<<endl<<endl;}
	else if(k==1){
		j=1;
	cout<<endl<<"\t\t\t\t\t  ::Gold::"<<endl<<endl;}
	else if(k==2){
		j=1;
	cout<<endl<<"\t\t\t\t\t  ::Diamond::"<<endl<<endl;}
	cout<<"\t\t\t\t   -------------------------";
	for(row=0;row<=2;row++){
	
    std::cout<<std::endl<<std::endl;
	for(row=0;row<=2;row++){
		cout<<endl<<"\t";
		for(col=0;col<=9;col++){
			i=rand()/20000;
	if(i==0){
	cout<<"Avil-"<<j<<"\t";
	 j=j+1;
}
	else{
	cout<<"Book-"<<j<<"\t";
	j=j+1;
}
		}cout<<endl<<endl;
}	
}}}};

class Fooditems{
	public:
	int quan;
	float bill=0; 
	int choice,choice1;
	void Display(){
	cout<<"\t\t\t\t\t::Menu::"<<endl;
	cout<<endl<<"\tFast Food\t\t\tPopcorns\t\t\tBeverages"<<endl<<endl;
	cout<<"1) Zinger Burger   Rs 200 \t 1) Small Bag     Rs 150 \t 1) Coffee        Rs 120 "<<endl;
	cout<<"2) Large Nachos    Rs 400 \t 2) Medium Bag    Rs 200 \t 2) Drinks 500ml  Rs 80 "<<endl;
	cout<<"3) Loaded Fries    Rs 220 \t 3) Large Pop     Rs 250 \t 3) Water         Rs 70 "<<endl;
    cout<<"4) Wings & Nachos  Rs 400 \t 4) Caramel Bag   Rs 300 \t 4) Drinks 1.5L   Rs 150 "<<endl;
}
    
    void Input () {
    std::ofstream out;
    out.open("Booking Reservation Details.txt",ios::app);
    string Fastfood[4]={"Zinger Burger", "Large Nachos", "Loaded Fries", "Wings & Nachos"};
    string Popcorns[4]={"Small Bag", "Medium Bag", "Large Pop","Caramel Bag"};
    string Beverages[4]={"Coffee", "Drinks 500ml", "Water","Drinks 1.5L"};
    int price[4] = {200,400,220,400};
    int price1[4] = {150,200,250,300};
    int price2[4] = {120,80,70,150};
    cout<<endl<<endl<<"\t\t\tWhat Type Of Category You Want To Order: "<<endl<<endl;
    cout<<"|1| Fast Food"<<endl;
    cout<<"|2| PopCorns"<<endl;
    cout<<"|3| Beverages"<<endl;
    cout<<"Enter Your Choice: ";
	cin>>choice;
	int num;
    while (num !=4 ) {
	if (choice==1 ) {
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Enter 1, 2, 3, 4 for type of Fast Food as shown in the Menu"<<endl;
	cout<<"--------------------------------------------------"<<endl;
		cout<<"Enter the Type Of Fast Food You Want: ";
    	cin>>choice1;
		cout<<"Enter The Quantity You Want: ";
    	cin>>quan;
    	if ( choice1==1) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Fastfood[0]<<" each at Rs "<<price[0]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Fastfood[0]<<" each at Rs "<<price[0]<<endl;
    		
    			bill = bill+price[0]*quan;
			}
		else if ( choice1==2) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Fastfood[1]<<" each at Rs "<<price[1]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Fastfood[1]<<" each at Rs "<<price[1]<<endl;
    		
    			bill = bill+price[1]*quan;
			}
		else if ( choice1==3) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Fastfood[2]<<" each at Rs "<<price[2]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Fastfood[2]<<" each at Rs "<<price[2]<<endl;
    		
    			bill = bill+price[2]*quan;
			}
		else if ( choice1==4) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Fastfood[3]<<" each at Rs "<<price[3]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Fastfood[3]<<" each at Rs "<<price[3]<<endl;
    		
    			bill = bill+price[3]*quan;
			}
		}
	else if (choice==2) {
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Enter 1, 2, 3, 4 for type of Popcorns as shown in the Menu"<<endl;
	cout<<"--------------------------------------------------"<<endl;
		cout<<"Enter the Type Of PopCorns You Want: ";
    	cin>>choice1;
		cout<<"Enter The Quantity You Want: ";
    	cin>>quan;
    	if ( choice1==1) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[0]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[0]<<endl;
    		
    			bill = bill+price1[0]*quan;
			}
		else if ( choice1==2) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[1]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[1]<<endl;
    		
    			bill = bill+price1[1]*quan;
			}
		else if ( choice1==3) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[2]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[2]<<endl;
    		
    			bill = bill+price1[2]*quan;
			}
		else if ( choice1==4) {
    		cout<<endl<<endl<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[3]<<endl<<endl<<endl;
    		out<<"You ordered "<<quan<<" "<<Popcorns[0]<<" each at Rs "<<price1[3]<<endl;

    		bill = bill+price1[3]*quan;
			}
	}
	else if (choice==3) {
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Enter 1, 2, 3, 4 for type of Beverages as shown in the Menu"<<endl;
	cout<<"--------------------------------------------------"<<endl;
		cout<<"Enter the Type Of Beverages You Want: ";
    	cin>>choice1;
		cout<<"Enter The Quantity You Want: ";
    	cin>>quan;
    	if ( choice1==1) {
    	cout<<endl<<endl<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[0]<<endl<<endl<<endl;
    	out<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[0]<<endl;

    			bill = bill+price2[0]*quan;
			}
		else if ( choice1==2) {
    	cout<<endl<<endl<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[1]<<endl<<endl<<endl;
    	out<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[1]<<endl;

    			bill = bill+price2[1]*quan;
			}
		else if ( choice1==3) {
    	cout<<endl<<endl<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[2]<<endl<<endl<<endl;
        out<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[2]<<endl;

    			bill = bill+price2[2]*quan;
			}
		else if ( choice1==4) {
    	cout<<endl<<endl<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[3]<<endl<<endl<<endl;
    	out<<"You ordered "<<quan<<" "<<Beverages[0]<<" each at Rs "<<price2[3]<<endl;

    			bill = bill+price2[3]*quan;
			}
	}
	else{
		cout<<"====Please choose correct option===="<<endl<<endl;
	}
	cout<<"Enter 4 to end or press any key to continue your order: ";
	cin>>num;
	if(num==4){	
	totalfood=bill;
	cout<<endl<<"Your Food & Drinks total bill is "<<bill<<endl;
	out<<endl<<"Your Food & Drinks total bill is "<<bill<<endl;
	out.close();		
		break;
	}
    cout<<"What Type Of Category You Want To Order: "<<endl;;
    cout<<"|1| Fast Food"<<endl;
    cout<<"|2| PopCorns"<<endl;
    cout<<"|3| Beverages"<<endl;
    cout<<"Enter Your Choice: ";
	cin>>choice;
	}
}
};

int main ()
{
	std::ofstream out;
    out.open("Booking Reservation Details.txt",ios::out);
	system("color 72");
	Cinema movie_objects[array_size];
	Movie * p_Movie = new Movie ("NUEPLEX","KARACHI, Rashid Minhas ROAD");
	p_Movie->Init(movie_objects, array_size);
	p_Movie->Run();
	delete p_Movie;
	int total;
	total=totalfood+totalmovie;
	cout<<endl<<endl<<"Your total Movie and Food & Drinks Bill is "<<total<<endl<<endl;
	out<<"\t\tYour total Movie and Food & Drinks Bill is "<<total<<endl<<endl<<endl;
	out.close();
	return 0;
}

// public destructor
Movie::~Movie()
{
	cout << "Theater " << theater_name << ",Location " << theater_location 
		<< " has been closed.." << endl;
}

// Init is filling the array of movie objects

void Movie::Init(Cinema * MovieList, int array_size)
{
	string movie_titles[array_size ] = {"Infinity War",
		"Black Panther",
		"Venom",
		"Dr Strange",
		"Tomb Raider",
		"Fantastic Beasts",
		"The Nun",
		"Conjuring"};

	int theater_tickets[array_size ] = {100,75,90,90,75,115,120,130};

	double movie_price[array_size ] = {300,350,400,300,500,400,600,200};

	Cinema * p = MovieList;

	for(int i=0;i <= array_size  - 1;i++){
		p->set_movie_name(movie_titles[i]);
		p->set_tickets_available(theater_tickets[i]);
		p->set_ticket_price(movie_price[i]);
		p++;
	}

	p_MovieList = MovieList;

}

// this member is running a do while loop to ask for user selection

void Movie::Run()
{
	int option;

	do{

		DisplayMenu();

		cout << endl << "\t\t\t\tPlease select an option: ";

		cin >> option;
        Seating obj1;
        Fooditems F1;
		switch (option)
		{
       
		case 1:
			ViewMovies();
			system("PAUSE");
			system("CLS");
			break;

		case 2:

			SearchMovie();
			system("PAUSE");
			system("CLS");
			break;

		case 3:

			PurchaseTicket();
			break;

        case 4:
            system("CLS");
			obj1.displayseats();
			system("PAUSE");
			system("CLS");
			break;
			
		case 5:
            system("CLS");
            F1.Display();
			F1.Input();
			system("PAUSE");
			system("CLS");
			break;
			
		case 6:
			
			cout<<endl;
			cout <<"It Was A Pleasure Serving You!" << endl;
			break;
			
		default:

			cout <<"Please choose a valid option:" << endl
				<< "=============================" << endl;
			cin.ignore();

		}
	}
	while (option != 6);
}

// this member has menu with banner, stating the name and location while showing options

void Movie::DisplayMenu()
{
		cout<<"\t\t\tTheater: " << theater_name << " at " << theater_location << endl
		<< endl <<"\t\t\t\t  ***********************  " << endl
		<<"\t\t\t\t||     WELCOME   TO      ||" << endl
		<<"\t\t\t\t||        NUEPLEX        ||" << endl
		<<"\t\t\t\t  ***********************  " << endl << endl
		<<"\t\t\t\tNueplex Movie Theater System" << endl
		<<"\t\t\t\t===========================" << endl
		<<"\t\t\t\t\tMAIN MENU: " << endl
		<<"\t\t\t\t1--> View all movies" << endl
		<<"\t\t\t\t2--> Search a movie" << endl
		<<"\t\t\t\t3--> Purchase tickets" << endl
		<<"\t\t\t\t4--> Seats Available" << endl
		<<"\t\t\t\t5--> Food & Drinks" << endl
		<<"\t\t\t\t6--> Quit" << endl;
	
}

// this member uses a for loop to show movie objects (title,tickets available, price)

void Movie::ViewMovies()
{

	Cinema * p_view_movies = p_MovieList;
    system("CLS");
	cout << endl
		<<"Here are the movies that are showing " << endl
		<<"at Nueplex Screens :" << endl
		<<"=========================" << endl << endl;

	for (int i = 0; i < array_size ; i++){
		cout << "Movie showing at theater "  << i + 1  << ": " << endl;
		p_view_movies->Display();
		++p_view_movies;
	}
}

// this member asks the user to enter a movie name, then uses FindMovie to
// get a pointer, then displays the object //c-p

Cinema * Movie:: SearchMovie()
{
	string search_movie_name;
	
	cout<<endl;
	cout << "\t\t\t\tPlease enter a movie name: ";
	cin.sync();
	std::getline(std::cin, search_movie_name);

	Cinema * p = FindMovie(search_movie_name);

	if (p != NULL){
		p->Display();
	} 
	else {
		cout << endl <<endl << "\t\t\t\tError: Movie not found." << endl << endl;
		return NULL;
	}
	return p;
}

// this member uses a for loop to search through the objects' names
// then uses an if loop to match them up and return a pointer back to the object

Cinema * Movie::FindMovie(string find_movie_name)
{

	Cinema * p_find_movie = p_MovieList;
    
	for (int i = 0; i < array_size ; i++){
		if (p_find_movie->get_name_of_movie() == find_movie_name){
			cout << endl << endl << "\t\t\t\tMovie found" << endl;
			return p_find_movie;
		}
		else {
			p_find_movie++;
		}
	}
	return NULL;
}

// this member allows the user to purchase a certain amount of tickets
// by using the returned pointer from the FindMovie member

void Movie::PurchaseTicket()
{   // the puchase details file will be formed to store the personal details
    // and booking details of user 
    std::ofstream out;
    out.open("Booking Reservation Details.txt",ios::app);
	string purchase_movie_name;
	int total_tickets;
    Seating obj;
	obj.admin();
	obj.inputDetails();
	obj.displayDetails();
	out<<endl<<endl<<"\t\t\t\t\tDisplaying Booking Details"<<endl;
	out<<"\t\t\t\t\t*******************"<<endl;
	cout<<endl<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t\t\tBooking Info"<<endl;
	cout<<"\t\t\t====================================================="<<endl;
	cout << endl << endl <<"\t\t\t\tPlease enter a movie name: ";
	cin.sync();
	std::getline(std::cin, purchase_movie_name);
	out<<"Movie Name = "<<purchase_movie_name<<endl;

	cout << endl <<"\t\t\t\tPlease enter the total amount of tickets you wish to purchase: ";
	cin >> total_tickets;
    out<<"Total no of tickets = "<<total_tickets<<endl;
	Cinema * p = FindMovie(purchase_movie_name);

		if (p != NULL){
		double total_cost =	p-> PurchaseTicket(total_tickets); 
				if ( total_cost == -1){
					cout << endl <<"\t\t\t\tThis movie has been sold out or there are" << endl
						<< endl << "\t\t\t\tnot enough tickets available per your request" << endl << endl;
					out << "This movie has been sold out or there are not enough tickets available per your request"<<endl;	
				} 
				else {
					totalmovie=total_cost;
					cout << endl << "\t\t\t\tYour Movie bill total comes out to: " << total_cost<<" Rs"<< endl;
					out << "Your Movie total bill comes out to: " << total_cost <<" Rs"<< endl;
				}
				cout<<endl<<endl<<endl<<endl<<"\t\t\t\t";
				system("PAUSE");
				system("CLS");
		} 
		else {
			cout << "No movie has been found" << endl;
			out << "No movie has been found" << endl;
			system("PAUSE");
				system("CLS");
		}
		out.close();
}


Cinema::Cinema()
{
	movie_name = "";
	tickets_available = 0;
	ticket_price = 0.0;
}


Cinema::Cinema(string x, int y, double z)
{
	movie_name = x;
	tickets_available = y;
	ticket_price = z;
}


Cinema::~Cinema()
{
	cout << movie_name << " is no longer showing.." << endl;
}


string Cinema::get_name_of_movie()
{
	return movie_name;
}


int Cinema::get_available_tickets()
{
	return tickets_available;
}


double Cinema::get_price()
{
	return ticket_price;
}


void Cinema::set_movie_name(string new_movie_name)
{
	movie_name = new_movie_name;
}


void Cinema::set_tickets_available(int new_tickets_available)
{
	tickets_available = new_tickets_available;
}


void Cinema::set_ticket_price(double new_ticket_price)
{
	ticket_price = new_ticket_price;
}

// this member uses the users wanted tickets to calculate their total

double Cinema::PurchaseTicket(int purchase_tickets_available)
{
	double total_price;
    char category;
    std::ofstream out;
    out.open("Booking Reservation Details.txt",ios::app);
    again:
    cout<<"\t\t    ------------------------------------"<<endl;
	cout<<"\t\t     Please enter your Seating Category"<<endl<<endl;
	cout<<"   Same price for Silver Category, 300 Rs increment for Gold Category, 500 Rs increment for Diamond Category"<<endl<<endl;
	cout<<"\t\tEnter S for Silver, G for Gold, D for Diamond: ";
	cin>>category;
	cout<<endl;
	out<<endl<<"(Same price for Silver Category, 300 Rs increment for Gold Category, 500 Rs increment for Diamond Category)"<<endl<<endl;
	out<<"Your Seating Category: ";
	if(category=='S' || category=='s'){
	out<<"Silver"<<endl;}
	else if(category=='G' || category=='g'){
	out<<"Gold"<<endl;}
	else if(category=='D' || category=='d'){
	out<<"Diamond"<<endl;}
	else {
	cout<<"Invalid Choice, Try Again !!!"<<endl;
	goto again;
	}
	if (purchase_tickets_available <= tickets_available) {
		if(category=='S' || category=='s'){
		total_price = purchase_tickets_available * ticket_price;
		tickets_available = tickets_available - purchase_tickets_available;
		return total_price;}
		if(category=='G' || category=='g'){
		total_price = purchase_tickets_available * (ticket_price+300);
		tickets_available = tickets_available - purchase_tickets_available;
		return total_price;}
		if(category=='D' || category=='d'){
		total_price = purchase_tickets_available * (ticket_price+500);
		tickets_available = tickets_available - purchase_tickets_available;
		return total_price;}
	} else {
		return -1;
	}
	out.close();
}

// this member displays all three aspects of the movie object

void Cinema::Display()
{
		cout.setf(ios::fixed, ios::floatfield); 
		cout.setf(ios::showpoint); 
		cout.precision(2);
		cout << endl << "\t\t\t\tMovie name: " << movie_name << endl
			<<endl<<"\t\t\t\tTickets available: " << tickets_available << endl
			<<endl<<"\t\t\t\tPrice per ticket: " << ticket_price << endl << endl;
			
}

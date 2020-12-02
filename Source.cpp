//#include <iostream>
//int fibonachi(int n)
//	{
//		if (n == 0)
//			return(0);
//		if (n == 1)
//			return 1; 
//		return fibonachi(n - 1) + fibonachi(n - 2);
//		
//	}

/*int main()
{
	for (int i=0; i < 10; i++)
	{
		std::cout << fibonachi(i) << "  ";
	}
}*/
//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::endl;
//
//class Person
//{
//public:
//    string name;
//    int age;
//    double middleRange;
//    Person(string n, int a, double k)
//    {
//        name = n; age = a; middleRange = k;
//    }
//    Person(string n, int a)
//    {
//        name = n; age = a;
//        middleRange = 80.8;
//    }
//    Person(string n)
//    {
//        name = n;
//        age = 18;
//        middleRange = 56.8;
//    }
//    Person()
//    {
//        name = "Bob";
//        age = 18;
//        middleRange = 69.9;
//    }
//    void move()
//    {
//        cout << name << " is moving" << endl;
//    }
//};
//int main()
//{
//    Person nikita("Nikita", 18,89.0);
//    cout << "Name: " << nikita.name << "\tAge: " << nikita.age << "\tMiddle range: " << nikita.middleRange << endl;
//    Person tom("Tom", 22);
//    cout << "Name: " << tom.name << "\tAge: " << tom.age << "\tMiddle range: " << tom.middleRange << endl;
//    Person sam("Sam");
//    cout << "Name: " << sam.name << "\tAge: " << sam.age << "\tMiddle range: " << sam.middleRange << endl;
//    Person bob = Person();
//    cout << "Name: " << bob.name << "\tAge: " << bob.age << "\tMiddle range: " << bob.middleRange << endl;
//    return 0;
//}

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


void Display();



class Weapon
{
public:
	void setSuccessfulShots(int a=0)
	{
		if (a > successfulShots) 
		{
			successfulShots = successfulShots + a;
		}
	}
	void setName(string a)
	{
		a = name;
	}
	void setCaliber(double a = 0)
	{
		if (a >= 0) 
		{
			a = caliber;
		}
	}
	void setWeight(double a = 0)
	{
		if (a >= 0)
		{
			a = weight;
		}
	}
	void setCountry(string a)
	{
		a = country;
	}
	void setYear(int a = 0)
	{
		if (a >= 0)
		{
			a = year;
		}
	}
	void setOwner(string a)
	{
		a = owner;
	}
	void getOwner()
	{
		std::cout << "\nowner" << owner << "\n";
	}
	void getInform()	
	{
		std::cout << "Name: " << name
			<< "\nCaliber: " << caliber
			<< "\nWeight: " << weight
			<< "\nCountry: " << country
			<< "\nYear: " << year
			<< "\nSuccesful shots: " << successfulShots
			<< "\nOwner: " << owner << "\n";
	}
	void getSuccessfulShots()
	{
		std::cout << "\nsuccesfulShots " << successfulShots << "\n";
	}
	Weapon(string name,double caliber, double weight, string country, int year, int successfulShots,string owner)
	{
		setName(name);
		setCaliber(caliber);
		setWeight(weight);
		setCountry(country);
		setYear(year);
		setOwner(owner);
	}
	Weapon(string name, double caliber, string owner):Weapon(name, caliber, 0, "none", 0, 0, owner)
	{
	}

private:
	string name;
	double caliber;
	double weight;
	string country;
	int year;
	int	successfulShots;
	string owner;
};

int main()
{
	Weapon Two("AK47", 7.62, 1400, "Russia", 1940, 10000, "Nikita");
	Two.getInform();
	Display();
	
}

void Display()
{
	int y = 0;
	bool z = false;
	string a;
	string d;
	string g;
	double b = 0;
	double c = 0;
	int e = 0;
	int f = 0;
	int b2 = 0;
	int a2 = 0;
	std::cout << "Name: ";
	std::cin >> a;
	std::cout << "\nCaliber: ";
	std::cin >> b;
	std::cout << "\nweight: ";
	std::cin >> c;
	std::cout << "\ncountry: ";
	std::cin >> d;
	std::cout << "\nyear: ";
	std::cin >> e;
	std::cout << "\nsuccessfulShots: ";
	std::cin >> f;
	std::cout << "\nowner: ";
	std::cin >> g;
	Weapon One(a, b, c, d, e, f, g);
	while (z!=true)
	{
	system("cls");
	std::cout << "1: Change inform about weapon\n2: Cancel\n";
	std::cin >> a2;
	
		switch (a2)
		{
		case 1:
			system("cls");
			std::cout << "1: Get inform\n2: Change name\n3: Change caliber\n4: Change weight\n5: Change country\n6: Change year\n7: Change succesful shots\n8: Change owner\n";
			std::cin >> b2;
			switch (b2)
			{
			case 1:
				system("cls");
				One.getInform();
				std::cin >> y;
				break;
			case 2:
				system("cls");
				std::cout << " Enter name: ";
				std::cin >> a;
				One.setName(a);
				break;
			case 3:
				system("cls");
				std::cout << " Enter caliber: ";
				std::cin >> b;
				One.setCaliber(b);
				break;
			case 4:
				system("cls");
				std::cout << " Enter weight: ";
				std::cin >> c;
				One.setWeight(c);
				break;
			case 5:
				system("cls");
				std::cout << " Enter country: ";
				std::cin >> d;
				One.setCountry(d);
				break;
			case 6:
				system("cls");
				std::cout << " Enter year: ";
				std::cin >> e;
				One.setYear(e);
				break;
			case 7:
				system("cls");
				std::cout << " Enter succesful shots: ";
				std::cin >> f;
				One.setSuccessfulShots(f);
				break;
			case 8:
				system("cls");
				std::cout << " Enter owner: ";
				std::cin >> g;
				One.setOwner(g);
				break;
			}
			break;
		case 2:
			system("cls");
			std::cout << " Canceled";
			z = true;
			break;
		}
	}
}
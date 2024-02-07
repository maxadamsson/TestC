//#include är en copy/paste. Kopierar ett annat dokument med färdig kod. 
#include <iostream> //precomplier statements
#include <string>
#include <vector>

//c++ använder en single pass compiler. Dvs den går igenom källkoden en gång.MSVC (Microsoft visual C).
//pga det kan vi inte definera funktioner efter main, då vet den inte att funktionerna finns när vi
//hänvisar till dem
//std = standard, bra att vänja sig med!

//deklarera funktionen
void addOne(int);
void addOneRef(int&);//& är en referens till en variabel

typedef std::vector<int> List;
typedef std::string string; //behöver bara skriva string för att använda string

int main()
{
 //variabler
	int int1 = 100; // 4 byte
	float float1 = 2,f; // 4 byte
	double double1 = 2.5; // 8 byte
	long long long1 = 888888; // 8 byte
	char char1 = 9; // 1 byte
	short short1 = 3; // 2 byte
	bool bool1 = true; //1 bit (1 byte)

	string msg = "hello world";

	//pointer, hitta adress & värde
	int* pint1 = &int1;
	std::cout << "int1 är en int och har värdet: " << int1 << " samt har adressen: " << &int1 << std::endl;
	std::cout << pint1 << " är adressen till int1 som  har värden: "<< *pint1 << std::endl;

	//Array (stack) snabbare, bättre, om vi kan använda den
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[1] << "\t" << &arr[i] << std::endl;
	}

	//Array (heap)
	std::cout << "Working with heap" << std::endl;
	int* heapArr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << heapArr[1] << "\t" << &heapArr[i] << std::endl;
	}
	//malloc = memory allication, får mer minne av window till projekt. Vi använder "new" för att ber om mer minne
	//while, for, do, if, switch, etc används på samma sätt som C#

	if (int1) //kollar bara om värdet är 0 eller inte, 0 = false, else = true. Inte restrikta till enbart bool
	{

	}
	if (int1 != 0) //hur man skirver samma sak i C#, behövs inte här men gör programet mer läsbart
	{

	}
	//vectorer är som C# listor
	std::vector<int> v1;
	v1.push_back(3);
	//input istället för output skrivs:
	std::cin >> int1;
	//likt cw, oftast bättre med std men detta fungerar också
	printf("Hello World" + short1);

}

//funktioner
void addOne(int a) //definition av funktioner, vad den gör. Skapar kopian a av existerande tal, ex int1. definera
{
	a++;
	std::cout << &a << std::endl;
}

void addOneRef(int& a) //skapar INTE en kopia utan kommer använda det tal den är given och ändra, ex int1. deklarera
{
	a++;
	std::cout << &a << std::endl;
}

//#include �r en copy/paste. Kopierar ett annat dokument med f�rdig kod. 
#include <iostream> //precomplier statements
#include <string>
#include <vector>

//c++ anv�nder en single pass compiler. Dvs den g�r igenom k�llkoden en g�ng.MSVC (Microsoft visual C).
//pga det kan vi inte definera funktioner efter main, d� vet den inte att funktionerna finns n�r vi
//h�nvisar till dem
//std = standard, bra att v�nja sig med!

//deklarera funktionen
void addOne(int);
void addOneRef(int&);//& �r en referens till en variabel

typedef std::vector<int> List;
typedef std::string string; //beh�ver bara skriva string f�r att anv�nda string

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

	//pointer, hitta adress & v�rde
	int* pint1 = &int1;
	std::cout << "int1 �r en int och har v�rdet: " << int1 << " samt har adressen: " << &int1 << std::endl;
	std::cout << pint1 << " �r adressen till int1 som  har v�rden: "<< *pint1 << std::endl;

	//Array (stack) snabbare, b�ttre, om vi kan anv�nda den
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
	//malloc = memory allication, f�r mer minne av window till projekt. Vi anv�nder "new" f�r att ber om mer minne
	//while, for, do, if, switch, etc anv�nds p� samma s�tt som C#

	if (int1) //kollar bara om v�rdet �r 0 eller inte, 0 = false, else = true. Inte restrikta till enbart bool
	{

	}
	if (int1 != 0) //hur man skirver samma sak i C#, beh�vs inte h�r men g�r programet mer l�sbart
	{

	}
	//vectorer �r som C# listor
	std::vector<int> v1;
	v1.push_back(3);
	//input ist�llet f�r output skrivs:
	std::cin >> int1;
	//likt cw, oftast b�ttre med std men detta fungerar ocks�
	printf("Hello World" + short1);

}

//funktioner
void addOne(int a) //definition av funktioner, vad den g�r. Skapar kopian a av existerande tal, ex int1. definera
{
	a++;
	std::cout << &a << std::endl;
}

void addOneRef(int& a) //skapar INTE en kopia utan kommer anv�nda det tal den �r given och �ndra, ex int1. deklarera
{
	a++;
	std::cout << &a << std::endl;
}

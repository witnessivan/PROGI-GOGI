#include<iostream>
#include<string>
using namespace std;

const int arrsize = 11;
struct flat {
	float square;
	float liv_square;
	float kichen_square;
	char islodg[20];
	char isbath[20];
	char house[20];
	unsigned int floor;
	unsigned int numfloor;
	char adress[255];
	float cost;
	char area[arrsize];
}room_info[arrsize];
void Addinfo(int k);
//void Searchs(float *square, float *area, char *adress);
//void ShowAll();
void sort(int k);

void Addinfo(int k)
{

	cout << "enter the number of records:\n";
	
	for (int i = 0; i <k; i++)
	{
		cout << "s";
		cin >> room_info[i].square;
		cout << "ls";
		cin >> room_info[i].liv_square;
		cout << "ks";
		cin >> room_info[i].kichen_square;
		cout << "isl";
		cin >> room_info[i].islodg;
		cout << "isb";
		cin >> room_info[i].isbath;
		cout << "h";
		cin >> room_info[i].house;
		cout << "fl";
		cin >> room_info[i].floor;
		cout << "num";
		cin >> room_info[i].numfloor;
		cout << "adr";
		cin >> room_info[i].adress;
		cout << "cost";
		cin >> room_info[i].cost;
		cout << "ar";
		cin >> room_info[i].area;

	}
}
void sort(int k) {

	int temp;
	char lir[255];
	for (int i = 0; i < k; i++) 
	{
		for (int j = k - 1; j > i;j--)
		if (room_info[i].square < room_info[i + 1].square)
		{
			temp = room_info[j].square;
			room_info[j].square = room_info[j+1].square;
			room_info[j + 1].square = temp;
		}
		
	}
	for (int i = 0; i < k; i++) {
		cout << room_info[i].square;
	}
}

	/*void Searchs(float *square, float *area, char *adress)

	{   
		int l;
		cin >> l;
		for (int i = 0; i < arrsize; i++) {
			
			if (room_info[i].square == l) {

			}
		}

	}*/
int main() {
	float square;
	float liv_square;
	float kichen_square;
	char islodg[20];
	char isbath[20];
	char house[20];
	unsigned int floor;
	unsigned int numfloor;
	char adress[255];
	float cost;
	char area[arrsize];
	int k;
	cin >> k;
	char chouse = ' ';
	
		
		do {
			
			cin >> chouse;
			switch (chouse) {
			case '1':
				Addinfo(k);
				break;
			case'2':
				sort(k);

				break;
			case '3':
				exit(0);
				break;
			default:
				cout << "error";
			}
		} while (chouse != 3);
		
	
   system("pause");
	
}    

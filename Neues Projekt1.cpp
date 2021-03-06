#include <iostream>
#include <cmath>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int speicher = 0;
int Zahl1 = 0;
int Zahl2 = 0;
int ausgabe = 0;


int sum(int zahl = 1)
{
	for (int i = 1; i <= zahl; i++)
	{
		speicher = speicher + i;
	}
	return speicher;
}


int potenz(int a, int b)
{
	int i = 1;
	speicher = a;

	while (i<b)
	{
		speicher = speicher * a;
		i++;
	}
	return speicher;
}

int isprim(int a)
{
	int uebergeben = a;

	if (a<=0)
	{
		return 3;
	}
	
	if (a % 2 != 0)											//ist die Zahl durch 2 teilbar
	{
		int sum = 0;											//Quersumme bilden
		while (a > 0)
		{
			sum += a % 10;
			a /= 10;
		}
		if (sum % 3 != 0)									//ist die Quersumme durch 3 teilbar
		{
			int zif2 = uebergeben;
			zif2 = zif2 % 100;								//letzten beiden Ziffern der Zahl
			if (zif2 % 4 != 0)								//letzten beiden Ziffern der Zahl durch 4 teilbar
			{
				int zif1 = uebergeben;
				zif1 = zif1 % 10;							//letzte Ziffer der Zahl
				if (zif1 != 0 && zif1 != 5)					//letzte Ziffer ungleich 0 und 5
				{
					int zif3 = uebergeben;
					zif3 = zif3 % 1000;
					if (zif3 % 8 != 8)						//ist die Zahl aus den letzten 3 Ziffern durch 8 teilbar
					{
						if (sum % 9 != 0)					//ist die Quersumme durch 9 teilbar
						{
							return 1;
						}
						else
						{
							return 9;	//Quersumme ist durch 9 teilbar
						}
					}
					else
					{
						return 8; //Zahl aus den letzten 3 Ziffern ist durch 8 teilbar
					}

				}
				else
				{
					return 7;	//letzte Ziffer ist gleich 5 oder 0
				}
			}
			else
			{
				return 6;	//die letzten beiden Ziffern der Zahl sind durch 4 teilbar
			}
		}
		else
		{
			return 5;	//die Quersumme ist durch 3 teilbar
		}

	}
	else return 4;	//die Zahl ist durch 2 teilbar
	
		
	return 2;
}

int fakul(int a)
{
	int uebergeben = a;
	

		if (a == 0)
		{
			return 1;
		}

		if (a < 0)
		{
			return 2;
		}

	for (int i = a-1; i >= 1; i--)
	{
		a = a * i;
	}

	return a;
}

int zins(int start, double zins, int end)
{
	int i = 0;
	while (end>start)
	{
		start = start + start * zins / 100;
		
		i++;
	}

	return i;
}

int pq(int P = 0, int Q = 0)
{
	float x1 = 0;
	float x2 = 0;
	
	float klammer = (P / 2) * (P / 2) - Q;
	float wurzel = sqrt(klammer);
	x1 = -P / 2 + wurzel;
	x2 = -P / 2 - wurzel;

	return x1,x2;
}


int roemzahl(int zahl = 0)
{
	int uebergeben = zahl;

	int I = 1;	 int AI = 0;
	int V = 5;	 int AV = 0;
	int X = 10;	 int AX = 0;
	int L = 50;	 int AL = 0;
	int C = 100; int AC = 0;

	
	
	while (uebergeben % C > 1)
	{
		zahl -= C;

		AC++;
	}
	
	while (zahl%L>=1)
	{
		zahl -= L;

		AL++;
	}

	while (zahl%X>=1)
	{
		zahl -= X;

		AX++;
	}

	while (zahl%V>=1)
	{
		zahl -= V;

		AV++;
	}

	while (zahl%I>=1)
	{
		zahl -= I;

		AI++;
	}

	return 0;
}


int main(int x=0)
{
	cout << "Welche Aufgabe soll gestartet werden? ";
	cin >> x;

	int Kapital = 0;
	double Zinssatz = 0.0;
	int Kapital2 = 0;
	
	int VarP = 0;
	int VarQ = 0;

	char textA[10] = "abc";
	char textB[5] = "xyz";

	switch (x)
	{
	case 25:
		cout << "AUFGABE 25 - AUFSUMMIEREN" << endl;	//25
		cout << "Zahl eingeben: ";
		cin >> Zahl1;
		cout << sum(Zahl1);
			break;

	case 28:
		cout << "AUFGABE 28 - POTENZ" << endl;			//28
		cout << "Basis eingeben: ";
		cin >> Zahl1;
		cout << "Potenz eingeben: ";
		cin >> Zahl2;
		if (Zahl2==0)
		{
			cout << 1;
		}
		else 
		{
			cout << potenz(Zahl1, Zahl2);
		}
			break;

	case 29:
		cout << "AUFGABE 29 - PRIMZAHL-TEST" << endl;	//29
		cout << "Zahl eingeben: ";
		cin >> Zahl1;
		if (isprim(Zahl1)==1) //Zahl ist eine Primzahl
		{
			cout << "Die Zahl " << Zahl1 << " ist eine Primzahl!";
		}

		if (isprim(Zahl1) == 3) //Zahl <= 0
		{
			cout << "Die Zahl " << Zahl1 << " ist <=0 und daher KEINE Primzahl!";
		}

		if (isprim(Zahl1) == 4) //die Zahl ist durch 2 teilbar
		{
			cout << "Die Zahl " << Zahl1 << " ist durch 2 teilbar und daher KEINE Primzahl!"; 
		}
		
		if (isprim(Zahl1) == 5) //die Quersumme ist durch 3 teilbar
		{
			cout << "Die Quersumme der Zahl " << Zahl1 << " ist durch 3 teilbar, daher ist " << Zahl1 << " KEINE Primzahl!";	
		}

		if (isprim(Zahl1) == 6) //die letzten beiden Ziffern der Zahl sind durch 4 teilbar
		{
			cout << "Die letzten beiden Ziffern der Zahl " << Zahl1 << " sind durch 4 teilbar, daher ist " << Zahl1 << " KEINE Primzahl!"; 
		}
		
		if (isprim(Zahl1) == 7) //letzte Ziffer ist gleich 5 oder 0
		{
			cout << "Die letzte Ziffer der Zahl " << Zahl1 << " hat den Wert 5 oder 0, daher ist " << Zahl1 << " KEINE Primzahl!"; 
		}
		
		if (isprim(Zahl1) == 8) //Zahl aus den letzten 3 Ziffern ist durch 8 teilbar
		{
			cout << "Die Zahl aus den letzten 3 Ziffern Zahl " << Zahl1 << " ist durch 8 teilbar, daher ist " << Zahl1 << " KEINE Primzahl!"; 
		}

		if (isprim(Zahl1) == 9) //Quersumme ist durch 9 teilbar
		{
			cout << "Die Quersumme der Zahl " << Zahl1 << " ist durch 9 teilbar, daher ist " << Zahl1 << " KEINE Primzahl!"; 
		}
			
		cout << endl << "1 zum Neustarten ";

		cin >> Zahl2;

		if (Zahl2==1)
		{
			main;
		}


		break;
	
	case 30:
		cout << "AUFGABE 30 - FAKULTAET" << endl;	//30
		cout << "Zahl eingeben: ";
		cin >> Zahl1;
		
		if (Zahl1 >= 0)
		{
			cout << Zahl1 << "!=" << fakul(Zahl1);
		}
		if (Zahl1 <0)
		{
			cout << Zahl1 << " liegt nicht im zulaessigen Wertebereich!";
		}
			break;
	
	case 32:
		cout << "AUFGABE 32 - VERZINSUNG" << endl;
		
		cout << "Startkapital eingeben: ";
			cin >> Kapital;
		cout << "Zinssatz eingeben: ";
			cin >> Zinssatz;
		cout << "Gewuenschtest Endkapital eingeben: ";
			cin >> Kapital2;

		cout << zins(Kapital, Zinssatz, Kapital2);
			
			break;
	
	case 35:
		cout << "AUFGABE 35 - PQ FORMEL" << endl;

		cout << "x� + P*x + Q" << endl;

		cout << "P angeben: ";
			cin >> VarP;
		cout << "Q angeben: ";
			cin >> VarQ;

			cout << pq(VarP, VarQ);

			break;

	case 40:
		cout << "AUFGABE 40 - ROEMISCHE ZAHLEN" << endl;
			
		cout << "Zahl eingeben: ";
		cin >> Zahl1;

		if (Zahl1<100&&Zahl1>0)
		{
			roemzahl(Zahl1);
		}
		else
		{
			cout << "Ungueltige Zahl!";
		}

			break;
		
			

	case 88:
		//cout << "88-TEST" << endl;

		//
		//cout << textA << " und " << textB << endl; 

		//
		//strcat_s(textA, textB, 2);  // haenge Zeichenkette textB an textA an

		//cout << textA;
			break;

	default:
		cout << "Gueltige Aufgabe angeben!";
			break;
	}
}
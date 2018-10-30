/*#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	double VT, MT, iznosR, potrosnja;
	float u_VT, u_MT;
	const double c_VT = 0.3;
	const double c_MT = 0.2;

		cout << "ajmo da vidamo kolko trosis" << endl;
	cout << "Unesi veliku tarifu a zatim malu tarifu" << endl;
	cin >> VT >> MT;
	potrosnja = VT + MT;
	iznosR = (VT * c_VT) + (MT * c_MT);
	u_VT = (VT * 100) / potrosnja;
	u_MT = (MT * 100) / potrosnja;

	cout << "Ukupna potrosnja je " << potrosnja << " i iznos racuna je " << iznosR << endl;
	cout << "Udio velike tarife je " << u_VT << " a udio male tarife je " << u_MT;

	system("pause>0");



	return 0;
}*/ 


/*#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	cout << "Vidi fkt radi" << endl;
	system("pause>0");


	int apple;
	cout << "Koliko imas jabuka?\n";
	cin >> apple;
	system("cls");
	char odgovor[3] = "";
	if (apple == 1) {
		strcpy_s(odgovor, "ku");

	}
	else if (apple >= 5) {
		strcpy_s(odgovor, "ka");

	}
	else if (apple == 2 or 3 or 4) {
		strcpy_s(odgovor, "ke");

	}

	wcout << "Imas " << apple << " jabu" << odgovor << endl;
	cout << odgovor;
	system("pause>0");


	return 0;
}*/

/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
/*	int rezultat = 4 * 6 + 6 % 8 - 1;
	bool rezultat1 = (5 < 6) && (12 <= 13);
	char rezultat2 = ('a' < 'Z' || 'c' < 'C');
	cout << rezultat2 << endl;
	cout << boolalpha << rezultat1 << endl;
	cout << rezultat << endl;

	int broj1, broj2;
	cin >> broj1 >> broj2;

	(broj1 < broj2) ? cout << broj1 : cout << broj2;

	int broj1, broj2, broj3;
	cin >> broj1 >> broj2 >> broj3;
	//komplikovani oblik ispod
	((broj1 < broj2) && (broj1 < broj3)) ? cout << broj1 :
		(broj2 < broj1&& broj2 < broj3) ? cout << broj2 : cout << broj3;
*/
/*#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int broj1, broj2, broj3;
	cin >> broj1 >> broj2;

	if (broj1 < broj2)
		cout << broj1 << endl;

	cout << "ok" << endl;



	system("pause");
	return 0;
}*/


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int a, b, c, d;
	int counter = 1110;
	int counter_1;
	while (counter <= 9999)
	{
		a=0, b=0, c=0, d = 0;
		counter++;
		counter_1 = counter;
		while (counter_1 >= 1000)
			{
				counter_1 -= 1000;
				a++;
				
			}
		if (a % 2 == 0)

			continue;

		else
		{
			while (counter_1 >= 100)
			{
				counter_1 -= 100;
				b++;

			}

			if (b % 2 == 0)
				continue;

			else
			{
				while (counter_1 >= 10)
				{
					counter_1 -= 10;
					c++;

				}

				if (c % 2 == 0)
					continue;

				else
				{
					while (counter_1 >= 1)
					{
						counter_1 -= 1;
						d++;

					}

					if (d % 2 == 0)
						continue;

					else
						cout << counter;
				}
			}
		}
	}

	system("pause");
	return 0;
}
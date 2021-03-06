// Testbed.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iomanip"
#include "iostream"
#include "cmath"
#define PI 3.14159265
using namespace std;

int main()
{
	//const int AAA{ 1 };
	//const int AAS{ 2 };
	//const int ASA{ 3 };
	//const int SAS{ 4 };
	//const int SSA{ 5 };
	//const int SSS{ 6 };

	char triangle_type;
	cout << "Select your Triangle..." << endl;
	cout << "AAA? select 1" << endl;
	cout << "AAS? select 2" << endl;
	cout << "ASA? select 3" << endl;
	cout << "SAS? select 4" << endl;
	cout << "SSA? select 5" << endl;
	cout << "SSS? select 6" << endl;
	cin >> triangle_type;

	switch (triangle_type)
	{
	case '1':
	{
		double AAA_angle1{};
		double AAA_angle2{};
		double AAA_angle3{};
		double AAA_side1{};
		double AAA_side2{};

		cout << "Ok, AAA Triangle. Please Enter the following information:" << endl;
		cout << "Enter Angle 1 in degrees " << endl;
		cin >> AAA_angle1;
		cout << "Enter Angle 2 in degrees " << endl;
		cin >> AAA_angle2;

		AAA_angle3 = 180 - (AAA_angle1 + AAA_angle2);
		AAA_side1 = (sin(AAA_angle1 * PI / 180)) / (sin(AAA_angle3 + PI / 180));
		AAA_side2 = (sin(AAA_angle2 * PI / 180)) / (sin(AAA_angle3 + PI / 180));

		if (AAA_angle1 <= 0 || AAA_angle2 <= 0 || AAA_angle3 <= 0)
		{
			cout << "I'm sorry Dave, that traingle is unsolvable...would you like to hear a song?";
		}
		else
		{
			cout << "\nYour third angle is " << AAA_angle3 << "degrees" << endl;
			cout << "\nThe sides are proportional." << endl;
			cout << "\nSide one is " << AAA_side1 << "\n and side two is " << AAA_side2 << endl;

		}


		break;

	}
	case '2':
	{

		double AAS_angle1{};
		double AAS_angle2{};
		double AAS_angle3{};

		double AAS_side1{};
		double AAS_side2{};
		double AAS_side3{};

		cout << "Ok, ASA Triangle. Please Enter the following information:" << endl;
		cout << "Enter Angle 1 in degrees ";
		cin >> AAS_angle1;
		cout << "Enter Angle 2 in degrees ";
		cin >> AAS_angle2;
		cout << "enter Side 1 ";
		cin >> AAS_side1;

		AAS_angle3 = 180 - (AAS_angle1 + AAS_angle2);
		AAS_side2 = (AAS_side1 * sin(AAS_angle2)) / sin(AAS_angle1);
		AAS_side3 = (AAS_side1 * sin(AAS_angle3)) / sin(AAS_angle1);

		if (AAS_angle1 <= 0 || AAS_angle2 <= 0 || AAS_angle3 <= 0)
		{
			cout << "UNSOLVABLE!";
		}
		else
		{
			cout << "\nThird angle is " << AAS_angle3 << "degrees" << endl;
			cout << "\nThe sides of the triangle are proportional.";
			cout << "\n if one side is 1\nSecond side equals " << AAS_side2 << "\nThird side equals " << AAS_side3 << endl;
		}
		break;
	}
	case '3':
	{
		double ASA_angle1{};
		double ASA_angle2{};
		double ASA_angle3{};

		double ASA_side1{};
		double ASA_side2{};
		double ASA_side3{};

		cout << "Ok, AAS Triangle. Please Enter the following information:" << endl;
		cout << "Enter Angle 1 in degrees ";
		cin >> ASA_angle1;
		cout << "Enter Angle 2 in degrees ";
		cin >> ASA_angle2;
		cout << "enter Side 3 ";
		cin >> ASA_side3;

		ASA_angle3 = 180 - (ASA_angle1 + ASA_angle2);
		ASA_side1 = (ASA_side3 * sin(ASA_angle2)) / sin(ASA_angle3);
		ASA_side2 = (ASA_side1 * sin(ASA_angle2)) / sin(ASA_angle1);

		if (ASA_angle1 <= 0 || ASA_angle2 <= 0 || ASA_angle3 <= 0)
		{
			cout << "NO! This is unsolvable due to the angles...sorry.";
		}
		else
		{
			cout << "\nThird angle is " << ASA_angle3 << "degrees" << endl;
			cout << "The sides of the triangle are proportional.";
			cout << "\n if one side is 1\nSecondside equals " << ASA_side2 << "\nThird side is " << ASA_side3 << endl;
		}

		break;
	}

	case '4':
	{
		cout << "Ok, SAS Triangle. Please Enter the following information:" << endl;

		double SAS_angle1{};
		double SAS_angle2{};
		double SAS_angle3{};

		double SAS_side1{};
		double SAS_side2{};
		double SAS_side3{};

		cout << "Ok, SAS Triangle. Please Enter the following information:" << endl;
		cout << "Enter Angle 1 in degrees ";
		cin >> SAS_angle1;
		cout << "Enter Side 1 ";
		cin >> SAS_side1;
		cout << "Enter Side 2 ";
		cin >> SAS_side2;

		SAS_side3 = sqrt(pow(SAS_side1, 2.0) + pow(SAS_side2, 2.0) - 2 * SAS_side1 * SAS_side2 * cos(SAS_angle1));
		SAS_angle2 = (sin(SAS_angle1) * SAS_side2) / SAS_side1;
		SAS_angle3 = 180 - (SAS_angle1 + SAS_angle2);

		if (SAS_angle1 <= 0 || SAS_angle2 <= 0 || SAS_angle3 <= 0)
		{
			cout << "NO! This is unsolvable due to the angles...sorry.";
		}
		else
		{
			cout << "\nThird side is " << SAS_side3 << endl;
			cout << "The sides of the triangle are proportional.";
			cout << "\n Second angle equals " << SAS_angle2 << "\nThird angle is " << SAS_angle3 << endl;
		}
			break;
		}

	case '5':
	{
		double SSA_angle1{};
		double SSA_angle2{};
		double SSA_angle3{};

		double SSA_side1{};
		double SSA_side2{};
		double SSA_side3{};

		cout << "Ok, SSA Triangle. Please Enter the following information:" << endl;
		cout << "Enter Angle 1 in degrees ";
		cin >> SSA_angle1;
		cout << "Enter side 1   ";
		cin >> SSA_side1;
		cout << "Enter side 2  ";
		cin >> SSA_side2;

		SSA_angle2 = (asin(sin(SSA_angle1)*SSA_side2) / (SSA_side1));
		SSA_angle3 = (180 - (SSA_angle1 + SSA_angle2));
		SSA_side3 = (sin(SSA_angle3)*SSA_angle1 / SSA_side1);

		if (SSA_angle1 <= 0 || SSA_angle2 <= 0 || SSA_angle3 <= 0)
		{
			cout << "NOPE! Can no do. You are killing me, Smalls. The Angles don't work out";
		}
		else
		{
			cout << "\nThird side is " << SSA_side3 << endl;
			cout << "The sides of the triangle are proportional.";
			cout << "\n Second angle equals " << SSA_angle2 << "\nThird angle is " << SSA_angle3 << endl;
		}
		break;
	}
	case '6':
	{
		double SSS_angle1{};
		double SSS_angle2{};
		double SSS_angle3{};

		double SSS_side1{};
		double SSS_side2{};
		double SSS_side3{};

		cout << "Ok, SSS Triangle. Please Enter the following information:" << endl;
		cout << "Enter Side 1  ";
		cin >> SSS_side1;
		cout << "Enter Side 2  ";
		cin >> SSS_side2;
		cout << "Enter Side 3  ";
		cin >> SSS_side3;

		SSS_angle1 = (acos((pow(SSS_side2, 2.0) + pow(SSS_side3, 2.0) - pow(SSS_side1, 2.0)) / (2 * SSS_side2 * SSS_side3)));
		SSS_angle2 = (acos((pow(SSS_side3, 2.0) + pow(SSS_side1, 2.0) - pow(SSS_side2, 2.0)) / (2 * SSS_side3 * SSS_side1)));
		SSS_angle3 = 180 - (SSS_angle1 + SSS_angle2);

		if (SSS_angle1 <= 0 || SSS_angle2 <= 0 || SSS_angle3 <= 0)
		{
			cout << "NO! This is unsolvable due to the angles...sorry.";
		}
		else
		{
			cout << "\nAngle 1 is " << SSS_angle1;
			cout << "\nAngle 2 is " << SSS_angle2;
			cout << "\nAngle 3 is " << SSS_angle3;
			break;
		}
	}

	default:
		cout << "Naughty! That is not a proper selection.";
	}

    return 0;
}


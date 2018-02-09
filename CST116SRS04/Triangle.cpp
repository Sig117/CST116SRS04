// CST116SRS04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iomanip"
#include "iostream"
#include "cmath"


int main()
{
	int PI{ 3.14159265 };
	int configuration_type{ };
	

	const int AAA{ 1 };
	const int AAS{ 2 };
	const int ASA{ 3 };
	const int SAS{ 4 };
	const int SSA{ 5 };
	const int SSS{ 6 };

	switch (configuration_type)
	{
	case AAA:
	{
		double AAA_angle1 {};
		double AAA_angle2 {}; 
		double AAA_angle3 {};

		double AAA_side1{};
		double AAA_side2{};
		
		std::cout << "AAA it is!" << std::endl;
		std::cout << "Enter Angle 1 in degrees ";
		std::cin >> AAA_angle1;
		std::cout << "Enter Angle 2 in degrees ";
		std::cin >> AAA_angle2;

		AAA_angle3 = 180 - (AAA_angle1 + AAA_angle2);
		AAA_side1 = (sin(AAA_angle1 * PI / 180)) / (sin(AAA_angle3 + PI / 180));
		AAA_side2 = (sin(AAA_angle2 * PI / 180)) / (sin(AAA_angle3 + PI / 180));

		if (AAA_angle1 <= 0 || AAA_angle2 <= 0 || AAA_angle3 <= 0)
		{
			std::cout << "UNSOLVABLE!";
		}
		else
		{
			std::cout << "\nThird angle is " << AAA_angle3 << "degrees" << std::endl;
			std::cout << "\nThe sides of the triangle are proportional.";
			std::cout << "\n if one side is 1\nSecond side equals " << AAA_side1 << "\nThird side equals " << AAA_side2 << std::endl;
		}
			
			break;
	}

	case AAS:
	{
		double AAS_angle1 {};
		double AAS_angle2 {};
		double AAS_angle3 {};

		double AAS_side1{};
		double AAS_side2{};
		double AAS_side3{};

		std::cout << "AAS it is!" << std::endl;
		std::cout << "Enter Angle 1 in degrees ";
		std::cin >> AAS_angle1;
		std::cout << "Enter Angle 2 in degrees ";
		std::cin >> AAS_angle2;
		std::cout << "enter Side 1 ";
		std::cin >> AAS_side1;

		AAS_angle3 = 180 - (AAS_angle1 + AAS_angle2);
		AAS_side2 = (AAS_side1 * sin(AAS_angle2)) / sin(AAS_angle1);
		AAS_side3 = (AAS_side1 * sin(AAS_angle3)) / sin(AAS_angle1);

		if (AAS_angle1 <= 0 || AAS_angle2 <= 0 || AAS_angle3 <= 0)
		{
			std::cout << "UNSOLVABLE!";
		}
		else
		{
			std::cout << "\nThird angle is " << AAS_angle3 << "degrees" << std::endl;
			std::cout << "\nThe sides of the triangle are proportional.";
			std::cout << "\n if one side is 1\nSecond side equals " << AAS_side2 << "\nThird side equals " << AAS_side3 << std::endl;
		}
		break;
	}
	case ASA:
	{
		double ASA_angle1{};
		double ASA_angle2{};
		double ASA_angle3{};

		double ASA_side1{};
		double ASA_side2{};
		double ASA_side3{};

		std::cout << "You LIKE ASA, Don't you?" << std::endl;
		std::cout << "Enter Angle 1 in degrees ";
		std::cin >> ASA_angle1;
		std::cout << "Enter Angle 2 in degrees ";
		std::cin >> ASA_angle2;
		std::cout << "enter Side 3 ";
		std::cin >> ASA_side3;

		ASA_angle3 = 180 - (ASA_angle1 + ASA_angle2);
		ASA_side1 = (ASA_side3 * sin(ASA_angle2)) / sin(ASA_angle3);
		ASA_side2 = (ASA_side1 * sin(ASA_angle2)) / sin(ASA_angle1);

		if (ASA_angle1 <= 0 || ASA_angle2 <= 0 || ASA_angle3 <= 0)
		{
			std::cout << "NO! This is unsolvable due to the angles...sorry.";
		}
		else
		{
			std::cout << "\nThird angle is " << ASA_angle3 << "degrees" << std::endl;
			std::cout << "The sides of the triangle are proportional.";
			std::cout << "\n if one side is 1\nSecondside equals " << ASA_side2 << "\nThird side is " << ASA_side3 << std::endl;
		}


		break;
	}

	case SAS:
	{
		double SAS_angle1{};
		double SAS_angle2{};
		double SAS_angle3{};

		double SAS_side1{};
		double SAS_side2{};
		double SAS_side3{};

		std::cout << "VERY WELL! SAS!" << std::endl;
		std::cout << "Enter Angle 1 in degrees ";
		std::cin >> SAS_angle1;
		std::cout << "Enter Side 1 ";
		std::cin >> SAS_side1;
		std::cout << "Enter Side 2 ";
		std::cin >> SAS_side2;

		SAS_side3 = sqrt(pow(SAS_side1,2.0)+pow(SAS_side2,2.0)- // THIS IS WHERE YOU STOPPED!!!;
		ASA_side2 = (ASA_side1 * sin(ASA_angle2)) / sin(ASA_angle1);
		ASA_angle3 = 180 - (ASA_angle1 + ASA_angle2);

		if (ASA_angle1 <= 0 || ASA_angle2 <= 0 || ASA_angle3 <= 0)
		{
			std::cout << "NO! This is unsolvable due to the angles...sorry.";
		}
		else
		{
			std::cout << "\nThird angle is " << ASA_angle3 << "degrees" << std::endl;
			std::cout << "The sides of the triangle are proportional.";
			std::cout << "\n if one side is 1\nSecondside equals " << ASA_side2 << "\nThird side is " << ASA_side3 << std::endl;
		break;
	}

	case SSA:
	{
		break;
	}


	case SSS:
	{

		break;
	}

	}
	std::cout << "Select a trangle to solve for. " << std::endl;

	
    return 0;
}


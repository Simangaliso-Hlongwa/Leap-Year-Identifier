#include <iostream>
#include <string>
#include<cmath>


int main()

{

	int year;

	std::cout << "Input year: ";
	std::cin >> year;

  
    int size = trunc(log10(year)) + 1;
    //std::cout << size;

    if (size == 4)
    {
    	

    	if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0 )
    	{
    		std::cout << year << " is a leap year \n";
    	}

    	else
    	{

    		std::cout << year << " Is not a leap year. \n";
    	}


    }

    else{

    	std::cout << "Please Enter a valid year \n";
    }


    return 0;
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int
main ()
{
  for (int i = 0; i < 100; ++i)
    {
      if (i % 3 == 0 && i % 5 == 0)
	{
	  std::cout << "buzzfizz" << std::endl;
	}
      else
	{
	  if (i % 3 == 0)
	    {
	      std::cout << "buzz" << std::endl;
	    }
	  else if (i % 5 == 0)
	    {
	      std::cout << "fizz" << std::endl;
	    }
	  else
	    {
	      std::cout << "numarul este:" << i << std::endl;
	    }

	}
    
}


return 0;
}

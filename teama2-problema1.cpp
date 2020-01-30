/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int
main ()
{
  int ps = 0;
  for (int i = 1; i < 100; i++)
    {
          if (i > 10 && i < 20)
	{
	  continue;
	}
	else {
      if (i % 2 == 0)
	{
	  ps = ps + i;
	}
      if (i < 10)
	{
	  std::cout << i << std::endl;
	}
	}
	
    }
  std::cout << "Suma nr pare de la 0 la 100 este:" << ps << endl;
  return 0;
}


/***
 * Main.cpp
 *
 *  Created on: Sep 11, 2012
 *      Author: sbellus
 */

#include "Application.h"
#include <PrinterLibrary/ConsolePrinter.h>

int main(int argumentCount, const char** arguments)
{
   ConsolePrinter printer;
   Application application(printer);

   application.Run();

   return 0;
}


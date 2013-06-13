/*
 * PrintHelloWorldTest.cpp
 *
 *  Created on: Jan 23, 2012
 *      Author: sbellus
 */

#include <CppUTest/TestHarness.h>
#include <CppUTestExt/MockSupport.h>
#include <PrinterLibrary/mock/MockPrinter.h>
#include <Application.h>

TEST_GROUP(PrintHelloWorldTest)
{
   MockPrinter* printer;
   Application* application;

      void setup()
      {
         printer = new MockPrinter;
         application = new Application(*printer);
      }

      void teardown()
      {
         delete printer;
         delete application;
      }
};

TEST(PrintHelloWorldTest, PrintHelloWorld)
{
   application->Run();
   STRCMP_EQUAL("Hello World\n", printer->printedText.c_str());
}
 

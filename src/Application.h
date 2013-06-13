/*
 * Application.h
 *
 *  Created on: Mar 15, 2013
 *      Author: sbellus
 */

#ifndef Application_H_
#define Application_H_

class Printer;

class Application
{
   public:
      void Run();

      explicit Application(Printer&);
      virtual ~Application();
   private:
      Printer& printer;

      Application(const Application&);
      Application& operator=(const Application&);
};

#endif

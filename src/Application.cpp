/*
 * Application.cpp
 *
 *  Created on: Mar 15, 2013
 *      Author: sbellus
 */

#include "Application.h"
#include <DocumentLibrary/PlainDocument.h>
#include <DocumentLibrary/PlainParagraph.h>
#include <DocumentLibrary/Text.h>

Application::Application(Printer& p) :
   printer(p)
{
}

Application::~Application()
{
}

void Application::Run()
{
   PlainDocument document;
   Paragraph& paragraph = document.AddParagraph();
   Text& text = paragraph.AddText();

   text.SetText("Hello World");

   document.PrintOn(printer);
}

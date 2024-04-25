#include "Application.h"
#include <stdio.h>


namespace GEngine
{
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		printf("Application started!");
		while (true);
	}
}
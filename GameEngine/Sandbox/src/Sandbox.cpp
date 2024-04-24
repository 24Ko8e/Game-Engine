#include "GEngine.h"

class Sandbox :public GEngine::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

void main()
{
	Sandbox* sndbox = new Sandbox();
	sndbox->Run();
	delete sndbox;
}
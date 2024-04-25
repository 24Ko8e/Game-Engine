#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GEngine::Application* GEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto _app = GEngine::CreateApplication();
	_app->Run();
	delete _app;
}
#endif
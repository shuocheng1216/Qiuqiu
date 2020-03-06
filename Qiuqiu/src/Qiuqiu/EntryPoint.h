#pragma once
#ifdef QIUQIU_PLATFORM_WINDOWS
extern Qiuqiu::Application* Qiuqiu::CreateApplication();

int main(int argc, char** argv) {
	auto app = Qiuqiu::CreateApplication();
	app->Run();
	delete app;
}
#endif // QIUQIU_PLATFORM_WINDOWS


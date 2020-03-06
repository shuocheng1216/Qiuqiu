#pragma once
#include "Core.h"
namespace Qiuqiu {
	class QIUQIU_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	//to be defined in Client
	Application* CreateApplication();
}
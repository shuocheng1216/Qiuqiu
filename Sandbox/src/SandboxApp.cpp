#include "Qiuqiu.h"

class Sandbox :public Qiuqiu::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};
Qiuqiu::Application* Qiuqiu::CreateApplication() {
	return new Sandbox();
}
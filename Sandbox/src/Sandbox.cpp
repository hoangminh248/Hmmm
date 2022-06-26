#include <Hmmm.h>


class Sandbox : public Hmmm::Application
{
public:
	Sandbox()
	{


	}
	~Sandbox()
	{


	}
};

Hmmm::Application* Hmmm::CreateApplication()
{
	return new Sandbox();
}
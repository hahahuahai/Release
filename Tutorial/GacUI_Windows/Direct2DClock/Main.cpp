#define GAC_HEADER_USE_NAMESPACE
#include "UI/Source/Demo.h"

using namespace vl::collections;
using namespace vl::stream;
using namespace vl::reflection::description;
using namespace demo;

void GuiMain()
{
	{
		FileStream fileStream(L"../UIRes/Direct2DClock.bin", FileStream::ReadOnly);
		auto resource = GuiResource::LoadPrecompiledBinary(fileStream);
		GetResourceManager()->SetResource(resource);
	}
	MainWindow window;
	window.MoveToScreenCenter();
	GetApplication()->Run(&window);
}
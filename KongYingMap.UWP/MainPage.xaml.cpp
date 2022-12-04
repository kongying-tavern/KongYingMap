//
// MainPage.xaml.cpp
// MainPage 类的实现。
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "lib/cvAutoTrack.h"
#pragma comment(lib,"lib/cvAutoTrack.lib")

using namespace KongYingMap_UWP;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x804 上介绍了“空白页”项模板

MainPage::MainPage()
{
	InitializeComponent();
	
	char* version_buff = new char[100];
	//GetCompileVersion(version_buff, 100);
	std::string version_string(version_buff);

	// 动态加载dll cvAutoTrack.dll


	// 绑定数据infoString到控件InfoTextBlock 


}

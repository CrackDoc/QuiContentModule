#include "QuiContentModule.h"
#include "ui_QuiContentModule.h"

CQuiContentModule::CQuiContentModule(QWidget *parent)
    : QWidget(parent)
	,ui(new Ui::QuiContentModule)
{
    ui->setupUi(this);
}
CQuiContentModule::~CQuiContentModule()
{
	
}
std::string CQuiContentModule::GetName() const
{
	return "";
}

std::string CQuiContentModule::GetCompany() const
{
	return "";
}

std::string CQuiContentModule::GetVersion() const
{
	return "";
}

std::string CQuiContentModule::GetDescription() const
{
	return "";
}

bool CQuiContentModule::Initialise()
{
	return true;
}

bool CQuiContentModule::Uninitialise()
{
	return true;
}
IMPLEMENT_MODULE(QuiContent)

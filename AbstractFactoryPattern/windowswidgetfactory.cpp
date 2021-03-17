#include "windowswidgetfactory.h"
#include "windowsdialog.h"
#include "windowspushbutton.h"
#include <iostream>

std::unique_ptr<IDialog> WindowsWidgetFactory::createDialog()
{
    std::cout << "\nCreating Windows Dialog...";
    return std::make_unique<WindowsDialog>();
}

std::unique_ptr<IPushButton> WindowsWidgetFactory::createPushButton()
{
    std::cout << "\nCreating Windows Pushbutton...";
    return std::make_unique<WindowsPushButton>();
}

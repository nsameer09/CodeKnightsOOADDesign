#include "linuxwidgetsfactory.h"
#include "linuxdialog.h"
#include "linuxpushbutton.h"
#include <iostream>

std::unique_ptr<IDialog> LinuxWidgetsFactory::createDialog()
{
    std::cout << "\nCreating Linux Dialog...";
    return std::make_unique<LinuxDialog>();
}

std::unique_ptr<IPushButton> LinuxWidgetsFactory::createPushButton()
{
    std::cout << "\nCreating Linux Pushbutton...";
    return std::make_unique<LinuxPushButton>();
}

#ifndef LINUXWIDGETSFACTORY_H
#define LINUXWIDGETSFACTORY_H

#include "iwidgetfactory.h"

class LinuxWidgetsFactory : public IWidgetFactory
{
public:
    virtual std::unique_ptr<IDialog> createDialog() override;
    virtual std::unique_ptr<IPushButton> createPushButton() override;
//    virtual void createTreeWidget() override;
//    virtual void createCanvasWidget() override;
};

#endif // LINUXWIDGETSFACTORY_H

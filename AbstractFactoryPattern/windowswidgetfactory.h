#ifndef WINDOWSWIDGETFACTORY_H
#define WINDOWSWIDGETFACTORY_H

#include "iwidgetfactory.h"

class WindowsWidgetFactory : public IWidgetFactory
{
public:
    virtual std::unique_ptr<IDialog> createDialog() override;
    virtual std::unique_ptr<IPushButton> createPushButton() override;
//    virtual void createTreeWidget() override;
//    virtual void createCanvasWidget() override;
};

#endif // WINDOWSWIDGETFACTORY_H

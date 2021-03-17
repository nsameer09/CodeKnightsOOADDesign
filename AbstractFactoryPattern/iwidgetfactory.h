#ifndef WIDGETFACTORY_H
#define WIDGETFACTORY_H

#include "idialog.h"
#include "ipushbutton.h"
#include <memory>

class IWidgetFactory
{
public:
    virtual std::unique_ptr<IDialog> createDialog() = 0;
    virtual std::unique_ptr<IPushButton> createPushButton() = 0;
//    virtual void createTreeWidget() = 0;
//    virtual void createCanvasWidget() = 0;
};

#endif // WIDGETFACTORY_H

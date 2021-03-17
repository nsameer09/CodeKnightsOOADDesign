#ifndef WindowsPushButton_H
#define WindowsPushButton_H

#include "ipushbutton.h"

class WindowsPushButton : public IPushButton
{
public:
    virtual void drawPushButton() override;
    virtual int getButtonSize() override;
};

#endif // WindowsPushButton_H

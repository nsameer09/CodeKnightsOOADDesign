#ifndef LinuxPushButton_H
#define LinuxPushButton_H

#include "ipushbutton.h"

class LinuxPushButton : public IPushButton
{
public:
    virtual void drawPushButton() override;
    virtual int getButtonSize() override;
};

#endif // LinuxPushButton_H

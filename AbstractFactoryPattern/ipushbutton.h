#ifndef IPUSHBUTTON_H
#define IPUSHBUTTON_H

class IPushButton
{
public:
    ~IPushButton(){}

    virtual void drawPushButton() = 0;
    virtual int getButtonSize() = 0;
};

#endif // IPUSHBUTTON_H

#ifndef DIALOG_H
#define DIALOG_H

class IDialog
{
public:
    ~IDialog() {}

    virtual void drawDialog() = 0;
    virtual int getDialogSize() = 0;
};

#endif // DIALOG_H

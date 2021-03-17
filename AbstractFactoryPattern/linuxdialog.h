#ifndef LINUXDIALOG_H
#define LINUXDIALOG_H

#include "idialog.h"
#include <iostream>

class LinuxDialog : public IDialog
{
public:
    virtual void drawDialog() override;
    virtual int getDialogSize() override;
};

#endif // LINUXDIALOG_H

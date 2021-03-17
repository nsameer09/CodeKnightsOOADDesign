#ifndef WINDOWSDIALOG_H
#define WINDOWSDIALOG_H

#include "idialog.h"

class WindowsDialog : public IDialog
{
public:
    virtual void drawDialog() override;
    virtual int getDialogSize() override;
};

#endif // WINDOWSDIALOG_H

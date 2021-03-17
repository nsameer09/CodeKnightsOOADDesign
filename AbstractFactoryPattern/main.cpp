#include "iwidgetfactory.h"
#include "windowswidgetfactory.h"
#include "linuxwidgetsfactory.h"
#include "ipushbutton.h"
#include "idialog.h"
#include <memory>

class MyApplication
{
public:
    MyApplication(std::unique_ptr<IWidgetFactory>& factory)
    {
        m_factory = std::move(factory);
        m_dialog = m_factory->createDialog();
        m_button = m_factory->createPushButton();

        m_dialog->drawDialog();
        m_button->drawPushButton();
    }

private:
    std::unique_ptr<IWidgetFactory> m_factory = nullptr;
    std::unique_ptr<IPushButton> m_button = nullptr;
    std::unique_ptr<IDialog> m_dialog = nullptr;
};

int main()
{
    std::unique_ptr<IWidgetFactory> winFactory = std::make_unique<WindowsWidgetFactory>();
    std::unique_ptr<IWidgetFactory> linFactory = std::make_unique<LinuxWidgetsFactory>();
    //Pass the required factory
    MyApplication app(linFactory);
    return 0;
}

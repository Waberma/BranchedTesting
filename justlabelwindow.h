#ifndef JUSTLABELWINDOW_H
#define JUSTLABELWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class JustLabelWindow; }
QT_END_NAMESPACE

class JustLabelWindow : public QWidget
{
    Q_OBJECT

public:
    JustLabelWindow(QWidget *parent = nullptr);
    ~JustLabelWindow();

private:
    Ui::JustLabelWindow *ui;
};
#endif // JUSTLABELWINDOW_H

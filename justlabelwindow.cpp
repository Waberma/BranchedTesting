#include "justlabelwindow.h"
#include "ui_justlabelwindow.h"

JustLabelWindow::JustLabelWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::JustLabelWindow)
{
    ui->setupUi(this);
}

JustLabelWindow::~JustLabelWindow()
{
    delete ui;
}


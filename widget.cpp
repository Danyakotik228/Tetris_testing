#include "widget.h"
#include "ui_widget.h"
#include "QProcess"
#include "app/functions.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    sWindow = new Form();
    connect(sWindow, &Form::firstWindow, this, &Widget::show);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_gameButton_clicked()
{
    sWindow->show();
    this->close();
}

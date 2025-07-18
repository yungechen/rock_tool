#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_rock_tool.h"

class rock_tool : public QMainWindow
{
    Q_OBJECT

public:
    rock_tool(QWidget *parent = Q_NULLPTR);

private:
    void initUI(void);
    void initData(void);
    void initConnect(void);

private:
    Ui::rock_toolClass ui;
};

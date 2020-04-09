#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Camera_Ui.h"

class Camera_Ui : public QMainWindow
{
	Q_OBJECT

public:
	Camera_Ui(QWidget *parent = Q_NULLPTR);

private:
	Ui::Camera_UiClass ui;
};

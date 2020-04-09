#include "Camera_Ui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Camera_Ui w;
	w.show();
	return a.exec();
}

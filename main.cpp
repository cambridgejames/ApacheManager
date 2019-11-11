#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	MainWindow w;
	w.show();

	/*QSplitter *splitterMain;
	QTextEdit *textleft;
	QSplitter *splitterRight;
	QTextEdit *textUp;
	QTextEdit *textBottom;
	splitterMain=new QSplitter(Qt::Horizontal,0);                   //Horizontal:水平的
	textleft=new QTextEdit(QObject::tr("Left Widget"),splitterMain);
	textleft->setAlignment(Qt::AlignCenter);
	//右部分分割窗口
	splitterRight=new QSplitter(Qt::Vertical,splitterMain);        //Vertical：垂直的
	splitterRight->setOpaqueResize(false);                                    //Opaque：不透明的
	textUp =new QTextEdit(QObject::tr("Top Widget"),splitterRight);
	textUp->setAlignment(Qt::AlignCenter);
	textBottom=new QTextEdit(QObject::tr("Bottom Widget"),splitterRight);
	textBottom->setAlignment(Qt::AlignCenter);
	splitterMain->setStretchFactor(0,1);                                      //Stretch Factor:拉伸系数
	splitterMain->setWindowTitle(QObject::tr("Splitter"));
	splitterMain->show();*/
	return a.exec();
}

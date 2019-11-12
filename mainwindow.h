#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSplitter>
#include <QTextEdit>
#include <QObject>
#include <QTextCodec>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void on_ckbSpeedLimit_stateChanged(int arg1);

	void on_btnRootDir_clicked();

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

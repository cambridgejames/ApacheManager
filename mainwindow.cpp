#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	this->setStyleSheet("");
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_ckbSpeedLimit_stateChanged(int arg1)
{
	if(ui->ckbSpeedLimit->isChecked()) {
		ui->spbMaxFlow->setEnabled(true);
		ui->spbMaxConnect->setEnabled(true);
	} else {
		ui->spbMaxFlow->setEnabled(false);
		ui->spbMaxConnect->setEnabled(false);
	}
}

void MainWindow::on_btnRootDir_clicked()
{
	QFileDialog *fileDialog = new QFileDialog(this);
	fileDialog->setWindowTitle(QStringLiteral("选择网站的根目录"));	//定义文件对话框标题
	fileDialog->setDirectory(".");										//设置默认文件路径
	fileDialog->setNameFilter(tr("File(*.*)"));						//设置文件过滤器
	fileDialog->setViewMode(QFileDialog::Detail);						//设置视图模式

	QStringList fileNames;
	if (fileDialog->exec()) {
		fileNames = fileDialog->selectedFiles();
	}
}

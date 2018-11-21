#include "mainwindow.h"

#include <QtWidgets>
#include <QToolBar>

MainWindow::MainWindow()
{
    createToolbar();
}

void MainWindow::createToolbar()
{
       QToolBar* toolbar = addToolBar(tr("Actions"));
       toolbar->addAction(QIcon(":/icons/1.png"), tr("1"), [this]() {
            QMessageBox::about(this, tr("First action"),
                tr("1!"));
           });
       toolbar->addAction(QIcon(":/icons/2.png"), tr("2"), [this]() {
            QMessageBox::about(this, tr("Second action"),
                tr("2!"));
           });
       toolbar->addAction(QIcon(":/icons/3.png"), tr("3"), [this]() {
            QMessageBox::about(this, tr("Third action"),
                tr("3!"));
           });
}

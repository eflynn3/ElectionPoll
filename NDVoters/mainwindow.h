#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"

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
    void on_actionQuit_triggered();

    void on_quitButton_clicked();

    void makePlot();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
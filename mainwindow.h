#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void sl_convert();

    void on_actionFromClipboard_triggered();
    void on_actionFromFile_triggered();
    void on_actionQuit_triggered();
    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;

protected:
    void closeEvent(QCloseEvent *);
};

#endif // MAINWINDOW_H

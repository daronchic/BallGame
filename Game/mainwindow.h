#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtOpenGL/QtOpenGL>
#include <QGLWidget>

class MainWindow : public QGLWidget
{
    Q_OBJECT

public:
    MainWindow(QGLWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H

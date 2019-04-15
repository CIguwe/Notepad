#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>

namespace Ui {
class MainWindow;
}

/**
 * @brief
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief
     *
     * @param parent
     */
    explicit MainWindow(QWidget *parent = nullptr);
    /**
     * @brief
     *
     */
    ~MainWindow();

private slots:
    /**
     * @brief
     *
     */
    void on_actionNew_triggered();

    /**
     * @brief
     *
     */
    void on_actionOpen_triggered();

    /**
     * @brief
     *
     */
    void on_actionSave_as_triggered();

    /**
     * @brief
     *
     */
    void on_actionPrint_triggered();

    /**
     * @brief
     *
     */
    void on_actionQuit_triggered();

    /**
     * @brief
     *
     */
    void on_actionCopy_triggered();

    /**
     * @brief
     *
     */
    void on_actionPaste_triggered();

    /**
     * @brief
     *
     */
    void on_actionUndo_triggered();

    /**
     * @brief
     *
     */
    void on_actionRedo_triggered();

    /**
     * @brief
     *
     */
    void on_actionCut_triggered();

private:
    Ui::MainWindow *ui; /**< TODO: describe */
    QString currentFile = ""; /**< TODO: describe */
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

/**
 * @brief The MainWindow class
 * Represents the main application window with a styled button and label.
 */
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onButtonClick();  // Slot to handle button clicks

private:
    QPushButton *button; ///< Interactive button
    QLabel *label;       ///< Display label
    void applyStyles();  ///< Function to apply custom styles
};

#endif // MAINWINDOW_H


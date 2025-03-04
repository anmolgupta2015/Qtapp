#include "mainwindow.h"
#include <QVBoxLayout>
#include <QFont>

/**
 * @brief Constructor for MainWindow
 * Initializes UI elements, applies styles, and connects signals.
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), button(new QPushButton("Click Me")), label(new QLabel("Welcome to Qt!")) {

    // Set up the central widget and layout
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
    layout->addWidget(button);

    setCentralWidget(centralWidget);
    setWindowTitle("Stylish Qt App");
    resize(400, 300);

    // Apply custom styles
    applyStyles();

    // Connect button click signal to the slot function
    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClick);
}

/**
 * @brief Destructor for MainWindow
 */
MainWindow::~MainWindow() {}

/**
 * @brief Slot that handles button click events.
 * Updates the label text.
 */
void MainWindow::onButtonClick() {
    label->setText("You clicked the button!");
}

/**
 * @brief Applies custom styles to UI elements.
 */
void MainWindow::applyStyles() {
    // Set font styles
    QFont labelFont("Arial", 16, QFont::Bold);
    QFont buttonFont("Arial", 14, QFont::Medium);
    label->setFont(labelFont);
    button->setFont(buttonFont);

    // Apply Qt StyleSheet
    this->setStyleSheet(R"(
        QWidget {
            background-color: #2c3e50;
        }
        QLabel {
            color: #ecf0f1;
            font-size: 18px;
        }
        QPushButton {
            background-color: #3498db;
            color: white;
            border-radius: 8px;
            padding: 10px;
            border: none;
            transition: 0.3s;
        }
        QPushButton:hover {
            background-color: #2980b9;
        }
        QPushButton:pressed {
            background-color: #1f618d;
        }
    )");
}

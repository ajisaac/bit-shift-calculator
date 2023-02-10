#include <QApplication>
#include <QPushButton>

/*
 A calculator to visually demonstrate bitshifting.
 Also shows 2s compliment
 Binary operations
 Convert to hexadecimal, decimal, octo, binary
 */

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}

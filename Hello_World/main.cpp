#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello World");
    label->setWindowTitle("Hello World");
    label->resize(250,200);
    label->show();
    return app.exec();
}

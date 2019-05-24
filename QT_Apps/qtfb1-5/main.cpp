#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char* input = argv[1];
    int b;

    qInfo() << "Hello World!";
    b = 23;
    qInfo() << input;

    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char** argv) {
  QCoreApplication app(argc, argv);

  qInfo() << "Hello World!";

  return app.exec();
}

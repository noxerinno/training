#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QHBoxLayout>
#include "MaFrenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    /*QString locale = QLocale::system().name().section('_', 0, 0);
    QTranslator translator;
    translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    app.installTranslator(&translator);*/

    MaFrenetre fenetre(220, 100);
    fenetre.show();

    /*QWidget fenetre;

    QPushButton *bouton1 = new QPushButton("Bonjour");
    QPushButton *bouton2 = new QPushButton("les");
    QPushButton *bouton3 = new QPushButton("salopes !");*/

    fenetre.show();

    return app.exec();
}

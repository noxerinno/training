#ifndef MAFRENETRE_H
#define MAFRENETRE_H

#include <QObject>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>
#include <QMessageBox>
#include <QInputDialog>
#include <QString>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>

class MaFrenetre : public QWidget
{
    Q_OBJECT

    public:
        MaFrenetre();
        MaFrenetre(int largeur, int hauteur);

    public slots:
        /*void changerLargeur(int Largeur);
        void changerHauteur(int hauteur);*/
        void changerDimension(int dimension);
        void ouvrirDialogue();

    signals:
        void agrandissementMax();

    private:
//        QPushButton *m_bouton;
//        QPushButton *m_bouton2;
        QPushButton *m_boutonDialogue;
//        QLCDNumber *m_lcd;
//        QProgressBar *m_progressBar;
        QSlider *m_slider;
};

#endif // MAFRENETRE_H

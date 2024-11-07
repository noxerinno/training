#include "MaFrenetre.h"

MaFrenetre::MaFrenetre() : QWidget()
{
    setFixedSize(800, 450);

    /*m_bouton = new QPushButton("N'appuie pas sur ce bouton !", this);

    m_bouton->setToolTip("Ah non en fait c'est Frantz le pd...");
    m_bouton->setFont(QFont("URW Chancery L", 12, 75));
    m_bouton->setCursor(Qt::ClosedHandCursor);
    m_bouton->setIcon(QIcon("Test.png"));
    m_bouton->setGeometry(280, 200, 240, 50);
    QObject::connect(m_bouton, SIGNAL(clicked(bool)), qApp, SLOT(quit()));*/

    /*m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(50, 20);*/

    /*m_progressBar = new QProgressBar(this);
    m_progressBar->setGeometry(10, 20, 150, 30);*/

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);

//    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressBar, SLOT(setValue(int)));
}

MaFrenetre::MaFrenetre(int largeur, int hauteur) : QWidget()
{
    setFixedSize(largeur, hauteur);

    /*m_bouton = new QPushButton("N'appuie pas sur ce bouton !", this);
    m_bouton->setToolTip("Ah non en fait c'est Frantz le pd...");
    m_bouton->setFont(QFont("URW Chancery L", 12, 75));
    m_bouton->setCursor(Qt::ClosedHandCursor);
    m_bouton->setIcon(QIcon("Test.png"));
    m_bouton->setGeometry(280, 200, 240, 50);

    QObject::connect(m_bouton, SIGNAL(clicked(bool)), qApp, SLOT(quit()));*/

    /*m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(50, 20);*/

    /*m_progressBar = new QProgressBar(this);
    m_progressBar->setGeometry(10, 20, 150, 30);
    m_progressBar->setToolTip("A progress bar");*/

    /*m_bouton2 = new QPushButton(this);
    m_bouton2->setGeometry(175, 20, 30, 30);
    m_bouton2->setToolTip("Close the window");
    m_bouton2->setIcon(QIcon("Close-icon.png"));*/

    m_boutonDialogue = new QPushButton("Bite", this);
    m_boutonDialogue->setGeometry(10, 10, 150, 50);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setRange(200, 600);
    m_slider->setGeometry(10, 60, 150, 20);

//    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressBar, SLOT(setValue(int)));
//    QObject::connect(m_bouton2, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
//    QObject::connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
//    QObject::connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerHauteur(int)));
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerDimension(int)));
//    QObject::connect(this, SIGNAL(agrandissementMax()), qApp, SLOT(quit()));
    QObject::connect(m_boutonDialogue, SIGNAL(clicked(bool)), this, SLOT(ouvrirDialogue()));
}

/*void MaFrenetre::changerLargeur(int largeur)
{
    setFixedSize(largeur, 400);
}*/

/*void MaFrenetre::changerHauteur(int hauteur)
{
    setFixedSize(400, hauteur);
}*/

void MaFrenetre::changerDimension(int dimension)
{
    setFixedSize(dimension, dimension);

    if(dimension==600)
    {
        emit agrandissementMax();
    }
}

void MaFrenetre::ouvrirDialogue()
{
    /*int reponse = QMessageBox::question(this, "Bitocul", "Pour vous, la terre est-elle plate ?", QMessageBox::No | QMessageBox::Yes);

    if(reponse == QMessageBox::Yes)
    {
        QMessageBox::critical(this, "La verite sur votre vie", "Oula ! Vous etes con !");
    }
    else if(reponse == QMessageBox::No)
    {
        QMessageBox::information(this, "La verite sur votre vie", "Bravo, vous etes normalement constitue !");
    }*/

    /*QString pseudo = QInputDialog::getText(this, "Pseudo", "Quel est votre pseudo ?");
    QMessageBox::question(this, "Confirmation", "Etes vous sur que votre pseudo est bien " + pseudo + " ?");*/

    /*bool ok = false;

    QFont police = QFontDialog::getFont(&ok, m_boutonDialogue->font(), this, "Scarfacedughetto");

    if(ok)
        m_boutonDialogue->setFont(police);

    QColor couleur = QColorDialog::getColor(Qt::white, this);

    QPalette palette;
    palette.setColor(QPalette::ButtonText, couleur);
    m_boutonDialogue->setPalette(palette);*/

    QString fichier = QFileDialog::getOpenFileName(this, "Ouverture de fichier", QString(), "Images (*.png *.jpg *.jpeg *.gif)");
    QMessageBox::information(this, "Fichier", "Vous avez selectionne :\n" + fichier);
}

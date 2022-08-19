#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <QObject>
#include <QTranslator>
#include <QApplication>
#include <QDebug>

class Language
{
public:
    explicit Language();
    bool setLanguage(QString lang);
};

#endif // LANGUAGE_H

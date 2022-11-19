#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <QTranslator>
#include <QApplication>
#include <QDebug>
#include <QDir>

class Language :public QObject
{
    Q_OBJECT
public:
    static QTranslator * SoftWareLanguage ;
    explicit Language(QObject * parent = nullptr);

    ///
    /// \brief getLanguagelist  get all language
    /// \return return all language
    ///
    QStringList getLanguagelist(void);

    ///
    /// \brief setLanguage  set language
    /// \param lang         language name
    /// \return             return ture or false
    ///
    bool setLanguage(QString lang);
private:
};

#endif // LANGUAGE_H

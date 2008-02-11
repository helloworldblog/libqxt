/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtDesigner module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of th Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
**
** <http://libqxt.sourceforge.net>  <foundation@libqxt.org>
**
****************************************************************************/

#ifndef QXTLANGUAGECOMBOBOX_H
#define QXTLANGUAGECOMBOBOX_H

#include <QComboBox>
#include <QLocale>
#include "qxtglobal.h"
#include "qxtpimpl.h"

class QxtLanguageComboBoxPrivate;

class QXT_GUI_EXPORT QxtLanguageComboBox : public QComboBox
{
    Q_OBJECT
    QXT_DECLARE_PRIVATE(QxtLanguageComboBox);
    Q_PROPERTY(QString currentLanguageName READ currentLanguageName)
#if QT_VERSION >= 0x040300
    Q_PROPERTY(QLocale::Language currentLanguage READ currentLanguage WRITE setCurrentLanguage)
#endif
    Q_PROPERTY(DisplayMode displayMode READ displayMode WRITE setDisplayMode)

public:
    explicit QxtLanguageComboBox(QWidget* parent = 0);
    virtual ~QxtLanguageComboBox();

    enum DisplayMode
    {AllLanguages, AvailableTranslations};
    Q_ENUMS(DisplayMode);

    DisplayMode displayMode() const;

    QLocale::Language currentLanguage() const;
    QString currentLanguageName() const;

public slots:
    void setCurrentLanguage(QLocale::Language lang);
    void setDisplayMode(DisplayMode mode);

signals:
    void currentLanguageChanged(QLocale::Language country);
    void currentLanguageNameChanged(const QString& name);

/*public:
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;*/
};


#endif  // QXTLANGUAGECOMBOBOX_H
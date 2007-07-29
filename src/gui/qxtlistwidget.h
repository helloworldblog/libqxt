/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qt eXTension library
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
** <http://libqxt.sourceforge.net>  <libqxt@gmail.com>
**
****************************************************************************/
#ifndef QXTLISTWIDGET_H
#define QXTLISTWIDGET_H

#include <QListWidget>
#include "qxtpimpl.h"
#include "qxtglobal.h"
#include "qxtlistwidgetitem.h"

class QxtListWidgetPrivate;

class QXT_GUI_EXPORT QxtListWidget : public QListWidget
{
	Q_OBJECT
	QXT_DECLARE_PRIVATE(QxtListWidget);
	friend class QxtListWidgetItem;
	
public:
	explicit QxtListWidget(QWidget* parent = 0);
	virtual ~QxtListWidget();
	
signals:
	void itemEditingStarted(QListWidgetItem* item);
	void itemEditingFinished(QListWidgetItem* item);
	void itemCheckStateChanged(QxtListWidgetItem* item);
};

#endif // QXTLISTWIDGET_H
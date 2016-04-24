/***************************************************************************
*   Copyright (C) 2012-2015 Highway-9 Studio.                             *
*   787280310@qq.com									                   *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   CUIT Highway-9 Studio, China.									       *
***************************************************************************/

/*!
* \file   HotKeysTableWidget.h
* \author chengxuan   787280310@qq.com
* \date   2015-01-24
* \brief  �ȼ�ҳ��ͷ�ļ���
* \version 3.0.0
*
* \verbatim
* ��ʷ
*          3.0.0   ����,
*          2015-01-24    by chengxuan
*
* \endverbatim
*
*/

#ifndef HOTKEYSTABLEWIDGET_H
#define HOTKEYSTABLEWIDGET_H

/*! \def HOTKEYSTABLEWIDGET_VERSION
*  �汾���ƺ꣬��Ӧv3.0.0�汾.
*/
#define HOTKEYSTABLEWIDGET_VERSION   0x030000

#include <QTableWidget>

/*! �ȼ�ҳ��
*/
class HotKeysTableWidget : public QTableWidget
{
    Q_OBJECT

public:
	/*! ���캯��
	 *  \param parent ������ָ�룬Ĭ��ΪNULL
	 */
    HotKeysTableWidget(QWidget *parent = NULL);

	/*! ��������.*/
    ~HotKeysTableWidget();
};

#endif // HOTKEYSTABLEWIDGET_H
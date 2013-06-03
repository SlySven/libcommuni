/*
* Copyright (C) 2008-2013 The Communi Project
*
* This library is free software; you can redistribute it and/or modify it
* under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This library is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
* License for more details.
*/

#ifndef IRCCHANNEL_P_H
#define IRCCHANNEL_P_H

#include "ircchannel.h"

class IrcChannelPrivate
{
    Q_DECLARE_PUBLIC(IrcChannel)

public:
    void init(const QString& p, const QString& n);

    void changeMode(const QString& value);
    void setMode(const QString& value);
    void setTopic(const QString& value);

    bool processMessage(IrcMessage* message);

    IrcChannel* q_ptr;
    mutable IrcUserModel* model;
    QString name;
    QString prefix;
    QString mode;
    QString topic;
};

#endif // IRCCHANNEL_P_H
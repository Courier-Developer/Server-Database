create table UserInfo(
    id integer primary key,
    username text,
    password text,
    createdTime timestamp,   --日期和时间(无时区)
    lastLoginTime timestamp, -- 上次登录时间，用于同步数据
    alive boolean,
    ip cidr,                --ip地址
    avatar bit varying,     --不限长比特流
    birthday timestamp,
    signature text,
    isMale boolean,
    nickname text
);

create table Friend(
    owner integer references UserInfo(id),
    friend integer references UserInfo(id),
    groupName text,
    mute boolean,
    isAgreed boolean,
    primary key (owner, friend)
);

create table ChatGroup(
    id integer primary key ,
    name text
);

create table User_in_Group(
    userId integer references UserInfo(id),
    groupId integer references ChatGroup(id),
    mute boolean,
    primary key (userId, groupId)
);

create type MsgType as enum ('text', 'file', 'image');

create table Message(
    id integer primary key,
    sender integer references UserInfo(id),
    receiver integer references UserInfo(id),
    type MsgType,
    createdTime timestamp,
    editedTime timestamp,
    isToGroup boolean,
    content text
);

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "db-classes.hpp"

// https://github.com/Courier-Developer/feverrpc/blob/master/lock.cpp
// 关注ThreadManager的可以调用的方法，比如查询是否在线
extern ThreadManager threadManager;


/// \brief 登录
/// \param username
/// \param password
/// \return 用户id 如果登录失败则返回负数 
int login(std::string username,std::string password){
    // TODO
    return 1;   
}

/// \brief 注册
/// \param username
/// \param password
/// \param nickname
/// \return 用户id 如果失败则返回负数  
int register_account(std::string username, std::string password, std::string nickname){

    return 1;
}

/// \brief 下线
///
/// 主要是将alive字段和lastLoginTime字段进行更新
/// \param uid
/// \return if it is ok.
bool logout(int uid){
    
}

/// \brief 获得用户信息
/// \param uid id of UserInfo
/// \return Response<UserInfo> 
Response<UserInfo> get_info(int uid){
    
}



/// \brief 更新用户信息
/// \param uid
/// \param UserInfo
/// \return 
Response<std::string> update_info(int uid, UserInfo ui){

}

/// \brief 获得用户所有好友信息
/// \param uid id of UserInfo
Response<std::vector<Friend>> list_friends(int uid){

}

/// \brief 获得某个好友信息
Response<Friend> get_friend(int uid, int friend_id){
    
}

/// \brief 申请好友
/// 
/// 需要同时向ThreadManager发送请求
/// 在数据库中存储的时候需要存储单向的
bool request_friend(int uid, int friend_id){

}

/// \brief 同意好友请求
///
/// 在数据库中存储需要存储双向的
bool make_friend(int uid, int friend_id){

} 

/// \brief 删除好友
bool delete_friend(int uid,int friend_id){

}

/// \brief 获得所有自己加入的群组
Response<std::vector<ChatGroup>> list_chat_groups(int uid){
    
}

/// \brief 创建群组
/// \return Response<ChatGroup> 创建后的群组信息，主要是包含id
Response<ChatGroup> create_chat_group(int uid, std::string nickname){

}

/// \brief 获得某个群组的所有用户信息
Response<std::vector<Friend>> get_group_mumber(int uid, int group_id){

}


/// \brief 离开一个群组
///
/// 如果是群主，直接解散群？
bool leave_group(int uid, int group_id){

}

/// \brief 获得上次离线以后所有关于自己的聊天记录
/// 
/// 包括人对人和群组的
Response<std::vector<Message>> get_unread_messages(int uid){
    
}

/// \brief 获得文件信息内容
/// TODO incomplete definition
/// 根据path取出存储在文件系统里的文件
Response<Message> download_data(int uid, std::string path){


}

/// \brief 上传文件
/// TODO incomplete definition
/// 根据path和data将文件存储
bool upload_data(int uid, std::string path){


}

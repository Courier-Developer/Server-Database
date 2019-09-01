#pragma once
#include <iostream>
#include <string>
#include "db-classes.hpp"

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

/// \brief 获得用户信息
/// \param uid id of UserInfo
/// \return Response<UserInfo> 
Response<UserInfo> get_info(int uid){
    
}

Response<std::string> update_info(int uid, UserInfo ui){

}


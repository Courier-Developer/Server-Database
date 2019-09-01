#include <iostream>
#include <string>


template <typename T> class Response {
    bool success;
    std::string msg;

  public:
    T data;
    Response(bool success, std::string msg,T data):success(success),msg(msg),data(data){};
    Response(bool success, std::string msg):success(success),msg(msg){};
};

struct UserInfo{
    int id;
    std::string username;
    std::string createdTime;
    std::string lastLoginTime;
    // TODO avatar
    std::string birthday;
    bool isMale;
    std::string nickname;
};
# 斗地主联机

玩法参考 [Wiki 百科](https://zh.wikipedia.org/zh-cn/%E9%AC%A5%E5%9C%B0%E4%B8%BB)。暂未加入抢地主规则（目前是随机地主）。

游戏中 `T` 表示 10，`X` 表示小王，`Y` 表示大王。

## 运行方法

**Linux**

1. 使用集成开发环境或 g++ 等编译器对 `server.cpp` 和 `client.cpp` 进行编译；
	- 终端编译方法：
		1. 自行下载 C++ 编译器，下以 g++ 为例；
		2. 打开终端，`cd` 到游戏文件夹内，键入 `g++ server.cpp -o server -std=c++11`，`g++ client.cpp -o client -std=c++11`；
2. 查看服务端电脑的 IP 地址（IPv4）；
3. 在服务端终端中键入 `./server` 运行服务端；
4. 在各个客户端终端键入 `./client` 运行客户端，并输入服务端的 IP 地址。

**Windows**

1. 使用集成开发环境或 g++ 等编译器对 `server.cpp` 和 `client.cpp` 进行编译；
	- 集成开发环境编译方法：
		1. 在编译选项处加入 `-lws2_32`，否则可能会编译失败。
	- 终端编译方法：
		1. 自行下载 C++ 编译器，下以 g++ 为例；
		2. 打开终端，`cd` 到游戏文件夹内，键入 `g++ server.cpp -o server -std=c++11 -lws2_32`，`g++ client.cpp -o client -std=c++11 -lws2_32`。
2. 查看服务端电脑的 IP 地址（IPv4）；
3. 在服务端运行生成的 `server.exe` 文件；
4. 在各个客户端运行生成的 `client.exe` 文件，并输入服务端的 IP 地址。

## 可能的问题

- 有几个客户端没有连接上：
	1. 必须先运行服务端，才能使用客户端进行连接。
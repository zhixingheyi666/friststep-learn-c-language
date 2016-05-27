 常用命令个性化
ls -al |grep
ls -al  |more
locate  *
find  (tiao guo D pan )
另设一个默认学习测试目录，登入后默认进入此目录，并且给此目录指定简便符号或者环境变量

编写自动运行脚本，关机就自动备份此文件到某个目录，高级自动备份其他重要文件到指定目录。高高级，如果文件改变，就自动备份到重要目录。

编写自动运行脚本，自动记录备份自己对系统配置，软件的重要配置和修改。

编写自动运行脚本，每次开机自动显示需要复习的内容，开机时慢慢在屏幕滚过，高级随机选择不同内容滚过

/******************分割线************************************/
// ~/.bash_aliases
  1 #User specific aliases and functions
  2 alias rm='rm -i'
  3 alias cp='cp -i'
  4 alias lss='ls -al | less'
  5 alias lg='ls -al |grep '
  6 alias ll='ls -al'
  7 alias lc='locate'
  8 #tishi ziji jizhu "/usr" de benyi. Resource: 资源
  9 alias usr='echo Uinx Software Resource'

/***********************分割线**********************************/
//   /etc/profies
    38 PATH=/usr/local/cmake/bin:/usr/local/clang+llvm/bin:$PATH
    39 whome=/mnt/dpan/桌面
    40 export PATH whome
/***********************分割线**********************************/
//  应用程序/系统工具/首选项/系统设置/键盘/快捷键
    禁用截屏快捷键 （原为 PrtSc）
    自定义快捷键Ctrl+b ,启动终端，gonme-termail



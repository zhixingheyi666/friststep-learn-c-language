

win：IDE 轻量级的推荐 DevC++       重量级的微软出品的Visual Studio
linux：可以用个编辑器（vim,emacs,sublime text,gedit）写代码， 用gcc来编译， 用gdb来debug.



1. 用code::blocks，自带gcc编译器的。可以在windows，linux下使用。不错的C++ IDE。适合新手。2. 命令行下自己敲命令编译。windows系统可以装一个cygwin。linux可以直接敲。编译器还是用gcc。写代码，使用vim/emacs(需要一段时间的学习和适应)。调试用gdb。此外还要学写简单的makefile。此方案适合有较大毅力，并且渴望成为牛人的人。


学习编程语言最重要的还是贵在坚持，多上机，勤锻炼！自学编程应该先从语法学起，完全熟悉语法之后再去看有关算法的东西，也就是先单纯学习c语言，能够熟练的写出简单程序之后，再去看有关算法和数据结构的书。学习C语言，是一个非常漫长的过程，如果你是看相关书籍学习的话，不要着急，一本书多看两遍三遍，学会交叉学习法，在学习C的过程中，可以看看数据结构，编译原理，操作系统等书籍，对编成都是很有帮助的。最开始学习的时候，先不要编一些比较大的程序，多编一些小程序，比如数组运算，字符组合等等，指针是C语言的精华，是比较复杂的部分。

另外,你可以在网上找一些教程教程做补充了解！

建议装一个ubuntu系统，学会vim+gcc+gdb的编程方式。

map <F5> :call CompileRunGcc()<CR>
func! CompileRunGcc()
exec "w"w
exec "!:gcc % -o %<"
exec "! ./%<"
endfunc

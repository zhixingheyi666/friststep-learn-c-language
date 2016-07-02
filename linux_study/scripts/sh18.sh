read -p "Please input a directory: " dir
if [ "$dir" == "" -o ! -d "$dir" ];then
	echo "The $dir id NOT exist in your system."
else
	echo "Yes ,it's exist in my system!"
fi
echo "The end!"

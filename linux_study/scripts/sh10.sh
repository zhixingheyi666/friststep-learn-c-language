echo "Now,I will detect your Lilux server's services!"
echo "\n\n"
testing=$(netstat -tuln | grep ":53 ")
if [ "$testing" != "" ];then
	echo "DNS is running in your system.$testing"
fi
testing=$(netstat -tunl | grep ":80 ")
if [ "$testing" != "" ];then
	echo "WWW is running in your system."
fi

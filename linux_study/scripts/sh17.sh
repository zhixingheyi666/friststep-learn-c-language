#	Use ping command to check the network's PC state.

read -p "Please input network : ex>192.168.1" network
read -p "Please input the range:ex>200 (1<=range<=255)" range
echo "$network.$range"
for sitenu in $(seq 1 $range)
do
	#底下的程序在取得ping的回传值是正确还是失败的！
	ping -c 1 -w 1 ${network}.${sitenu} &> /dev/null && result=0 ||
		#开始显示结果是正确的启动（UP）还是错误的没有连通（DOWN）
	if [ "$result" == 0 ];then
		echo "Server ${network}.${sitenu} is UP."
	else
		echo "Sever  ${network}.${sitenu} is DOWN."
	fi
done


PATH="$PATH":~/bin
export PATH
echo $PATH
case $1 in
	"hello")
		echo "Hello,how are you ?$1"
		;;
	"")
		echo "You MUST input parameters, ex> {$0 someword}"
		;;
	*)
	echo "The only parameter is 'hello', ex> {$0 hello}"
		;;
esac

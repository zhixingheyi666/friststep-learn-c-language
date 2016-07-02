
PATH="$PATH":~/bin
export PATH
echo $PATH
if [ "$1" == "twttwt" ]; then
	echo "Hello,how are you ?$1"
elif [ "$1" == "" ]; then
	echo "You MUST input parameters, ex> {$0 someword}"
elif [ "$BASH" == "/bin/sh" ]; then
	echo "This is a test!"
else
	echo "The only parameter is 'hello', ex> {$0 hello}"
fi

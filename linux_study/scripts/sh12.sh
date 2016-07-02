function printit(){
	echo -n "Your choice is "
}
case $1 in 
	"one")
		printit;echo $1  
		;;
	"two")
		printit;echo $1
		;;
	"three")
		printit;echo $1
		;;
	*)
		echo "Usage $0 {one|two|three}"
		;;
esac

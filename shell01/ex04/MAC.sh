ifconfig -a | grep -w "ether" | cut -c8- | rev | cut -c2- | rev

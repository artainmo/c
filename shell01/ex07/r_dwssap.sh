cat /etc/passwd | egrep -v "^\s*(#|$)" | sed g\;n | sort -dr | rev | tr ' ' ',' < output

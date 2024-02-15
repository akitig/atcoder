i=1
while [ $i -ne 320 ]
do
    s=$(printf "%03d\n" "${i}")
    acc new --template cpp abc$s
    ((i++))
done
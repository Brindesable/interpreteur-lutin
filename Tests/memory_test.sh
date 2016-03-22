for file in files/*.lt;
do valgrind --leak-check=full ./lut -p -a -o ${file};
done

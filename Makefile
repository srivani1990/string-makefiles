str_concat_final:
	gcc str_concat_main.c str_concat_func.c strlenfunc.c -o str_concat_final
clean:
	rm -f str_concat_final

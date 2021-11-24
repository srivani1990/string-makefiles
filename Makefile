str_occ_final:
	gcc str_occ_main.c str_occ_func.c strlenfunc.c -o str_occ_final
clean:
	rm -f str_occ_final

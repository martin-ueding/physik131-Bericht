# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

Bericht.pdf: Bericht.tex 1-linux.tex 2-latex.tex 3-cpp.tex
	make -C Uebung_02
	make -C Uebung_03
	make -C Uebung_05
	make -C Uebung_06
	make -C Uebung_07
	make -C Uebung_08
	make -C Uebung_09
	pdflatex -shell-escape $<

clean:
	$(RM) Bericht.aux
	$(RM) Bericht.lof
	$(RM) Bericht.log
	$(RM) Bericht.lol
	$(RM) Bericht.lot
	$(RM) Bericht.out
	$(RM) Bericht.pdf
	$(RM) Bericht.pyg
	$(RM) Bericht.toc
	make clean -C Uebung_02
	make clean -C Uebung_03
	make clean -C Uebung_05
	make clean -C Uebung_06
	make clean -C Uebung_07
	make clean -C Uebung_08
	make clean -C Uebung_09

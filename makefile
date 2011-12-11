Bericht.pdf: Bericht.tex 1-linux.tex 2-latex.tex 3-cpp.tex
	make -C Uebung_02
	make -C Uebung_03
	make -C Uebung_06
	make -C Uebung_07
	make -C Uebung_09
	pdflatex $<

clean:
	$(RM) Bericht.aux
	$(RM) Bericht.lof
	$(RM) Bericht.log
	$(RM) Bericht.lol
	$(RM) Bericht.lot
	$(RM) Bericht.out
	$(RM) Bericht.pdf
	$(RM) Bericht.toc

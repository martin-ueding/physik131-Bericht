Bericht.pdf: Bericht.tex
	make -C Uebung_02
	make -C Uebung_03
	make -C Uebung_06/ethiopian
	make -C Uebung_06/hello
	make -C Uebung_06/heron
	pdflatex $<

clean:
	$(RM) *.log *.aux *.toc Bericht.pdf *.out

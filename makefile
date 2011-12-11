Bericht.pdf: Bericht.tex 1-linux.tex 2-latex.tex 3-cpp.tex
	make -C Uebung_02
	make -C Uebung_03
	make -C Uebung_06
	make -C Uebung_07
	make -C Uebung_09/swap
	pdflatex $<

clean:
	$(RM) *.aux
	$(RM) *.lof
	$(RM) *.log
	$(RM) *.lol
	$(RM) *.lot
	$(RM) *.out
	$(RM) *.toc
	$(RM) Bericht.pdf

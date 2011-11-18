Bericht.pdf: Bericht.tex
	make -C Uebung_02
	make -C Uebung_03
	make -C Uebung_06/ethiopian
	make -C Uebung_06/hello
	make -C Uebung_06/heron
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

Bericht.pdf: Bericht.tex 1-linux.tex 2-latex.tex 3-cpp.tex
	make -C Uebung_02
	make -C Uebung_03
	make -C Uebung_06/ethiopian
	make -C Uebung_06/hello
	make -C Uebung_06/heron
	make -C Uebung_07
	pdflatex -shell-escape $<

clean:
	$(RM) *.aux
	$(RM) *.lof
	$(RM) *.log
	$(RM) *.lol
	$(RM) *.lot
	$(RM) *.out
	$(RM) *.toc
	$(RM) Bericht.pdf

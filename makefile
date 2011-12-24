# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

all: Martin_Ueding_Bericht.pdf README.html

Martin_Ueding_Bericht.pdf: Martin_Ueding_Bericht.tex 1-linux.tex 2-latex.tex 3-cpp.tex 4-root.tex
	make -C Uebung_02
	make -C Uebung_03
	make -C Uebung_05
	make -C Uebung_06
	make -C Uebung_07
	make -C Uebung_08
	make -C Uebung_09
	make -C Uebung_10
	pdflatex $<

README.html: README.markdown
	markdown $^ > $@

clean:
	$(RM) Martin_Ueding_Bericht.aux
	$(RM) Martin_Ueding_Bericht.lof
	$(RM) Martin_Ueding_Bericht.log
	$(RM) Martin_Ueding_Bericht.lol
	$(RM) Martin_Ueding_Bericht.lot
	$(RM) Martin_Ueding_Bericht.out
	$(RM) Martin_Ueding_Bericht.pdf
	$(RM) Martin_Ueding_Bericht.pyg
	$(RM) Martin_Ueding_Bericht.toc
	$(RM) README.html
	make clean -C Uebung_02
	make clean -C Uebung_03
	make clean -C Uebung_05
	make clean -C Uebung_06
	make clean -C Uebung_07
	make clean -C Uebung_08
	make clean -C Uebung_09
	make clean -C Uebung_10

# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

all: mathe.pdf
	make -C Uebung05_Zubehoer

mathe.pdf: mathe.tex
	pdflatex $^

clean:
	make clean -C Uebung05_Zubehoer
	$(RM) mathe.pdf
	$(RM) mathe.aux
	$(RM) mathe.log
	$(RM) mathe.out

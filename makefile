Bericht.pdf: Bericht.tex \
	Uebung_03/farben.sh.out Uebung_03/zahlen.sh.out Uebung_03/zahlen2.sh.out Uebung_03/zahlen_name.sh.out Uebung_02/wildcards/ls.sh.out Uebung_03/auto.sh.out Uebung_03/auto_einfach.sh.out Uebung_03/zahlen-sort.sh.out Uebung_03/namen.sh.out
	make -C Uebung_06/hello
	make -C Uebung_06/ethiopian
	make -C Uebung_06/heron
	pdflatex $<

%.sh.out: %.sh
	cd $$(dirname $<) && bash $$(basename $<) > $$(basename $@)

clean:
	$(RM) *.log *.aux *.toc Bericht.pdf *.out

Bericht.pdf: Bericht.tex ../Uebung_03/farben.sh.out ../Uebung_03/zahlen.sh.out ../Uebung_03/zahlen2.sh.out ../Uebung_03/zahlen_name.sh.out ../Uebung_02/wildcards/ls.sh.out
	pdflatex $<

%.sh.out: %.sh
	cd $$(dirname $<) && bash $$(basename $<) > $$(basename $@)

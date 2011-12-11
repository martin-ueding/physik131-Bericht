# Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

all: Consolidator Strings Student

.PHONY: Consolidator
Consolidator:
	mkdir -p Consolidator-build-desktop
	cd Consolidator-build-desktop && qmake ../Consolidator/*.pro
	make -C Consolidator-build-desktop

.PHONY: Strings
Strings:
	mkdir -p Strings-build-desktop
	cd Strings-build-desktop && qmake ../Strings/*.pro
	make -C Strings-build-desktop

.PHONY: Student
Student:
	mkdir -p Student-build-desktop
	cd Student-build-desktop && qmake ../Student/*.pro
	make -C Student-build-desktop

clean:
	$(RM) -r Consolidator-build-desktop
	$(RM) -r Strings-build-desktop
	$(RM) -r Student-build-desktop

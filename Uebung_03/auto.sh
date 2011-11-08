grep -E \
	'^([A-Z]{1}( [A-Z]{1,2}|-[AC-EHJ-NPR-Z]{1,2}) [0-9]{1,4})$
^([A-Z]{2}( [A-Z]{1,2}|-[AC-EHJ-NPR-Z]{1,2}) [0-9]{1,4})$
^([A-Z]{3}( [A-Z]{1}|-[AC-EHJ-NPR-Z]{1}) [0-9]{1,4})$
^([A-Z]{3}( [A-Z]{2}|-[AC-EHJ-NPR-Z]{2}) [0-9]{1,3})$' \
	Autokennzeichen.txt

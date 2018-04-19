t_ambas.pdf : data.txt data0.txt graf.py
	python graf.py

data.txt data0.txt : bw.cpp ci.cpp
	c++ bw.cpp -o bw
	./bw > data.txt

	c++ ci.cpp -o ci
	./ci > data0.txt

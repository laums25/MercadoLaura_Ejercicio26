factorial.dat : factorial.x clase26.dat
	./factorial.x

clase26.dat : clase26.x
	./clase26.x > clase26.dat

factorial.x : factorial.cpp
	c++ factorial.cpp -o factorial.x

clase26.x : clase26.cpp
	c++ clase26.cpp -o clase26.x

clean:
	rm -r *.x *.dat
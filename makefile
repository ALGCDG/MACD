MACD: main.o history.o
	g++ $^ -o MACD

%.o: %.cpp %.hpp
	g++ -c $<

clean:
	rm *.o MACD
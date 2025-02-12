# objects = main.o Control.o View.o CuMarket.o Filter.o Listing.o Price.o Tester.o Category.o
# testobjects = test.o Tester.o TestControl.o View.o CuMarket.o Filter.o Listing.o Price.o Category.o

# aa: $(objects)
# 	g++ -o aa $(objects)

# aatest: $(testobjects)
# 	g++ -o aatest $(testobjects)

# main.o: main.cc CuMarket.h
# 	g++ -c main.cc

# test.o: test.cc List.h
# 	g++ -c test.cc

# Control.o: Control.h Control.cc
# 	g++ -c Control.cc

# TestControl.o: TestControl.cc TestControl.h
# 	g++ -c TestControl.cc

# View.o: View.h View.cc
# 	g++ -c View.cc

# CuMarket.o: CuMarket.h CuMarket.cc
# 	g++ -c CuMarket.cc

# Listing.o: Listing.h Listing.cc
# 	g++ -c Listing.cc

# Filter.o: Filter.h Filter.cc
# 	g++ -c Filter.cc

# Price.o: Price.h Price.cc
# 	g++ -c Price.cc

# Tester.o: Tester.h Tester.cc
# 	g++ -c Tester.cc

# Category.o: Category.h Category.cc
# 	g++ -c Category.cc

# clean:
# 	rm aa aatest *.o

CXX = g++
CXXFLAGS = -std=c++11 -c

objects = main.o Control.o View.o CuMarket.o Filter.o Listing.o Price.o Tester.o Category.o
testobjects = test.o Tester.o TestControl.o View.o CuMarket.o Filter.o Listing.o Price.o Category.o

aa: $(objects)
	$(CXX) -o aa $(objects)

aatest: $(testobjects)
	$(CXX) -o aatest $(testobjects)

main.o: main.cc CuMarket.h
	$(CXX) $(CXXFLAGS) main.cc

test.o: test.cc List.h
	$(CXX) $(CXXFLAGS) test.cc

Control.o: Control.h Control.cc
	$(CXX) $(CXXFLAGS) Control.cc

TestControl.o: TestControl.cc TestControl.h
	$(CXX) $(CXXFLAGS) TestControl.cc

View.o: View.h View.cc
	$(CXX) $(CXXFLAGS) View.cc

CuMarket.o: CuMarket.h CuMarket.cc
	$(CXX) $(CXXFLAGS) CuMarket.cc

Listing.o: Listing.h Listing.cc
	$(CXX) $(CXXFLAGS) Listing.cc

Filter.o: Filter.h Filter.cc
	$(CXX) $(CXXFLAGS) Filter.cc

Price.o: Price.h Price.cc
	$(CXX) $(CXXFLAGS) Price.cc

Tester.o: Tester.h Tester.cc
	$(CXX) $(CXXFLAGS) Tester.cc

Category.o: Category.h Category.cc
	$(CXX) $(CXXFLAGS) Category.cc

clean:
	rm aa aatest *.o
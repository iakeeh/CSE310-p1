#Name: Ignatius Akeeh
#Class: CSE 310
#Project: 1
#MakeFile 

#target: dependency1 dependency2 ...
#	<tab> command

#NOTE: remember to add the TAB character before the command part

#Typing 'make' will invoke the first target entry in the file
encode: encode.cpp
	g++ encode.cpp -o encode


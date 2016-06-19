# Makefile for Calculator Project
# Author: Raj Prajapati
#------------------------------------------------

export CALCULATOR_BASE_DIR=$(shell pwd)

include $(CALCULATOR_BASE_DIR)/mkconfig

build:
	make -C src calci

clean:
	make -C src clean

doc:
	cp src/MainPage.dpt src/MainPage.c
	VER="$(grep app_version src/Version.cpp | grep -oP '"\K[^"\047]+(?=["\047])')"
	DATE="$(date +"%m-%d-%Y")"
	COMP="$($CXX -v 2>&1 | grep 'gcc version')"
	sed -i "s/%APP_VERSION%/$VER/" src/MainPage.c
	sed -i "s/%DATE%/$DATE/" src/MainPage.c
	sed -i "s/%COMPILER_VERSION%/$COMP/" src/MainPage.c
	doxygen doxycfg
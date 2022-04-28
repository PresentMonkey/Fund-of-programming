#!/bin/bash

mkdir -p build;

for Ass_Folder in Ass_*; do
	mkdir -p build/$Ass_Folder;
	for Ass in $Ass_Folder/*.cpp; do
		g++ $Ass -o build/$Ass;
	done
done


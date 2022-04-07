#!/bin/bash

mkdir build;

for Ass_Folder in Ass_*; do
	mkdir build/$Ass_Folder;
	for Ass in $Ass_Folder/*.cpp; do
		g++ $Ass -o build/$Ass;
	done
done


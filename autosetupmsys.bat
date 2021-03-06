@ECHO OFF

echo Compiling GLEW ...

cd Engine/ThirdParty/glew/auto && make 

cd .. 

make install

cd ../../../

echo Compiled GLEW!

echo Creating project file with default settings ...

echo name: Game > "uvproj.yaml"
echo startup-level: "lvl.yaml" >> "uvproj.yaml"
echo version: 1.0.0 >> "uvproj.yaml"
echo engine-version: 1.0.0 >> "uvproj.yaml"
echo startup-level-exists: false >> "uvproj.yaml"

echo Compiling build tool and generating files ...
mkdir Source && mkdir Generated && mkdir Exported && cd Config && mkdir Settings && cd ../
cd UVKBuildTool/ && mkdir build && cd build/ 
cmake .. -G "Unix Makefiles" && make && UVKBuildTool --install
cd ../../ && mkdir build && cd build && cmake .. && cd ..

echo name: Game > "uvproj.yaml"
echo startup-level: "lvl.yaml" >> "uvproj.yaml"
echo version: 1.0.0 >> "uvproj.yaml"
echo engine-version: 1.0.0 >> "uvproj.yaml"
echo startup-level-exists: true >> "uvproj.yaml"

cd build/

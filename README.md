# Cpp, Qt, Resources (.qrc) and cmake

Minimal UI application with Qt, Resources (qrc) and cmake

- Add the images in the resources directory.
- Create a `.qrc` file, listing all the images. The prefix defines the path to be used in source code.
- Reference the with a path starting with a colon and using the defined prefix.
- By default, the images will be included in the binaries.

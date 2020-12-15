# Example Bug of the VSCode CppTool extension in Remote SSH/Docker sessions

This example project uses the Remote Docker extension to simulate a remote system.
When the IntelliSense extension parses the C++ files it is expected that cache files are generated in `.vscode/vscode-cpptools/ipch`.
The bug is that only empty directories are created, no cache files!

## Issue
https://github.com/microsoft/vscode-cpptools/issues/6662

## Usage
1. Open in Remote Container
2. Open any C++ files
3. Look at Output > C/C++
4. Look at C/C++ Diagnostics (Ctrl+Shift+P >> C/C++: Diagnostics)
5. See that empty folders are generated in `.vscode/vscode-cpptools/ipch`
```bash
ls -la .vscode/vscode-cpptools/
ls -la .vscode/vscode-cpptools/ipch/*
```


# Dependencies Project

## Installing clang-format 

 Open the terminal.  
- Update the package list with the command:

```bash
sudo apt-get update
```

- Next, install clang-format with the command:

```bash
sudo apt-get install clang-format
```

- After the installation is complete, you can check the installed version with the following command:

```bash
clang-format --version
```

## Installing cmake

- Open the terminal.  
- Update the package list with the command:

```bash
sudo apt update
```

- Next, install cmake with the command:

```bash
sudo apt install cmake
```

- After the installation is complete, you can check the installed version with the following command:

```bash
clang-format --version
```


# Debug  and  build project

- Open the terminal inside this project
- Create a build folder with  the command:

```bash
mkdir cmake-debug
```

- To enter inside the cmake-debug  folder with  the command:

```bash
cd cmake-debug
```

- For build project  inside the cmake-debug  folder with  the command:

```bash
cmake ..
```

- For gerate binary project  inside the cmake-debug  folder with  the command:

```bash
make
```

- Execute  project with  the command:

```bash
./main
```

# visual studio code  configurations


## settings.json 

**for use this configuration in your vscode are you do need install clang-format**
-  linux exemple:

```json
//linux
{
  "editor.formatOnSave": true,
  "C_Cpp.clang_format_path": "/usr/bin/clang-format",
  "C_Cpp.clang_format_style": "Google"
}

```


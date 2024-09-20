# PalServer
A framework that allows users to generate plugins for Palworld dedicated Servers.

Currently only supported on Windows. If you have knowledge ho to treat it for Linux, please reach out to me.

## Dependencies
* [cmake v3.16 or higher](https://cmake.org/download/)
* An IDE supported by cmake, preferable [Visual Studio](https://visualstudio.microsoft.com)

## Building the .dll
1. Clone the repo
   ```cmd
   git clone https://github.com/Zvendson/PalworldServer.git
   ```
2. Locate the repo directory
   ```cmd
   cd PalworldServer
   ```
3. Run cmake
   ```cmd
   cmake -B build
   ```
4. **(Optional)** Open the project
   ```cmd
   cmake --open build
   ```
5. Build the dll withing the opened project or run following command:<br>
   Debug config:
   ```cmd
   cmake --build build
   ```
   Release config:
   ```cmd
   cmake --build build --config Release
   ```

## Credits
* [MinHook](https://github.com/TsudaKageyu/minhook)
* [version.dll Wrapper](https://github.com/SubstituteR/DllWrapper)
* [spdlog](https://github.com/gabime/spdlog)
* [nlohmann json](https://github.com/nlohmann/json)
* [Epic Games](https://github.com/EpicGames)
* [Ultimeit](https://github.com/Ultimeit)
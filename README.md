# PalManager
A framework that allows users to generate plugins for Palworld dedicated Servers.

Currently only supported on Windows. If you have knowledge how to treat it for Linux, please reach out to me.


**if you like this framwork, please consider supporting me on [Ko-Fi](https://ko-fi.com/zvend).<br>The more support I get, the more I can develop on it!**

## Credits
* [Epic Games](https://github.com/EpicGames)
* [MinHook](https://github.com/TsudaKageyu/minhook)
* [spdlog](https://github.com/gabime/spdlog)
* [nlohmann json](https://github.com/nlohmann/json)
* [version.dll Wrapper](https://github.com/SubstituteR/DllWrapper)
* [SDK Generator Dumper-7](https://github.com/Encryqed/Dumper-7)
* [Ultimeit](https://github.com/Ultimeit)



## Developing & Contributing

### Dependencies
* [cmake v3.16 or higher](https://cmake.org/download/)
* An IDE supported by cmake, preferable [Visual Studio](https://visualstudio.microsoft.com)

### Building the .dll
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

   ### Contributing
   \<Under Construction\>

   **I dont want to go into detail at this state of the API yet.**<br>
   If you want to contribute something, open a pull request without caring any special "rules".<br>
   Its in complete Alpha state so everything can change at this stage. Also means I am very open for special code designs.
MAMBO Building with android ndk-build
==============================================================
```sh
git clone https://github.com/amimo/mambo.git -b android-ndk-build
cd mambo
ndk-build NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk APP_PLATFORM=android-21 -j8
```

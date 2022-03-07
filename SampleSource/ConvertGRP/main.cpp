#include "main.hpp"

#include <string>

using namespace std;

int main()
{
    //string grp = "/home/andreas/Downloads/Games/DOS/Starcraft/Original_Backup/starcraft_install.exe_MPQ_stardat.mpq/game/icons.grp";
    //string grp = "/home/andreas/Downloads/Games/DOS/Starcraft/Original_Backup/starcraft_install.exe_MPQ_stardat.mpq/unit/terran/ghost.grp";
    string grp = "/home/andreas/Downloads/Games/DOS/Starcraft/Original_Backup/starcraft_install.exe_MPQ_stardat.mpq/dlgs/protoss.grp";
    //string grp = "/home/andreas/Downloads/Games/DOS/Starcraft/Original_Backup/starcraft_install.exe_MPQ_stardat.mpq/game/icons.grp";



    //string palette = "/home/andreas/src/git/stargus/tmp/tunit.pal";    
    string palette = "/home/andreas/src/git/libgrp/libgrp/Documentation/SampleContent/SamplePalette.pal";
    
 
    ColorPalette myGRPPallete;
    myGRPPallete.LoadPalette(palette);

    GRPImage myGRPImage(grp, false);
    myGRPImage.SetColorPalette(&myGRPPallete);
    
    myGRPImage.SaveConvertedImage("outputWithDuplicates.png", 0, myGRPImage.getNumberOfFrames(), true, 17);
    
    //myGRPImage.LoadImage(GRPIMAGEFILEPATH, true);
    //myGRPImage.SaveConvertedImage("outputWithOUTDuplicates.png", 0, myGRPImage.getNumberOfFrames(), false, 17);
    
    
    
    return 0;
}


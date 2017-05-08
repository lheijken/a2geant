{
gSystem->Load("libMatrix.so");
gSystem->Load("libRIO.so");
gSystem->Load("libHist.so");
gSystem->Load("libEG");
gSystem->Load("libPhysics");
gSystem->Load("libTree");
gSystem->Load("$PLUTOSYS/libPluto.so");
gSystem->SetIncludePath(" -I$PLUTOSYS/src ");
}

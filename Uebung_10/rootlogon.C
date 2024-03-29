{
cout << endl << "Welcome to my rootlogon.C" << endl;
cout << "For approved plots use: gROOT->SetStyle(\"BABAR\");"
<< endl << endl;

//..BABAR style from RooLogon.C in workdir
TStyle *babarStyle= new TStyle("BABAR","BaBar approved plots style");
gROOT->SetStyle("Plain");
// use plain black on white colors
babarStyle->SetFrameBorderMode(0);
babarStyle->SetCanvasBorderMode(0);
babarStyle->SetPadBorderMode(0);
babarStyle->SetPadColor(0);
babarStyle->SetCanvasColor(0);
babarStyle->SetStatColor(0);
babarStyle->SetFillColor(0);

// set the paper & margin sizes
babarStyle->SetPaperSize(20,26);
babarStyle->SetPadTopMargin(0.02);
babarStyle->SetPadRightMargin(0.05);
babarStyle->SetPadBottomMargin(0.14);
babarStyle->SetPadLeftMargin(0.14);

// use large Times-Roman fonts
babarStyle->SetTextFont(132);
babarStyle->SetTextSize(0.08);
babarStyle->SetLabelFont(132,"x");
babarStyle->SetLabelFont(132,"y");
babarStyle->SetLabelFont(132,"z");
babarStyle->SetTitleFont(132,"x");
babarStyle->SetTitleFont(132,"y");
babarStyle->SetTitleFont(132,"z");
babarStyle->SetLabelSize(0.06,"x");
babarStyle->SetTitleSize(0.08,"x");
babarStyle->SetLabelSize(0.06,"y");
babarStyle->SetTitleSize(0.08,"y");
babarStyle->SetLabelSize(0.06,"z");
babarStyle->SetTitleSize(0.08,"z");
babarStyle->SetTitleOffset(0.8,"x");
babarStyle->SetTitleOffset(0.9,"y");

// use bold lines and markers
babarStyle->SetMarkerStyle(20);
babarStyle->SetHistLineWidth(1.85);
babarStyle->SetLineStyleString(2,"[12 12]"); // postscript dashes

// get rid of X error bars and y error bar caps
babarStyle->SetErrorX(0.001);

// do not display any of the standard histogram decorations
babarStyle->SetOptTitle(0);
babarStyle->SetOptStat(0);
babarStyle->SetOptFit(0);

// put tick marks on top and RHS of plots
//babarStyle->SetPadTickX(1);
//babarStyle->SetPadTickY(1);

gROOT->SetStyle("Plain");
 gStyle->SetPalette(1);

gStyle->SetOptStat(1111111);
//gStyle->SetPadTickX(1);
//gStyle->SetPadTickY(1);
}

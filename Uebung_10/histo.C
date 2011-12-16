{
	TCanvas* c1 = new TCanvas("c1","mein canvas",800,500);
	TH1F* h1 = new TH1F(‘‘h1’’,’’mein histo’’,10,0,10);
	h1->Fill(3.2);
	h1->Fill(7);
	h1->Fill(3.6);
	h1->Fill(4.2);
	h1->SetXTitle(‘‘x’’);
	h1->SetYTitle(‘‘Anzahl’’);
	h1->Draw();
}

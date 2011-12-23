{
	TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);
	c1->cd(1);
	TGraphErrors *tge = new TGraphErrors("data_fehler_bericht_.dat");
	tge->Draw("ap");
	tge->Fit("pol1");
	tge->GetXaxis()->SetTitle("Spannung/[V]");
	tge->GetYaxis()->SetTitle("Strom/[A]");
	c1->Update();
	c1->Print("histogram.pdf");
}

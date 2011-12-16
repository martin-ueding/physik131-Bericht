{
	TGraphErrors *tge = new TGraphErrors("data_fehler_bericht_.dat");
	tge->Draw("ap");
	tge->Fit("pol1");
}

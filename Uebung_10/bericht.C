// Copyright (c) 2011 Martin Ueding <dev@martin-ueding.de>

{
	TGraphErrors *tge = new TGraphErrors("data_fehler_bericht_.dat");
	tge->Draw("ap");
	tge->Fit("pol1");
}

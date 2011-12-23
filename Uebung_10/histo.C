/**
 * Creates a histogram with given data.
 */
{
	// Create a new canvas.
	TCanvas *c1 = new TCanvas("c1", "mein canvas", 800, 500);

	// Create a new histogram.
	TH1F *h1 = new TH1F("h1", "mein histo", 10, 0, 10);

	// Fill the latter with data.
	h1->Fill(3.2);
	h1->Fill(7);
	h1->Fill(3.6);
	h1->Fill(4.2);

	// Label the axes.
	h1->SetXTitle("x");
	h1->SetYTitle("Anzahl");

	// Draw it.
	h1->Draw();
}

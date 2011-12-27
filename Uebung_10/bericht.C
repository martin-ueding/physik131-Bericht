/**
 * ROOT macro to parse voltage and current.
 */
{
	// Generate a new Canvas element with the given size.
	TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);

	// Change to the first part of this.
	c1->cd(1);

	// Create a new graph with error bars from the data file.
	TGraphErrors *tge = new TGraphErrors("../Finale/data_abschlussbericht.dat");

	// Draw the graph with axes and points.
	tge->Draw("ap");

	// Apply a linear fit, first order polynomial.
	tge->Fit("pol1");

	// Label the axes.
	tge->GetXaxis()->SetTitle("Spannung/[V]");
	tge->GetYaxis()->SetTitle("Strom/[A]");

	// Update the canvas to accommodate the changes of the plot.
	c1->Update();

	// Save the whole canvas to a PDF file.
	c1->Print("histogram.pdf");
}

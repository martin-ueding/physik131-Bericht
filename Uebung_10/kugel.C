{
	// Create an empty image.
	TCanvas *c1 = new TCanvas("c1", "c1",30,113,800,600);
	c1->Range(-6.200942,-66.29705,56.27944,587.529);
	c1->SetBorderSize(2);
	c1->SetFrameFillColor(0);

	// Plot the linear acceleration function as a reference. Since it grows the
	// most, it should be set first, in order to get the axes right.
	TF1 *f5 = new TF1("f5","10*x",0,50);
	f5->SetTitle("Kugel");
	f5->SetFillColor(19);
	f5->SetFillStyle(0);
	f5->SetLineWidth(1);

	// Label the axes.
	f5->GetXaxis()->SetTitle("Zeit/[s]");
	f5->GetYaxis()->SetTitle("Geschwindigkeit/[m/s]");
	f5->Draw("");

	// Now draw a=0.1, m=0.5.
	TF1 *f1 = new TF1("f1","0.5*10/0.1*(1-exp(-0.1*x/0.5))",0,50);
	f1->SetFillColor(19);
	f1->SetFillStyle(0);
	f1->SetLineColor(2);
	f1->SetLineWidth(2);
	f1->Draw("same");

	// Now draw a=0.1, m=1.5.
	TF1 *f2 = new TF1("f2","1.5*10/0.1*(1-exp(-0.1*x/1.5))",0,50);
	f2->SetFillColor(19);
	f2->SetFillStyle(0);
	f2->SetLineColor(4);
	f2->SetLineWidth(2);
	f2->Draw("same");

	// Now draw a=0.2, m=0.5.
	TF1 *f3 = new TF1("f3","0.5*10/0.2*(1-exp(-0.2*x/0.5))",0,50);
	f3->SetFillColor(19);
	f3->SetFillStyle(0);
	f3->SetLineColor(2);
	f3->SetLineWidth(3);
	f3->Draw("same");

	// Now draw a=0.2, m=1.5.
	TF1 *f4 = new TF1("f4","1.5*10/0.2*(1-exp(-0.2*x/1.5))",0,50);
	f4->SetFillColor(19);
	f4->SetFillStyle(0);
	f4->SetLineColor(4);
	f4->SetLineWidth(3);
	f4->Draw("same");

	// Fix the text in the top corner.
	TPaveText *pt = new TPaveText(0.02638191,0.9265734,0.1167337,0.9772727,"blNDC");
	pt->SetName("title");
	pt->SetBorderSize(2);
	pt->SetTextSize(0.02447552);
	TText *text = pt->AddText("Kugel");
	pt->Draw();
	c1->Modified();
	c1->cd();
	c1->SetSelected(c1);

	c1->Update();
	c1->Print("kugel.pdf");
}

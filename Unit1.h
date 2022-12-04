//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit1;
	TEdit *Edit2;
	TComboBox *Liste_A01;
	TComboBox *Liste_A02;
	TComboBox *Liste_A03;
	TComboBox *Liste_A04;
	TPanel *A01;
	TPanel *A02;
	TPanel *A03;
	TPanel *A04;
	TBitBtn *BitBtn1;
	TLabel *Label5;
	TLabel *Label6;
	void __fastcall Liste_A01Change(TObject *Sender);
	void __fastcall Liste_A02Change(TObject *Sender);
	void __fastcall Liste_A03Change(TObject *Sender);
	void __fastcall Liste_A04Change(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

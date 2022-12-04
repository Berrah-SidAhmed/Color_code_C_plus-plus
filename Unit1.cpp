//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
const unsigned long Colors[]={0x000000,0x3A5685,0x0000D2,0x0070DF,0x00F4F4,
                              0x00BB00,0xD50000,0x930093,0x606060,0xFFFFFF};
const unsigned long Colors2[]={0x009393,0xA8A8A8};
class TResistor{
private:
		float V;
public:
int a1;
int a2;
int m;
int h;
float p;
float setV(){
   V = (a1*10+a2)*m;
   return V;
};
};
TForm1 *Form1;
TResistor R;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Liste_A01Change(TObject *Sender)
{
A01->Color = (TColor) Colors[Liste_A01->ItemIndex];
R.a1=Liste_A01->ItemIndex;
Edit1->Text = R.setV();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Liste_A02Change(TObject *Sender)
{
A02->Color = (TColor) Colors[Liste_A02->ItemIndex];
R.a2=Liste_A02->ItemIndex;
Edit1->Text = R.setV();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Liste_A03Change(TObject *Sender)
{
A03->Color = (TColor) Colors[Liste_A03->ItemIndex];
R.m=1;
for (int i=0; i<Liste_A03->ItemIndex; i++) R.m*=10;
Edit1->Text = R.setV();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Liste_A04Change(TObject *Sender)
{
A04->Color = (TColor) Colors2[Liste_A04->ItemIndex];
R.p=Liste_A04->ItemIndex;
switch (Liste_A04->ItemIndex){
        case 0 : R.p = 5; break;
        case 1 : R.p = 10; break;
        }
Edit2->Text = FormatFloat("#0", R.p) + "%";
}
//---------------------------------------------------------------------------

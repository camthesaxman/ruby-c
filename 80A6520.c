int __fastcall sub_80A6520(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    BuyMenuPrintItemQuantityAndPrice(v1);
  }
  return v3;
}

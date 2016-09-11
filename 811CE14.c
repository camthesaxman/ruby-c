int __fastcall sub_811CE14(int a1)
{
  int v1; // r4@1

  v1 = a1;
  v200C000 = 0;
  if ( v200C020 > 7 )
  {
    BlendPalettes(0xFFFFFFFF, 0x10u, 0x7FFF);
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}

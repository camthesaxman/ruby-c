int __fastcall sub_811CE4C(int a1)
{
  int v1; // r6@1

  v1 = a1;
  v200C000 = 0;
  v40000BA &= 0xC5FFu;
  v40000BA &= 0x7FFFu;
  SetVBlankCallback(0);
  SetHBlankCallback(0);
  v200C006 = 240;
  v200C012 = 0;
  v200C00E = 255;
  v200C002 = 63;
  SetVBlankCallback((int)sub_811CF74);
  ++*(_WORD *)(v1 + 8);
  return 0;
}

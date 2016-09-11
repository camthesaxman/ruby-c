int __fastcall sub_8051AC8(_WORD *a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h]@0

  if ( !*a1 )
    *a1 = (unsigned __int16)Random() % (unsigned __int16)a2 - ((unsigned int)(a2 << 16) >> 17);
  return v3;
}

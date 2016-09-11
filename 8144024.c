int __fastcall sub_8144024(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_81452D0(14336, 0);
    BeginNormalPaletteFade(-1, 0, 0, 0, 0);
    v2 = &dword_3004B20[10 * v1];
    *((_WORD *)v2 + 4) = 7200;
    *v2 = (int)sub_8144080;
  }
  return v4;
}

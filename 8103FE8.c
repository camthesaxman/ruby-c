int __fastcall sub_8103FE8(unsigned __int8 a1)
{
  int *v1; // r2@1
  __int16 v2; // r0@1
  __int16 v3; // r1@2
  __int16 v4; // r3@2
  int v6; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 5) - 1;
  *((_WORD *)v1 + 5) = v2;
  if ( v2 == -1 )
  {
    *((_WORD *)v1 + 5) = 4;
    v3 = *((_WORD *)v1 + 7);
    v4 = *((_WORD *)v1 + 6);
    *((_WORD *)v1 + 6) = v3 + v4;
    if ( !(v3 + v4) || (signed __int16)(v3 + v4) == 2 )
      *((_WORD *)v1 + 7) = -v3;
  }
  LoadPalette((int)*(&gUnknown_083EDDA0 + *((_WORD *)v1 + 6)), 16, 32);
  return v6;
}

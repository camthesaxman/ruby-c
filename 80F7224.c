int __fastcall sub_80F7224(unsigned __int8 a1, int a2, int a3)
{
  unsigned int v3; // r2@1
  unsigned int v4; // r0@2
  int v6; // [sp+4h] [bp-4h]@0

  v3 = (unsigned __int8)GetMonData((int)&dword_3004360[25 * a1], 48, a3);
  if ( v3 == 255 )
    LOBYTE(v4) = 9;
  else
    v4 = v3 / 0x1D;
  *(_BYTE *)(v2008FE9 + 0x2008931) = v4;
  return v6;
}

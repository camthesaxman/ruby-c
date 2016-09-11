int __fastcall sub_80F98A4(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 0x20388C0);
  if ( v2 != 255 && v1 <= 3 )
    dword_2020020[17 * v2] = (int)SpriteCallbackDummy;
  return v4;
}

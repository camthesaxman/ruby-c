int __fastcall sub_80A4A98(_BYTE *a1, int a2)
{
  _BYTE *v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-70h]@3
  int v6; // [sp+6Ch] [bp-4h]@5

  v2 = a1;
  v3 = a2;
  if ( !a2 )
    MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
  if ( sub_80A4A54(&v5, v2, v3) )
    sub_80729D8((int)&v5, 4, (unsigned int)((v3 << 20) + 6815744) >> 16, 0);
  return v6;
}

int __fastcall sub_80C7FB8(unsigned __int8 a1, __int16 a2)
{
  unsigned __int8 v2; // r3@1
  int v3; // r0@1
  char *v4; // r4@2
  int v6; // [sp+4h] [bp-4h]@0

  v2 = a1;
  v3 = *(_BYTE *)(a1 + 0x20387F0);
  if ( v3 != 64 )
  {
    v4 = &gSprites[68 * v3];
    *((_WORD *)v4 + 24) = a2;
    *((_WORD *)v4 + 25) = sub_80C7A08(v2);
  }
  return v6;
}

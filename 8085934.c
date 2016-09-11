int __fastcall FieldEffectActiveListAdd(char a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = 0;
  while ( (unsigned __int8)byte_30006E0[v1] != 255 )
  {
    v1 = (v1 + 1) & 0xFF;
    if ( v1 > 0x1F )
      return v3;
  }
  byte_30006E0[v1] = a1;
  return v3;
}

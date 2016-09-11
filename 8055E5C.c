int __fastcall sub_8055E5C(unsigned __int8 a1)
{
  __int16 v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r0@2
  char *v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * *(_BYTE *)(4 * a1 + 0x202981A)];
  if ( *(_BYTE *)(4 * a1 + 0x2029818) )
  {
    v3 = sub_805983C(0, (unsigned int)*(_BYTE *)v2 << 30 >> 31);
    *((_BYTE *)v2 + 4) = AddPseudoFieldObject(v3, sub_8055ED8);
    v4 = &gSprites[68 * *((_BYTE *)v2 + 4)];
    v4[62] |= 2u;
    *((_WORD *)v4 + 23) = v1;
    *(_BYTE *)v2 &= 0xFBu;
  }
  return v6;
}

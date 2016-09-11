int __fastcall sub_8127A7C(int a1)
{
  int v1; // r4@1
  int *v2; // r1@2
  int v3; // r0@4
  char *v4; // r1@4
  unsigned __int8 v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-4h]@5

  v1 = a1;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(
           *(_BYTE *)(a1 + 46),
           *(_WORD *)(v1 + 48) & 0xFF,
           *(_WORD *)(v1 + 50) & 0xFF,
           &v6) << 24)
    && (v2 = &dword_30048A0[9 * v6], *((_BYTE *)v2 + 2) & 0x20) )
  {
    v3 = GetFieldObjectGraphicsInfo(*((_BYTE *)v2 + 5));
    v4 = &gSprites[68 * LOBYTE(dword_30048A0[9 * v6 + 1])];
    *(_WORD *)(v1 + 32) = *((_WORD *)v4 + 16);
    *(_WORD *)(v1 + 34) = (*(_WORD *)(v3 + 10) << 16 >> 17) + *((_WORD *)v4 + 17) - 8;
    *(_BYTE *)(v1 + 67) = v4[67] - 1;
    sub_806487C(v1, 0);
  }
  else
  {
    FieldEffectStop(v1, 0x2Au);
  }
  return v7;
}

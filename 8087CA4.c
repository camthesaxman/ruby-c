int __fastcall sub_8087CA4(int a1)
{
  int v1; // r4@1
  int *v2; // r3@1
  char *v3; // r5@1
  int v4; // r0@1
  __int16 v5; // r1@3
  int v6; // r0@3
  int v8; // [sp+0h] [bp-14h]@1
  int v9; // [sp+10h] [bp-4h]@11

  v1 = a1;
  memcpy(&v8, &gUnknown_0839F380, 5);
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = &gSprites[68 * v202E85C];
  v4 = *(_WORD *)(v1 + 10) - 1;
  *(_WORD *)(v1 + 10) = v4;
  if ( v4 << 16 <= 0 )
  {
    *(_WORD *)(v1 + 10) = 4;
    FieldObjectTurn((int)v2, *((_BYTE *)&v8 + (*((_BYTE *)v2 + 24) & 0xF)));
  }
  *((_WORD *)v3 + 17) -= *(_WORD *)(v1 + 14);
  v5 = *(_WORD *)(v1 + 14);
  *(_WORD *)(v1 + 16) += v5;
  v6 = *(_WORD *)(v1 + 12) - 1;
  *(_WORD *)(v1 + 12) = v6;
  if ( v6 << 16 <= 0 )
  {
    *(_WORD *)(v1 + 12) = 4;
    if ( v5 <= 7 )
      *(_WORD *)(v1 + 14) = 2 * v5;
  }
  if ( (signed int)*(_WORD *)(v1 + 16) > 8 )
  {
    v3[5] = v3[5] & 0xF3 | 4;
    if ( v3[66] & 0xC0 )
      v3[66] = v3[66] & 0x3F | 0x80;
  }
  if ( (signed int)*(_WORD *)(v1 + 16) > 167 )
  {
    ++*(_WORD *)(v1 + 8);
    sub_8053FF8();
    sub_8080918();
  }
  return v9;
}

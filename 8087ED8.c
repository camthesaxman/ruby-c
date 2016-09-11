int __fastcall sub_8087ED8(int a1)
{
  int v1; // r4@1
  int *v2; // r6@1
  char *v3; // r5@1
  __int16 v4; // r0@1
  __int16 v5; // r1@2
  int v6; // r0@10
  int v8; // [sp+0h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-4h]@14

  v1 = a1;
  memcpy(&v8, &gUnknown_0839F380, 5);
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = &gSprites[68 * v202E85C];
  v4 = *(_WORD *)(v1 + 10) + *((_WORD *)v3 + 19);
  *((_WORD *)v3 + 19) = v4;
  if ( v4 < -8 )
  {
    v3[5] = v3[5] & 0xF3 | 4;
    if ( v3[66] & 0xC0 )
      v3[66] = v3[66] & 0x3F | 0x80;
  }
  else
  {
    v5 = *(_WORD *)(v1 + 34);
    if ( !*(_WORD *)(v1 + 34) )
    {
      *(_WORD *)(v1 + 34) = 1;
      *(_BYTE *)v2 |= 4u;
      v3[66] = v3[66] & 0x3F | ((unsigned __int8)*(_WORD *)(v1 + 36) << 6);
    }
  }
  if ( (signed int)*((_WORD *)v3 + 19) >= -48 && (signed int)*(_WORD *)(v1 + 10) > 1 && !(*((_WORD *)v3 + 19) & 1) )
    --*(_WORD *)(v1 + 10);
  v6 = *(_WORD *)(v1 + 12) - 1;
  *(_WORD *)(v1 + 12) = v6;
  if ( !(v6 << 16) )
  {
    *(_WORD *)(v1 + 12) = 4;
    FieldObjectTurn((int)v2, *((_BYTE *)&v8 + (*((_BYTE *)v2 + 24) & 0xF)));
  }
  if ( (signed int)*((_WORD *)v3 + 19) >= 0 )
  {
    *((_WORD *)v3 + 19) = 0;
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 10) = 1;
    *(_WORD *)(v1 + 12) = 0;
  }
  return v9;
}

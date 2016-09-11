int __fastcall sub_81060FC(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  __int16 v3; // r0@8
  __int16 v4; // r0@10
  int v5; // r1@10
  __int16 v6; // r0@11
  __int16 v7; // r0@15
  int v8; // r1@15
  __int16 v9; // r0@16
  int v11; // [sp+0h] [bp-40h]@1
  char v12[16]; // [sp+10h] [bp-30h]@1
  char v13; // [sp+20h] [bp-20h]@1
  int v14; // [sp+3Ch] [bp-4h]@22

  v1 = a1;
  memcpy(&v11, (const char *)&gUnknown_083ECC72, 16);
  memcpy(v12, (const char *)&gUnknown_083ECC82, 16);
  memcpy(&v13, (const char *)&gUnknown_083ECC92, 16);
  v2 = *(_WORD *)(v1 + 46);
  if ( v2 == 1 )
    goto _08106174;
  if ( v2 <= 1 )
  {
    if ( *(_WORD *)(v1 + 46) )
      return v14;
    *(_WORD *)(v1 + 36) = *((_WORD *)&v11 + *(_WORD *)(v1 + 58));
    *(_WORD *)(v1 + 38) = *(_WORD *)&v12[2 * *(_WORD *)(v1 + 58)];
    *(_WORD *)(v1 + 48) = *((_WORD *)&v13 + *(_WORD *)(v1 + 58));
    ++*(_WORD *)(v1 + 46);
_08106174:
    v3 = *(_WORD *)(v1 + 48) - 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 == -1 )
      goto _081061BA;
    return v14;
  }
  if ( v2 != 2 )
    return v14;
  v4 = *(_WORD *)(v1 + 36);
  v5 = *(_WORD *)(v1 + 36);
  if ( v5 <= 0 )
  {
    if ( v5 >= 0 )
      goto _0810619E;
    v6 = v4 + 4;
  }
  else
  {
    v6 = v4 - 4;
  }
  *(_WORD *)(v1 + 36) = v6;
_0810619E:
  v7 = *(_WORD *)(v1 + 38);
  v8 = *(_WORD *)(v1 + 38);
  if ( v8 <= 0 )
  {
    if ( v8 >= 0 )
      goto _081061B4;
    v9 = v7 + 4;
  }
  else
  {
    v9 = v7 - 4;
  }
  *(_WORD *)(v1 + 38) = v9;
_081061B4:
  if ( !*(_DWORD *)(v1 + 36) )
_081061BA:
    ++*(_WORD *)(v1 + 46);
  return v14;
}

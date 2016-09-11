int __fastcall sub_80328A4(int a1)
{
  int v1; // r5@1
  char v2; // r8@1
  int v3; // r4@1
  char *v4; // r7@1
  int v5; // r4@6
  int v6; // r2@7
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = *(_WORD *)(a1 + 46) & 0xFF;
  v4 = &gSprites[68 * *(_BYTE *)(v3 + 0x2024BE0)];
  if ( v4[62] & 1 && sub_8078874(v3) << 24 )
  {
    if ( v202F7B1 || v4[62] & 4 )
    {
      v2 = 1;
      v5 = 4 * v3;
    }
    else
    {
      v6 = *(_WORD *)(4 * v3 + 0x2017802);
      v5 = 4 * v3;
      if ( v6 && !gEnemyMonElevation[v6] )
        v2 = 1;
    }
    if ( *(_BYTE *)(v5 + 33650688) & 4 )
      v2 = 1;
    *(_WORD *)(v1 + 32) = *((_WORD *)v4 + 16);
    *(_WORD *)(v1 + 36) = *((_WORD *)v4 + 18);
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * v2;
  }
  else
  {
    *(_DWORD *)(v1 + 28) = sub_8032978;
  }
  return v8;
}

int __fastcall sub_8102F4C(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  unsigned __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-20h]@1

  v1 = a1;
  memcpy(&v5, (const char *)&gUnknown_083ECB58, 10);
  v2 = *(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x200001C) % 24 & 0xFFFF;
  if ( *(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x200001C) % 24 << 16 )
  {
    v3 = sub_8102CCC(*(_BYTE *)(v1 + 38), v200001A);
_08102FC8:
    v2 = v3;
    goto _08102FCC;
  }
  if ( *(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x200002E) )
  {
    --*(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x200002E);
    sub_8102C84(*(_WORD *)(v1 + 38) & 0xFF, v200001A);
    v3 = *(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x200001C) % 24;
    goto _08102FC8;
  }
_08102FCC:
  if ( !v2 && !*(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x200002E) )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 10) = *((_WORD *)&v5 + *(_WORD *)(v1 + 10));
    *(_WORD *)(v1 + 12) = 0;
  }
  return 0;
}

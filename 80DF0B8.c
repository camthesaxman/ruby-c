int __fastcall sub_80DF0B8(int a1)
{
  int v1; // r4@1
  int v2; // r1@3
  __int16 v3; // r0@3
  int v4; // r1@6
  unsigned int v5; // r3@6
  int v6; // r2@8
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), 12);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    *(_WORD *)(v1 + 36) = -*(_WORD *)(v1 + 36);
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 46) + 6) & 0xFF;
  v2 = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = v2 + 256;
  *(_WORD *)(v1 + 38) = -((v2 + 256) << 16 >> 24);
  v3 = *(_WORD *)(v1 + 60) + 1;
  *(_WORD *)(v1 + 60) = v3;
  if ( v3 == 1 )
  {
    *(_WORD *)(v1 + 58) = 1291;
    v4000050 = 16192;
    v4000052 = *(_WORD *)(v1 + 58);
  }
  else if ( v3 > 30 )
  {
    ++*(_WORD *)(v1 + 50);
    v4 = *(_WORD *)(v1 + 58);
    v5 = (unsigned int)((v4 << 16 >> 24 << 16) + 0x10000) >> 16;
    if ( v5 > 0x10 )
      v5 = 16;
    v6 = ((unsigned __int8)v4 - 1) & 0xFFFF;
    if ( ((unsigned __int8)v4 - 1) & 0x8000 )
      v6 = 0;
    v4000052 = ((_WORD)v5 << 8) | v6;
    *(_WORD *)(v1 + 58) = v4000052;
    if ( v5 == 16 && !v6 )
    {
      *(_BYTE *)(v1 + 62) |= 4u;
      *(_DWORD *)(v1 + 28) = sub_80DF18C;
    }
  }
  return v8;
}

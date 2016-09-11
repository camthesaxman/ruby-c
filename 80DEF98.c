int __fastcall sub_80DEF98(int a1)
{
  int v1; // r3@1
  signed __int16 v2; // r0@2
  int v3; // r1@3
  __int16 v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) > 0 )
  {
    v2 = *(_WORD *)(a1 + 46) - 1;
_080DF00E:
    *(_WORD *)(v1 + 46) = v2;
    return v6;
  }
  v3 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 36);
  *(_WORD *)(a1 + 36) = v3;
  if ( ((v3 + 7) & 0xFFFFu) > 0xE )
  {
    *(_WORD *)(a1 + 32) += v3;
    *(_WORD *)(a1 + 36) = 0;
    *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | ((*(_WORD *)(a1 + 4) & 0x3FF) + 8) & 0x3FF;
    v4 = *(_WORD *)(a1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v4;
    if ( v4 != 3 )
    {
      v2 = 40;
      goto _080DF00E;
    }
    *(_WORD *)(v1 + 46) = 30;
    *(_DWORD *)(v1 + 28) = sub_80782D8;
    oamt_set_x3A_32(v1, (int)sub_80DF018);
  }
  return v6;
}

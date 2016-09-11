int __fastcall sub_80CE670(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@5
  __int16 v3; // r0@6
  __int16 v4; // r4@6
  signed int v5; // r1@6
  signed int v6; // r0@6
  __int16 v7; // r0@8
  __int16 v8; // r0@10
  __int16 v9; // r4@10
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B04 <= 1 )
    word_3004B04 = 2;
  if ( word_3004B04 > 127 )
    word_3004B04 = 127;
  *(_WORD *)(a1 + 46) = 0;
  *(_WORD *)(a1 + 48) = word_3004B04;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B00[0];
  v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + word_3004B02;
  *(_WORD *)(v1 + 34) = v2;
  *(_WORD *)(v1 + 58) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 60) = v2;
  if ( sub_8076BE0() << 24 )
  {
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x10;
    v3 = *(_WORD *)(v1 + 32) + 40;
    *(_WORD *)(v1 + 32) = v3;
    v4 = *(_WORD *)(v1 + 34) + 20;
    *(_WORD *)(v1 + 34) = v4;
    *(_WORD *)(v1 + 50) = v3 << 7;
    v5 = *(_WORD *)(v1 + 48);
    v6 = -5120;
  }
  else
  {
    if ( battle_side_get_owner(v202F7C8) << 24 )
    {
      v8 = *(_WORD *)(v1 + 32) + 40;
      *(_WORD *)(v1 + 32) = v8;
      v9 = *(_WORD *)(v1 + 34) - 20;
      *(_WORD *)(v1 + 34) = v9;
      *(_WORD *)(v1 + 50) = v8 << 7;
      *(_WORD *)(v1 + 52) = -5120 / *(_WORD *)(v1 + 48);
      *(_WORD *)(v1 + 54) = v9 << 7;
      *(_WORD *)(v1 + 56) = 2560 / *(_WORD *)(v1 + 48);
      *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x30;
      goto _080CE784;
    }
    v7 = *(_WORD *)(v1 + 32) - 40;
    *(_WORD *)(v1 + 32) = v7;
    v4 = *(_WORD *)(v1 + 34) + 20;
    *(_WORD *)(v1 + 34) = v4;
    *(_WORD *)(v1 + 50) = v7 << 7;
    v5 = *(_WORD *)(v1 + 48);
    v6 = 5120;
  }
  *(_WORD *)(v1 + 52) = v6 / v5;
  *(_WORD *)(v1 + 54) = v4 << 7;
  *(_WORD *)(v1 + 56) = -2560 / *(_WORD *)(v1 + 48);
_080CE784:
  *(_DWORD *)(v1 + 28) = sub_80CE798;
  return v11;
}

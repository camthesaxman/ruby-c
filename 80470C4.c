int __fastcall sub_80470C4(int a1)
{
  int v1; // r5@1
  __int16 v2; // r7@3
  __int16 v3; // r4@4
  int v4; // r0@4
  int v5; // r1@4
  __int16 v6; // r7@8
  int v7; // r0@10
  int v8; // r4@12
  int (__fastcall *v9)(int); // r0@13
  int v11; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( ((((unsigned int)*(_WORD *)(a1 + 60) >> 8) - 35) & 0xFFFF) > 0x2C )
  {
    if ( sub_8078718(a1) << 24 )
    {
      *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
      *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
      *(_WORD *)(v1 + 38) = 0;
      *(_WORD *)(v1 + 36) = 0;
      v7 = *(_BYTE *)(v1 + 6);
      *(_WORD *)(v1 + 58) = v7;
      *(_WORD *)(v1 + 46) = 0;
      if ( battle_type_is_double(v7) << 24
        && v2017849 & 1
        && (v8 = *(_WORD *)(v1 + 58), v8 == (unsigned __int8)battle_get_side_with_given_state(2)) )
      {
        v9 = (int (__fastcall *)(int))sub_8047230;
      }
      else
      {
        v9 = sub_8046C78;
      }
      *(_DWORD *)(v1 + 28) = v9;
      StartSpriteAffineAnim(v1, 0);
    }
  }
  else
  {
    if ( !(*(_WORD *)(a1 + 6) & 0xFF00) )
    {
      v2 = *(_WORD *)(a1 + 50) & 1;
      *(_WORD *)(a1 + 48) = *(_WORD *)(a1 + 48) & 1 | *(_WORD *)(a1 + 48) / 3 & 0xFFFE;
      *(_WORD *)(a1 + 50) = v2 | *(_WORD *)(a1 + 50) / 3 & 0xFFFE;
      StartSpriteAffineAnim(a1, 4);
    }
    v3 = *(_WORD *)(v1 + 46);
    sub_8078B5C(v1);
    v4 = *(_WORD *)(v1 + 60) + *(_WORD *)(v1 + 58) / 3;
    *(_WORD *)(v1 + 60) = v4;
    *(_WORD *)(v1 + 38) += sine((v4 << 16 >> 24) & 0xFF, *(_WORD *)(v1 + 56));
    v5 = *(_WORD *)(v1 + 6);
    *(_WORD *)(v1 + 6) = v5 + 256;
    if ( ((unsigned int)((v5 + 256) << 16) >> 24) % 3 << 16 )
      *(_WORD *)(v1 + 46) = v3;
    else
      *(_WORD *)(v1 + 46) = v3 - 1;
    if ( (signed int)((unsigned int)*(_WORD *)(v1 + 60) >> 8) > 79 )
    {
      v6 = *(_WORD *)(v1 + 50) & 1;
      *(_WORD *)(v1 + 48) = 3 * *(_WORD *)(v1 + 48) & 0xFFFE | *(_WORD *)(v1 + 48) & 1;
      *(_WORD *)(v1 + 50) = 3 * *(_WORD *)(v1 + 50) & 0xFFFE | v6;
    }
  }
  return v11;
}

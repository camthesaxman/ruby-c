int __fastcall sub_80CC6CC(int a1)
{
  int v1; // r6@1
  unsigned __int8 *v2; // r4@4
  __int16 v3; // r5@6
  int v4; // r2@6
  __int16 v5; // r4@9
  __int16 v6; // r5@9
  int v7; // r4@9
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B08 )
  {
    if ( word_3004B00[0] )
      v2 = (unsigned __int8 *)33748937;
    else
      v2 = (unsigned __int8 *)33748936;
    v3 = (unsigned __int8)sub_8077ABC(*v2, 2u);
    v4 = (unsigned __int8)sub_8077ABC(*v2, 3u);
    *(_WORD *)(v1 + 46) = word_3004B08;
    if ( word_3004B02 )
    {
      *(_WORD *)(v1 + 32) = v3;
      *(_WORD *)(v1 + 34) = v4;
      *(_WORD *)(v1 + 56) = word_3004B04 + v3;
      *(_WORD *)(v1 + 58) = word_3004B06 + v4;
    }
    else
    {
      *(_WORD *)(v1 + 32) = word_3004B04 + v3;
      *(_WORD *)(v1 + 34) = word_3004B06 + v4;
      *(_WORD *)(v1 + 56) = v3;
      *(_WORD *)(v1 + 58) = v4;
    }
    v5 = *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 48) = 16 * v5;
    v6 = *(_WORD *)(v1 + 34);
    *(_WORD *)(v1 + 50) = 16 * v6;
    *(_WORD *)(v1 + 52) = 16 * (*(_WORD *)(v1 + 56) - (signed int)*(_WORD *)(v1 + 32)) / word_3004B08;
    *(_WORD *)(v1 + 54) = 16 * (*(_WORD *)(v1 + 58) - (signed int)*(_WORD *)(v1 + 34)) / word_3004B08;
    v7 = (unsigned __int16)sub_80790F0(*(_WORD *)(v1 + 56) - v5, *(_WORD *)(v1 + 58) - v6);
    if ( sub_8076BE0() << 24 )
      v7 = (v7 - 0x8000) & 0xFFFF;
    sub_8078FDC(v1, 0, 0x100u, 0x100u, v7);
    *(_DWORD *)(v1 + 28) = sub_80CC7D4;
  }
  else
  {
    move_anim_8072740(a1);
  }
  return v9;
}

int __fastcall sub_8131264(int a1)
{
  int v1; // r5@1
  __int16 *v2; // r2@3
  __int16 v3; // r1@3
  __int16 v4; // r1@3
  __int16 v5; // r1@4
  __int16 *v6; // r3@5
  __int16 v7; // r1@5
  __int16 v8; // r2@5
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8077ABC(v202F7C9, 2u);
  sub_8077ABC(v202F7C9, 3u);
  if ( battle_side_get_owner(v202F7C9) << 24 && !(sub_8076BE0() << 24) )
  {
    v2 = word_3004B00;
    v5 = *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 46) = v5 + word_3004B00[0];
    v4 = v5 + word_3004B04;
  }
  else
  {
    v2 = word_3004B00;
    v3 = *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 46) = v3 - word_3004B00[0];
    v4 = v3 - word_3004B04;
  }
  *(_WORD *)(v1 + 50) = v4;
  v6 = v2;
  v7 = *(_WORD *)(v1 + 34);
  v8 = v7 + v2[1];
  *(_WORD *)(v1 + 48) = v8;
  *(_WORD *)(v1 + 52) = v7 + v6[3];
  *(_WORD *)(v1 + 54) = v6[4];
  *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 34) = v8;
  *(_DWORD *)(v1 + 28) = sub_81311E4;
  return v10;
}

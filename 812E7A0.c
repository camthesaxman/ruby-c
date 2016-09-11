int __fastcall sub_812E7A0(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r1@2
  __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) )
  {
    *(_WORD *)(v1 + 32) = 240;
    v2 = word_3004B00;
    v3 = word_3004B00[0] - 30;
  }
  else
  {
    *(_WORD *)(v1 + 32) = 0;
    v2 = word_3004B00;
    v3 = word_3004B00[0];
  }
  *(_WORD *)(v1 + 34) = v3;
  *(_WORD *)(v1 + 50) = v2[2];
  StartSpriteAnim(v1, *((_BYTE *)v2 + 2));
  *(_DWORD *)(v1 + 28) = sub_812E7F0;
  return v5;
}

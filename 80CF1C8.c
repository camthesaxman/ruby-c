int __fastcall sub_80CF1C8(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r4@4
  signed __int16 v4; // r0@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  sub_80CEF44(*v2, v1);
  if ( battle_side_get_owner(v3) << 24 )
  {
    StartSpriteAnim(v1, 1);
    v4 = 3;
  }
  else
  {
    StartSpriteAnim(v1, 0);
    v4 = 2;
  }
  *(_WORD *)(v1 + 46) = v4;
  *(_DWORD *)(v1 + 28) = sub_80CF228;
  return v6;
}

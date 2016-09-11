int __fastcall sub_81300F4(int a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
    word_3004B00[0] = -word_3004B00[0];
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0) + word_3004B00[0];
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + word_3004B02;
  if ( word_3004B04 )
  {
    if ( word_3004B04 == 1 )
    {
      *(_BYTE *)(v1 + 63) |= 2u;
      *(_WORD *)(v1 + 46) = 640;
      *(_WORD *)(v1 + 48) = 640;
    }
    else
    {
      StartSpriteAnim(v1, 1);
      *(_WORD *)(v1 + 46) = 640;
    }
  }
  else
  {
    *(_WORD *)(v1 + 46) = 640;
    *(_WORD *)(v1 + 48) = -640;
  }
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 46) = -*(_WORD *)(v1 + 46);
    *(_BYTE *)(v1 + 63) |= 1u;
  }
  *(_DWORD *)(v1 + 28) = sub_81301B4;
  return v3;
}

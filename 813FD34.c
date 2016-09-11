int __fastcall sub_813FD34(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned __int8 v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( gSprites[68 * *(_BYTE *)((unsigned __int8)battle_get_side_with_given_state(0) + 0x2024BE0) + 63] & 0x10 )
  {
    v2 = battle_get_side_with_given_state(0);
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2 + 0x2024BE0)], 0);
    DestroyTask(v1);
  }
  return v4;
}

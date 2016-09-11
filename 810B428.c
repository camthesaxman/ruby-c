int __fastcall sub_810B428(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r4@10
  unsigned __int8 v3; // r0@10
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !(unsigned __int8)FieldEffectActiveListContains(6u) )
  {
    v202FF88 = player_get_direction_lower_nybble();
    v202FF88 = v202FF88;
    if ( v202FF88 == 1 )
      v202FF8C = 0;
    if ( v202FF88 == 2 )
      v202FF8C = 1;
    if ( v202FF88 == 3 )
      v202FF8C = 2;
    if ( v202FF88 == 4 )
      v202FF8C = 3;
    v2 = &dword_30048A0[9 * v202E85D];
    v3 = GetPlayerAvatarGraphicsIdByCurrentState();
    sub_805B980((int)v2, v3);
    StartSpriteAnim((int)&gSprites[68 * v202E85C], v202FF8C);
    FieldEffectActiveListRemove(6u);
    dword_3004B20[10 * v1] = (int)sub_810B4CC;
  }
  return v5;
}

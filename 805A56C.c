signed int __fastcall party_menu_update_status_condition_object(int a1)
{
  int v1; // r4@1
  char *v2; // r4@4
  unsigned __int8 v3; // r0@4
  char v4; // r0@4

  v1 = a1;
  sub_805A954(a1);
  ++*(_WORD *)(v1 + 8);
  if ( GetFishingWildMonListHeader() << 24 && !(Random() & 1) )
  {
    v2 = &gSprites[68 * v202E85C];
    v3 = player_get_direction_lower_nybble();
    v4 = sub_805FE08(v3);
    StartSpriteAnim((int)v2, v4);
  }
  else
  {
    *(_WORD *)(v1 + 8) = 11;
  }
  return 1;
}

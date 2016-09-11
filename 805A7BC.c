signed int __fastcall sub_805A7BC(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  unsigned __int8 v3; // r0@1
  char v4; // r0@1

  v1 = a1;
  sub_805A954(a1);
  v2 = &gSprites[68 * v202E85C];
  v3 = player_get_direction_lower_nybble();
  v4 = sub_805FDF8(v3);
  StartSpriteAnim((int)v2, v4);
  sub_8072044(&gUnknown_0842C5E2);
  *(_WORD *)(v1 + 8) = 13;
  return 1;
}

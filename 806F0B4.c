int __fastcall sub_806F0B4(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r6@1
  unsigned int v3; // r7@1
  int v4; // r2@1
  int *v5; // r0@2
  int (__fastcall *v6)(unsigned __int8); // r1@2
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  GetMonNickname(v201C000, (int)&gStringVar1);
  v201C008 = ItemIdToBattleMoveId(v201C006);
  StringCopy(&gStringVar2, &gMoveNames[13 * v201C008]);
  v201B282 = 0;
  if ( pokemon_has_move(v201C000, v201C008, v4) << 24 )
  {
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F49E);
    sub_806E834((int)&gStringVar4, 1u);
    v5 = &dword_3004B20[10 * v2];
    v6 = party_menu_link_mon_held_item_object;
_0806F1B6:
    *v5 = (int)v6;
    return v8;
  }
  if ( !sub_8040374(v201C000, (v201C006 - 33) & 0xFF) )
  {
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F347);
    sub_806E834((int)&gStringVar4, 1u);
    v5 = &dword_3004B20[10 * v2];
    v6 = party_menu_link_mon_held_item_object;
    goto _0806F1B6;
  }
  if ( GiveMoveToMon() << 16 == -65536 )
  {
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F37C);
    sub_806E834((int)&gStringVar4, 1u);
    v5 = &dword_3004B20[10 * v3];
    v6 = (int (__fastcall *)(unsigned __int8))sub_806F358;
    goto _0806F1B6;
  }
  sub_806F1D0(v2);
  return v8;
}

int __fastcall sub_8077094(unsigned __int8 a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( sub_8076BE0() << 24 || !(*(_BYTE *)(12 * v202F7C8 + 0x2017810) & 0x10) )
  {
    if ( battle_side_get_owner(v202F7C8) << 24 || sub_8076BE0() << 24 )
      v1 = 255 * v1 & 0xFF;
  }
  else
  {
    LOBYTE(v1) = -64;
    if ( battle_side_get_owner(v202F7C8) << 24 )
      LOBYTE(v1) = 63;
  }
  return (char)v1;
}

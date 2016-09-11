int __fastcall sub_8076F98(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  unsigned int v2; // r0@15

  v1 = a1;
  if ( !(sub_8076BE0() << 24) && *(_BYTE *)(12 * v202F7C8 + 0x2017810) & 0x10 )
  {
    LOBYTE(v1) = -64;
    if ( battle_side_get_owner(v202F7C8) << 24 )
      LOBYTE(v1) = 63;
    goto _0807706E;
  }
  if ( sub_8076BE0() << 24 )
  {
    if ( v202F7C8 == v202F7C9 && v202F7C8 == 2 && v1 == 63 )
      goto _0807707A;
    goto _08077068;
  }
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    if ( (unsigned __int8)battle_side_get_owner(v202F7C9) != 1 )
    {
_08077068:
      v2 = -16777216 * v1;
      goto _0807706C;
    }
    if ( (char)v1 == -64 )
      LOBYTE(v1) = 63;
  }
  else
  {
    if ( battle_side_get_owner(v202F7C9) << 24 )
      goto _0807706E;
    if ( (char)v1 == 63 )
    {
      LOBYTE(v1) = -64;
      goto _0807706E;
    }
    if ( (char)v1 != -64 )
    {
      v2 = -16777216 * (char)v1;
_0807706C:
      v1 = v2 >> 24;
      goto _0807706E;
    }
  }
_0807706E:
  if ( (char)v1 > 63 )
  {
    LOBYTE(v1) = 63;
    return (char)v1;
  }
_0807707A:
  if ( (char)v1 < -64 )
    LOBYTE(v1) = -64;
  return (char)v1;
}

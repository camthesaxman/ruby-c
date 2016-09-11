signed int __fastcall battle_exit_is_player_defeat(int a1)
{
  unsigned int v1; // r0@1
  signed int result; // r0@3

  v1 = a1 - 1;
  if ( v1 > 6 )
  {
def_808228C:
    result = 0;
  }
  else
  {
    switch ( v1 )
    {
      case 1u:
      case 2u:
        result = 1;
        break;
      default:
        goto def_808228C;
    }
  }
  return result;
}
